#include "forum.h"
void forum::index(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{

    auto para = req->getParameters();
    HttpViewData data;
    data.insert("lang", "zh-CN");
    data.insert("title", "中华行");
    auto resp = HttpResponse::newHttpViewResponse("forum.csp", data);
    callback(resp);
}
