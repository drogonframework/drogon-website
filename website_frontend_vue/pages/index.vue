<template>
  <div>
      <div style="width: 100%;">
        <!-- <div style="background-color: #FC6C06;padding-top: 150px; padding-bottom: 100px;"> -->
        <div class="bgsecond banner">
            <div align="center">
                <div style="display: flex; align-content: center;align-items: center;justify-content:center;">
                    <img src="~/static/drogon_white.png" alt="drogon" style="width:180px;height:180px;">
                    <div class="doc-title mdui-typo-display-4 " align="center " style="font-weight:500; color: #FFF; ">
                        Drogon
                    </div>
                </div>
            </div>
            
            
            <!-- <div class="doc-title mdui-text-color-theme mdui-typo-display-4 " align="center " style="font-weight:500;margin-top: 150px; ">
                Drogon
            </div> -->
            <div class="doc-title mdui-typo-display-1 " align="center " style="margin-top: 80px; color: #FFF; ">
                C++ powerful web framework build with C++14/17
            </div>
            <!-- <div class="doc-title mdui-text-color-theme mdui-typo-display-1 " align="center " style="margin-top: 80px ">
                C++ powerful web framework build with C++14/17
            </div> -->
            <div style="margin-top: 50px; " align="center ">
                <a href="javascript:void(0) " class="btn btn-outline-warning">github</a>
                <a href="javascript:void(0) " class="btn btn-outline-warning">gitee</a>
            </div>

            <!-- <img class="mdui-img-fluid z-index=-1 " src="drogon.jpg " /> -->
        </div>
    </div>
    <div class="container">
        <article class="mdui-typo">
            <h2 class=" mdui-text-color-theme"><a id="user-content-关于drogon" class="anchor" aria-hidden="true" href="#关于drogon"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>关于drogon</h2>
            <p><strong>Drogon</strong>是一个基于C++14/17的Http应用框架，使用Drogon可以方便的使用C++构建各种类型的Web应用服务端程序。 本版本库是github上
                <a href="https://github.com/an-tao/drogon">Drogon工程</a>的镜像库。<strong>Drogon</strong>是作者非常喜欢的美剧《权力的游戏》中的一条龙的名字(汉译作卓耿)，和龙有关但并不是dragon的误写，为了不至于引起不必要的误会这里说明一下。</p>
            <p>Drogon是一个跨平台框架，它支持Linux，也支持macOS、FreeBSD，和Windows。它的主要特点如下：</p>
            <ul class="mdui-list">
                <li class="mdui-list-item">网络层使用基于epoll(macOS/FreeBSD下是kqueue)的非阻塞IO框架，提供高并发、高性能的网络IO。详细请见<a href="https://www.techempower.com/benchmarks/#section=data-r19&amp;hw=ph&amp;test=composite" rel="nofollow">TFB Tests Results</a>；</li>
                <li class="mdui-list-item">全异步编程模式；</li>
                <li class="mdui-list-item">支持Http1.0/1.1(server端和client端)；</li>
                <li class="mdui-list-item">基于template实现了简单的反射机制，使主程序框架、控制器(controller)和视图(view)完全解耦；</li>
                <li class="mdui-list-item">支持cookies和内建的session；</li>
                <li class="mdui-list-item">支持后端渲染，把控制器生成的数据交给视图生成Html页面，视图由CSP模板文件描述，通过CSP标签把C++代码嵌入到Html页面，由drogon的命令行工具在编译阶段自动生成C++代码并编译；</li>
                <li class="mdui-list-item">支持运行期的视图页面动态加载(动态编译和加载so文件)；</li>
                <li class="mdui-list-item">非常方便灵活的路径(path)到控制器处理函数(handler)的映射方案；</li>
                <li class="mdui-list-item">支持过滤器(filter)链，方便在控制器之前执行统一的逻辑(如登录验证、Http Method约束验证等)；</li>
                <li class="mdui-list-item">支持https(基于OpenSSL实现);</li>
                <li class="mdui-list-item">支持websocket(server端和client端);</li>
                <li class="mdui-list-item">支持Json格式请求和应答, 对Restful API应用开发非常友好;</li>
                <li class="mdui-list-item">支持文件下载和上传,支持sendfile系统调用；</li>
                <li class="mdui-list-item">支持gzip/brotli压缩传输；</li>
                <li class="mdui-list-item">支持pipelining；</li>
                <li class="mdui-list-item">提供一个轻量的命令行工具drogon_ctl，帮助简化各种类的创建和视图代码的生成过程；</li>
                <li class="mdui-list-item">基于非阻塞IO实现的异步数据库读写，目前支持PostgreSQL和MySQL(MariaDB)数据库；</li>
                <li class="mdui-list-item">基于线程池实现sqlite3数据库的异步读写，提供与上文数据库相同的接口；</li>
                <li class="mdui-list-item">支持ARM架构；</li>
                <li class="mdui-list-item">方便的轻量级ORM实现，支持常规的对象到数据库的双向映射操作；</li>
                <li class="mdui-list-item">支持插件，可通过配置文件在加载期动态拆装；</li>
                <li class="mdui-list-item">支持内建插入点的AOP</li>
            </ul>
            <h2 class=" mdui-text-color-theme"><a id="user-content-一个非常简单的例子" class="anchor" aria-hidden="true" href="#一个非常简单的例子"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>一个非常简单的例子</h2>
            <p>不像大多数C++框架那样，drogon的主程序可以保持非常简单。 Drogon使用了一些小技巧是主程序和控制器解耦合. 控制器的路径路由设置可以在控制器类定义中或者配置文件中完成.</p>
            <p>下面是一个典型的主程序的样子:</p>
            <div class="highlight highlight-source-c++"><pre>#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>drogon/drogon.h<span class="pl-pds">&gt;</span></span>
                <span class="pl-k">using</span> <span class="pl-k">namespace</span> <span class="pl-en">drogon</span><span class="pl-k">;</span>
                <span class="pl-k">int</span> <span class="pl-en">main</span>()
                {
                    <span class="pl-c1">app</span>().<span class="pl-c1">setLogPath</span>(<span class="pl-s"><span class="pl-pds">"</span>./<span class="pl-pds">"</span></span>)
                         .<span class="pl-c1">setLogLevel</span>(trantor::Logger::<span class="pl-c1">kWarn</span>)
                         .<span class="pl-c1">addListener</span>(<span class="pl-s"><span class="pl-pds">"</span>0.0.0.0<span class="pl-pds">"</span></span>, <span class="pl-c1">80</span>)
                         .<span class="pl-c1">setThreadNum</span>(<span class="pl-c1">16</span>)
                         .<span class="pl-c1">enableRunAsDaemon</span>()
                         .<span class="pl-c1">run</span>();
                }</pre></div>
            <p>如果使用配置文件，可以进一步简化成如下的样子:</p>
            <div class="highlight highlight-source-c++"><pre>#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>drogon/drogon.h<span class="pl-pds">&gt;</span></span>
                <span class="pl-k">using</span> <span class="pl-k">namespace</span> <span class="pl-en">drogon</span><span class="pl-k">;</span>
                <span class="pl-k">int</span> <span class="pl-en">main</span>()
                {
                    <span class="pl-c1">app</span>().<span class="pl-c1">loadConfigFile</span>(<span class="pl-s"><span class="pl-pds">"</span>./config.json<span class="pl-pds">"</span></span>).<span class="pl-c1">run</span>();
                }</pre></div>
            <p>当然，Drogon也提供了一些接口，使用户可以在main()函数中直接添加控制器逻辑，比如，用户可以注册一个lambda处理器到drogon框架中，如下所示：</p>
            <div class="highlight highlight-source-c++"><pre>app.registerHandler(<span class="pl-s"><span class="pl-pds">"</span>/test?username={name}<span class="pl-pds">"</span></span>,
                                    [](<span class="pl-k">const</span> HttpRequestPtr&amp; req,
                                       std::function&lt;<span class="pl-k">void</span> (<span class="pl-k">const</span> HttpResponsePtr &amp;)&gt; &amp;&amp;callback,
                                       <span class="pl-k">const</span> std::string &amp;name)
                                    {
                                        Json::Value json;
                                        json[<span class="pl-s"><span class="pl-pds">"</span>result<span class="pl-pds">"</span></span>]=<span class="pl-s"><span class="pl-pds">"</span>ok<span class="pl-pds">"</span></span>;
                                        json[<span class="pl-s"><span class="pl-pds">"</span>message<span class="pl-pds">"</span></span>]=<span class="pl-c1">std::string</span>(<span class="pl-s"><span class="pl-pds">"</span>hello,<span class="pl-pds">"</span></span>)+name;
                                        <span class="pl-k">auto</span> resp=<span class="pl-c1">HttpResponse::newHttpJsonResponse</span>(json);
                                        <span class="pl-c1">callback</span>(resp);
                                    },
                                    {Get,<span class="pl-s"><span class="pl-pds">"</span>LoginFilter<span class="pl-pds">"</span></span>});</pre></div>
            <p>这看起来是很方便，但是这并不适用于复杂的应用，试想假如有数十个或者数百个处理函数要注册进框架，main()函数将膨胀到不可读的程度。显然，让每个包含处理函数的类在自己的定义中完成注册是更好的选择。所以，除非你的应用逻辑非常简单，我们不推荐使用上述接口，更好的实践是，我们可以创建一个HttpSimpleController对象，如下：</p>
            <div class="highlight highlight-source-c++"><pre><span class="pl-c"><span class="pl-c">//</span>/ The TestCtrl.h file</span>
                #<span class="pl-k">pragma</span> once
                #<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>drogon/HttpSimpleController.h<span class="pl-pds">&gt;</span></span>
                <span class="pl-k">using</span> <span class="pl-k">namespace</span> <span class="pl-en">drogon</span><span class="pl-k">;</span>
                <span class="pl-k">class</span> <span class="pl-en">TestCtrl</span>:<span class="pl-k">public</span> <span class="pl-en">drogon</span>::HttpSimpleController&lt;TestCtrl&gt;
                {
                <span class="pl-k">public:</span>
                    <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">asyncHandleHttpRequest</span>(<span class="pl-k">const</span> HttpRequestPtr&amp; req, std::function&lt;<span class="pl-k">void</span> (<span class="pl-k">const</span> HttpResponsePtr &amp;)&gt; &amp;&amp;callback) <span class="pl-k">override</span>;
                    PATH_LIST_BEGIN
                    <span class="pl-en">PATH_ADD</span>(<span class="pl-s"><span class="pl-pds">"</span>/test<span class="pl-pds">"</span></span>,Get);
                    PATH_LIST_END
                };
                
                <span class="pl-c"><span class="pl-c">//</span>/ The TestCtrl.cc file</span>
                #<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">"</span>TestCtrl.h<span class="pl-pds">"</span></span>
                <span class="pl-k">void</span> <span class="pl-en">TestCtrl::asyncHandleHttpRequest</span>(<span class="pl-k">const</span> HttpRequestPtr&amp; req,
                                                      std::function&lt;<span class="pl-k">void</span> (<span class="pl-k">const</span> HttpResponsePtr &amp;)&gt; &amp;&amp;callback)
                {
                    <span class="pl-c"><span class="pl-c">//</span>write your application logic here</span>
                    <span class="pl-k">auto</span> resp = <span class="pl-c1">HttpResponse::newHttpResponse</span>();
                    resp-&gt;<span class="pl-c1">setBody</span>(<span class="pl-s"><span class="pl-pds">"</span>&lt;p&gt;Hello, world!&lt;/p&gt;<span class="pl-pds">"</span></span>);
                    resp-&gt;<span class="pl-c1">setExpiredTime</span>(<span class="pl-c1">0</span>);
                    <span class="pl-c1">callback</span>(resp);
                }</pre></div>
            <p><strong>上面程序的大部分代码都可以由<code>drogon_ctl</code>命令创建</strong>（这个命令是<code>drogon_ctl create controller TestCtr</code>）。用户所需做的就是添加自己的业务逻辑。在这个例子中，当客户端访问URL<code>http://ip/test</code>时，控制器简单的返回了一个<code>Hello, world!</code>页面。</p>
            <p>对于JSON格式的响应，我们可以像下面这样创建控制器：</p>
            <div class="highlight highlight-source-c++"><pre><span class="pl-c"><span class="pl-c">//</span>/ The header file</span>
                #<span class="pl-k">pragma</span> once
                #<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>drogon/HttpSimpleController.h<span class="pl-pds">&gt;</span></span>
                <span class="pl-k">using</span> <span class="pl-k">namespace</span> <span class="pl-en">drogon</span><span class="pl-k">;</span>
                <span class="pl-k">class</span> <span class="pl-en">JsonCtrl</span> : <span class="pl-k">public</span> <span class="pl-en">drogon</span>::HttpSimpleController&lt;JsonCtrl&gt;
                {
                  <span class="pl-k">public:</span>
                    <span class="pl-k">virtual</span> <span class="pl-k">void</span> <span class="pl-en">asyncHandleHttpRequest</span>(<span class="pl-k">const</span> HttpRequestPtr &amp;req, std::function&lt;<span class="pl-k">void</span>(<span class="pl-k">const</span> HttpResponsePtr &amp;)&gt; &amp;&amp;callback) <span class="pl-k">override</span>;
                    PATH_LIST_BEGIN
                    <span class="pl-c"><span class="pl-c">//</span>list path definitions here;</span>
                    <span class="pl-en">PATH_ADD</span>(<span class="pl-s"><span class="pl-pds">"</span>/json<span class="pl-pds">"</span></span>, Get);
                    PATH_LIST_END
                };
                
                <span class="pl-c"><span class="pl-c">//</span>/ The source file</span>
                #<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">"</span>JsonCtrl.h<span class="pl-pds">"</span></span>
                <span class="pl-k">void</span> <span class="pl-en">JsonCtrl::asyncHandleHttpRequest</span>(<span class="pl-k">const</span> HttpRequestPtr &amp;req,
                                                      std::function&lt;<span class="pl-k">void</span>(<span class="pl-k">const</span> HttpResponsePtr &amp;)&gt; &amp;&amp;callback)
                {
                    Json::Value ret;
                    ret[<span class="pl-s"><span class="pl-pds">"</span>message<span class="pl-pds">"</span></span>] = <span class="pl-s"><span class="pl-pds">"</span>Hello, World!<span class="pl-pds">"</span></span>;
                    <span class="pl-k">auto</span> resp = <span class="pl-c1">HttpResponse::newHttpJsonResponse</span>(ret);
                    <span class="pl-c1">callback</span>(resp);
                }</pre></div>
            <p>让我们更进一步，通过HttpController类创建一个RESTful API的例子，如下所示（忽略了实现文件）：</p>
            <div class="highlight highlight-source-c++"><pre><span class="pl-c"><span class="pl-c">//</span>/ The header file</span>
                #<span class="pl-k">pragma</span> once
                #<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>drogon/HttpController.h<span class="pl-pds">&gt;</span></span>
                <span class="pl-k">using</span> <span class="pl-k">namespace</span> <span class="pl-en">drogon</span><span class="pl-k">;</span>
                <span class="pl-k">namespace</span> <span class="pl-en">api</span>
                {
                <span class="pl-k">namespace</span> <span class="pl-en">v1</span>
                {
                <span class="pl-k">class</span> <span class="pl-en">User</span> : <span class="pl-k">public</span> <span class="pl-en">drogon</span>::HttpController&lt;User&gt;
                {
                  <span class="pl-k">public:</span>
                    METHOD_LIST_BEGIN
                    <span class="pl-c"><span class="pl-c">//</span>use METHOD_ADD to add your custom processing function here;</span>
                    <span class="pl-en">METHOD_ADD</span>(User::getInfo, <span class="pl-s"><span class="pl-pds">"</span>/{id}<span class="pl-pds">"</span></span>, Get);                  <span class="pl-c"><span class="pl-c">//</span>path is /api/v1/User/{arg1}</span>
                    <span class="pl-en">METHOD_ADD</span>(User::getDetailInfo, <span class="pl-s"><span class="pl-pds">"</span>/{id}/detailinfo<span class="pl-pds">"</span></span>, Get);  <span class="pl-c"><span class="pl-c">//</span>path is /api/v1/User/{arg1}/detailinfo</span>
                    <span class="pl-en">METHOD_ADD</span>(User::newUser, <span class="pl-s"><span class="pl-pds">"</span>/{name}<span class="pl-pds">"</span></span>, Post);                 <span class="pl-c"><span class="pl-c">//</span>path is /api/v1/User/{arg1}</span>
                    METHOD_LIST_END
                    <span class="pl-c"><span class="pl-c">//</span>your declaration of processing function maybe like this:</span>
                    <span class="pl-k">void</span> <span class="pl-en">getInfo</span>(<span class="pl-k">const</span> HttpRequestPtr &amp;req, std::function&lt;<span class="pl-k">void</span>(<span class="pl-k">const</span> HttpResponsePtr &amp;)&gt; &amp;&amp;callback, int userId) <span class="pl-k">const</span>;
                    <span class="pl-k">void</span> <span class="pl-en">getDetailInfo</span>(<span class="pl-k">const</span> HttpRequestPtr &amp;req, std::function&lt;<span class="pl-k">void</span>(<span class="pl-k">const</span> HttpResponsePtr &amp;)&gt; &amp;&amp;callback, int userId) <span class="pl-k">const</span>;
                    <span class="pl-k">void</span> <span class="pl-en">newUser</span>(<span class="pl-k">const</span> HttpRequestPtr &amp;req, std::function&lt;<span class="pl-k">void</span>(<span class="pl-k">const</span> HttpResponsePtr &amp;)&gt; &amp;&amp;callback, std::string &amp;&amp;userName);
                  <span class="pl-k">public:</span>
                    <span class="pl-en">User</span>()
                    {
                        LOG_DEBUG &lt;&lt; <span class="pl-s"><span class="pl-pds">"</span>User constructor!<span class="pl-pds">"</span></span>;
                    }
                };
                } <span class="pl-c"><span class="pl-c">//</span> namespace v1</span>
                } <span class="pl-c"><span class="pl-c">//</span> namespace api</span></pre></div>
            <p>如你所见，通过<code>HttpController</code>类，用户可以同时映射路径和路径参数，这对RESTful API应用来说非常方便。</p>
            <p>另外，你可以发现前面所有的处理函数接口都是异步的，处理器的响应是通过回调对象返回的。这种设计是出于对高性能的考虑，因为在异步模式下，可以使用少量的线程（比如和处理器核心数相等的线程）处理大量的并发请求。</p>
            <p>编译上述的所有源文件后，我们得到了一个非常简单的web应用程序，这是一个不错的开始。<strong>请访问<a href="https://github.com/an-tao/drogon/wiki/01-Overview">wiki</a>或者<a href="https://doxiz.com/drogon/master/overview/" rel="nofollow">doxiz</a>以获取更多的信息</strong></p>
            <h2 class=" mdui-text-color-theme"><a id="user-content-贡献方式" class="anchor" aria-hidden="true" href="#贡献方式"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>贡献方式</h2>
            <p>欢迎您的贡献。 请阅读<a href="/an-tao/drogon/blob/master/CONTRIBUTING.md">贡献指南</a>以获取更多的信息。</p>
            <h2 class=" mdui-text-color-theme"><a id="user-content-qq交流群1137909452" class="anchor" aria-hidden="true" href="#qq交流群1137909452"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M7.775 3.275a.75.75 0 001.06 1.06l1.25-1.25a2 2 0 112.83 2.83l-2.5 2.5a2 2 0 01-2.83 0 .75.75 0 00-1.06 1.06 3.5 3.5 0 004.95 0l2.5-2.5a3.5 3.5 0 00-4.95-4.95l-1.25 1.25zm-4.69 9.64a2 2 0 010-2.83l2.5-2.5a2 2 0 012.83 0 .75.75 0 001.06-1.06 3.5 3.5 0 00-4.95 0l-2.5 2.5a3.5 3.5 0 004.95 4.95l1.25-1.25a.75.75 0 00-1.06-1.06l-1.25 1.25a2 2 0 01-2.83 0z"></path></svg></a>QQ交流群：1137909452</h2>
            <p>欢迎交流探讨。</p>
        </article>
    </div>
