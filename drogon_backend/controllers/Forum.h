#pragma once
#include <drogon/HttpController.h>
using namespace drogon;
class Forum : public drogon::HttpController<Forum>
{
  public:
    METHOD_LIST_BEGIN
    // use METHOD_ADD to add your custom processing function here;
    // METHOD_ADD(forum::get,"/{2}/{1}",Get);//path is /forum/{arg2}/{arg1}
    // METHOD_ADD(forum::your_method_name,"/{1}/{2}/list",Get);//path is
    // /forum/{arg1}/{arg2}/list
    ADD_METHOD_TO(Forum::index,
                  "/forum",
                  Get);  // path is /absolute/path/{arg1}/{arg2}/list
    METHOD_LIST_END
    // your declaration of processing function maybe like this:
    // void get(const HttpRequestPtr& req,std::function<void (const
    // HttpResponsePtr &)> &&callback,int p1,std::string p2);
    void index(const HttpRequestPtr &req,
               std::function<void(const HttpResponsePtr &)> &&callback) const;
};
