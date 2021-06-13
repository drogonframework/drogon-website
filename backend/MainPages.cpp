#include <drogon/HttpController.h>
#include <drogon/HttpClient.h>
using namespace drogon;
class MainPagesController : public HttpController<MainPagesController>
{
public:
	METHOD_LIST_BEGIN
		ADD_METHOD_TO(MainPagesController::indexPage, "/", {Get});
	METHOD_LIST_END

	void indexPage(const HttpRequestPtr& req, std::function<void(const HttpResponsePtr &)>&& callback)
	{
		auto resp = HttpResponse::newHttpViewResponse("IndexPage");
		callback(resp);
	}
};