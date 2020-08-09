#include "Docs.h"
void Docs::index(const HttpRequestPtr &req,
                 std::function<void(const HttpResponsePtr &)> &&callback) const
{
    // write your application logic here
    //   auto resp = HttpResponse::newHttpResponse();
    //   resp->setStatusCode(k200OK);
    //   resp->setContentTypeCode(CT_TEXT_HTML);
    //   resp->setBody("Hello 中华行!");
    //  std::cout << "中国" << std::endl;
    // Json::Value result;
    // result["hello"] = "中国";
    // auto resp = HttpResponse::newHttpJsonResponse(result);

    auto para = req->getParameters();
    HttpViewData data;
    data.insert("lang", "zh-CN");
    data.insert("title", "中华行");
    auto resp = HttpResponse::newHttpViewResponse("doc.csp", data);
    callback(resp);
}
