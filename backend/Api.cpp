#include <drogon/HttpController.h>
#include <drogon/HttpClient.h>

#include <nlohmann/json.hpp>

using namespace drogon;

namespace api
{
class v1 : public HttpController<v1>
{
  public:
    v1() : client_(HttpClient::newHttpClient("https://api.github.com"))
    {
    }
    METHOD_LIST_BEGIN
    METHOD_ADD(v1::getContributors, "contributor_avatar_links", {Get});
    METHOD_LIST_END

    HttpClientPtr client_;

    Task<> getContributors(HttpRequestPtr req, std::function<void(const HttpResponsePtr&)> callback)
    {
        req = HttpRequest::newHttpRequest();
        req->setPath("/repos/an-tao/drogon/contributors");
        auto res = co_await client_->sendRequestCoro(req);
        if (res->contentType() != CT_APPLICATION_JSON || res->statusCode() != k200OK)
            throw std::runtime_error("GitHub contributors API did not respond with expected result");

        nlohmann::json contributor_info = nlohmann::json::parse(res->body());
        std::vector<std::string> avatar_links;
        for (const auto& elem : contributor_info.items())
            avatar_links.push_back(elem.value()["avatar_url"].get<std::string>());
        // Only keep at most 50 users
        if (avatar_links.size() > 50)
            avatar_links.resize(50);
        std::string resp_json = nlohmann::json(avatar_links).dump();

        auto resp = HttpResponse::newHttpResponse();
        resp->setBody(std::move(resp_json));
        resp->setContentTypeCode(CT_APPLICATION_JSON);
        // Cache for 6 hours
        resp->setExpiredTime(3600 * 6);
        callback(resp);
    }
};

}  // namespace api