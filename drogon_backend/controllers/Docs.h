#pragma once
#include <drogon/HttpController.h>
using namespace drogon;
class Docs: public drogon::HttpController<Docs>
{
  public:
    METHOD_LIST_BEGIN
    //use METHOD_ADD to add your custom processing function here;
    //METHOD_ADD(Docs::get,"/{2}/{1}",Get);//path is /Docs/{arg2}/{arg1}
    //METHOD_ADD(Docs::your_method_name,"/{1}/{2}/list",Get);//path is /Docs/{arg1}/{arg2}/list
    ADD_METHOD_TO(Docs::index,"/doc",Get);//path is /absolute/path/{arg1}/{arg2}/list

    METHOD_LIST_END
    // your declaration of processing function maybe like this:
    // void get(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback,int p1,std::string p2);
     void index(const HttpRequestPtr& req,std::function<void (const HttpResponsePtr &)> &&callback) const;
};
