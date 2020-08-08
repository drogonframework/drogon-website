#include "Home.h"
#include "consts.h"
void Home::index(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{

      HttpViewData data;
      auto acceptLanguage = req->getHeader("Accept-Language");
      // englist
      if(acceptLanguage.find("zh-CN,zh")==std::string::npos){
          data.insert("lang", LANG_EN);
          data.insert("title", TITLE_EN);
          data.insert("keywords", KEYWORDS_EN);
          data.insert("description", DESCRIPTION_EN);
          data.insert("home", HOME_EN);
          data.insert("docs", DOC_EN);
          data.insert("forum", FORUM_EN);
          data.insert("detail", DETAIL_EN);
          data.insert("reverseurl", REVERSE_URL_ZH);
          data.insert("reverse", REVERSE_ZH);
      }else{ // 中文
          data.insert("lang", LANG_ZH);
          data.insert("title", TITLE_ZH);
          data.insert("keywords", KEYWORDS_ZH);
          data.insert("description", DESCRIPTION_ZH);
          data.insert("home", HOME_ZH);
          data.insert("docs", DOC_ZH);
          data.insert("forum", FORUM_ZH);
          data.insert("detail", DETAIL_ZH);
          data.insert("reverseurl", REVERSE_URL_EN);
          data.insert("reverse", REVERSE_EN);

      }

      auto resp = HttpResponse::newHttpViewResponse("home.csp", data);
      callback(resp);
}

void Home::en(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) const
{

    auto para = req->getParameters();
    HttpViewData data;
    data.insert("lang", LANG_EN);
    data.insert("title", TITLE_EN);
    data.insert("keywords", KEYWORDS_EN);
    data.insert("description", DESCRIPTION_EN);
    data.insert("home", HOME_EN);
    data.insert("docs", DOC_EN);
    data.insert("forum", FORUM_EN);
    data.insert("detail", DETAIL_EN);
    data.insert("reverseurl", REVERSE_URL_ZH);
    data.insert("reverse", REVERSE_ZH);

    auto resp = HttpResponse::newHttpViewResponse("home.csp", data);
    callback(resp);
}

void Home::zh(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback) const {

    auto para = req->getParameters();
    HttpViewData data;
    data.insert("lang", LANG_ZH);
    data.insert("title", TITLE_ZH);
    data.insert("keywords", KEYWORDS_ZH);
    data.insert("description", DESCRIPTION_ZH);
    data.insert("home", HOME_ZH);
    data.insert("docs", DOC_ZH);
    data.insert("forum", FORUM_ZH);
    data.insert("detail", DETAIL_ZH);
    data.insert("reverseurl", REVERSE_URL_EN);
    data.insert("reverse", REVERSE_EN);

    auto resp = HttpResponse::newHttpViewResponse("home.csp", data);
    callback(resp);
}