</div>
  <!-- <div class="container">
    <div>
      <Logo />
      <h1 class="title">
        website_front
      </h1>
      <div class="links">
        <a
          href="https://nuxtjs.org/"
          target="_blank"
          rel="noopener noreferrer"
          class="button--green"
        >
          Documentation
        </a>
        <a
          href="https://github.com/nuxt/nuxt.js"
          target="_blank"
          rel="noopener noreferrer"
          class="button--grey"
        >
          GitHub
        </a>
      </div>
    </div>
  </div> -->
</template>

<script>

import axios from 'axios'

export default {
  name: 'index',
  data(){
		return {
			lang: "zh-CN",
			titleAppend: "框架",
		}
	},
  html(){
    return{
      html: "lang=zh-CN",
    }
  },
  head() {
    return{
      title: 'drogon',
      titleTemplate: '%s_powerful C++ web '+this.titleAppend,
      meta: [
          { charset: 'utf-8' },
          { name: 'viewport', content: 'width=device-width, initial-scale=1' },
          { hid: "Keywords", name: 'Keywords', content: 'IT外包,java外包,php外包,Android外包,ios外包,python外包,golang外包,IT博客,java博客,php博客,Android博客,ios博客,python博客,golang博客' },
          { hid: 'description', name: 'description', content: '不同的编程语言，不过是同一种思想在不同符号下的演绎，当可以把动态语言写到精巧、规整，把静态语言用到灵动、神变之时，每当灵感迸发之际，倾泻而下的思绪便可跟随指尖，化作随性、自在的表达。专业的个人IT项目外包，全国接单，java项目、php项目、python项目、golang项目、Android项目、ios项目 来者不拒，欢迎广大同行、客户前来合作' }
      ]
    }
  },
  
  async asyncData ({ req, res }) {
  // async asyncData ({ app }, callback) {
  //   app.head.title = "drogon_a powerful C++ webframework"
  //   callback(null, {})
    // console.log(this.title)
    // if(req){
    //   let acceptLanguage = req.headers["accept-language"];
    //   if(acceptLanguage.indexOf("zh") == -1){
    //     this.lang = "en-US"
    //     this.titleAppend = "framework"
    //   }else{
    //     // this.lang = "zh-CN"
    //     app.head.title = "框架"
    //     app.head.title = "asdggdasgd"
    //   }
    // }

  },
	mounted(){
      console.log(this)

			// fetch('http://localhost:8080/api/index', {
			// 	method: 'GET',
			// 	credentials: 'include',
			// 	headers: new Headers({
			// 		'Content-Type': 'application/json;charset=UTF-8'
			// 	}),
			// 	// body: JSON.stringify({ name: 'test' })
			// }).then(response => {
			// 	// 将数据处理为 JSON 格式，返回一个 Promise
			// 	return response.json();
			// })
			// .then(data => {
			// 	console.log(data);
			// 	this.article = data.article;
			// 	this.arrayList = data.objList;
			// })
			// .catch(e=>console.log('error' + e));;

	},
	methods: {
        goToArticleDetail(){
            // this.$router.push({name: "article-id", query: {id: this.article.id}})
        },
        goToClassifyDetail(id){
            // this.$router.push({name: "classify-id", query: {id: id, page: 1}})
            
        }
	}
}
</script>

<style>
.banner{
  padding-top: 150px; 
  padding-bottom: 100px; 
  display: flex; 
  flex-direction: column; 
  align-content: center; 
  align-items: center; 
  justify-content: center;
}
/* .container {
  margin: 0 auto;
  min-height: 100vh;
  display: flex;
  justify-content: center;
  align-items: center;
  text-align: center;
}

.title {
  font-family:
    'Quicksand',
    'Source Sans Pro',
    -apple-system,
    BlinkMacSystemFont,
    'Segoe UI',
    Roboto,
    'Helvetica Neue',
    Arial,
    sans-serif;
  display: block;
  font-weight: 300;
  font-size: 100px;
  color: #35495e;
  letter-spacing: 1px;
}

.subtitle {
  font-weight: 300;
  font-size: 42px;
  color: #526488;
  word-spacing: 5px;
  padding-bottom: 15px;
}

.links {
  padding-top: 15px;
} */
</style>
