#pragma once
#include <drogon/HttpController.h>

using namespace drogon;
class Home: public drogon::HttpController<Home>
{
  public:
    METHOD_LIST_BEGIN
    //list path definitions here;
    //PATH_ADD("/path","filter1","filter2",HttpMethod1,HttpMethod2...);
    ADD_METHOD_TO(Home::index,"/", Get, Post);
    ADD_METHOD_TO(Home::zh,"/zh", Get, Post);
    ADD_METHOD_TO(Home::en,"/en", Get, Post);
    METHOD_LIST_END

    void index(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
    void zh(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
    void en(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const;
};
