<template>
  <q-page class="row  justify-start q-pa-lg-lg ">

    <div id="intro" class="row   q-pa-md" style="width: 100%">
      <div class="col-6 q-pa-sm justify-center q-gutter-sm">

        <div class="q-pa-lg q-ma-lg-md row items-start  q-gutter-sm">
          <div class="text-h5 q-mt-sm q-mb-xs text-green-8">Drogon Web Framework</div>
          <div class="text-teal-8 q-pa-md row">
            &ensp;&ensp;&ensp;&ensp;Drogon是一个基于C++14/17的Http应用框架，使用Drogon可以方便的使用C++构建各种类型的Web应用服务端程序。
            本版本库是github上Drogon工程的镜像库。Drogon是作者非常喜欢的美剧《权力的游戏》中的一条龙的名字(汉译作卓耿)，和龙有关但并不是dragon的误写，为了不至于引起不必要的误会这里说明一下。
          </div>
          <div class="text-h7 q-mt-sm text-green-8">主要特点</div>

          <div class="q-pa-md" style="width: 100%;">
            <!--            <q-list bordered padding class="rounded-borders text-teal-8">-->

            <!--              <q-item-->
            <!--                clickable-->
            <!--                v-ripple-->
            <!--                :active="link === 'outbox'"-->
            <!--                @click="link = 'outbox'"-->
            <!--                active-class="my-menu-link"-->
            <!--              >-->
            <!--                <q-item-section avatar>-->
            <!--                  <q-icon name="send"/>-->
            <!--                </q-item-section>-->

            <!--                <q-item-section>网络层使用基于epoll(macOS/FreeBSD下是kqueue)的非阻塞IO框架，提供高并发、高性能的网络IO。详细请见TFB Tests Results；-->
            <!--                </q-item-section>-->
            <!--              </q-item>-->
            <!--              <q-separator spaced/>-->
            <!--            </q-list>-->

            <q-list bordered class="rounded-borders">
              <q-expansion-item
                switch-toggle-side
                expand-separator
                icon="eva-star"
                label="提供高并发、高性能的网络IO"
              >
                <q-card>
                  <q-card-section>
                    网络层使用基于epoll(macOS/FreeBSD下是kqueue)的非阻塞IO框架，提供高并发、高性能的网络IO。详细请见TFB Tests Results
                  </q-card-section>
                </q-card>
              </q-expansion-item>

              <q-expansion-item
                switch-toggle-side
                expand-separator
                icon="eva-star"
                label="全异步编程模式"
              >
                <q-card>
                  <q-card-section>
                    全异步编程模式
                  </q-card-section>
                </q-card>
              </q-expansion-item>

              <q-expansion-item
                switch-toggle-side
                expand-separator
                icon="eva-star"
                label="支持Http1.0/1.1(server端和client端)"
              >
                <q-card>
                  <q-card-section>
                    支持Http1.0/1.1(server端和client端)
                  </q-card-section>
                </q-card>
              </q-expansion-item>

              <q-expansion-item
                switch-toggle-side
                expand-separator
                icon="eva-star"
                label="实现了简单的反射机制"
              >
                <q-card>
                  <q-card-section>
                    基于template实现了简单的反射机制，使主程序框架、控制器(controller)和视图(view)完全解耦
                  </q-card-section>
                </q-card>
              </q-expansion-item>

              <q-expansion-item
                switch-toggle-side
                expand-separator
                icon="eva-star"
                label="支持cookies和内建的session"
              >
                <q-card>
                  <q-card-section>
                    支持cookies和内建的session
                  </q-card-section>
                </q-card>
              </q-expansion-item>

              </q-card>
              </q-expansion-item>
            </q-list>


          </div>


          <div class=" row  q-gutter-sm">
            <q-card-actions>

              <q-btn flat color="green-8" icon="eva-diagonal-arrow-right-up">
                立即使用
              </q-btn>
              <q-btn flat color="green-8" icon="eva-github-outline q-icon">
                Github
              </q-btn>
            </q-card-actions>
          </div>
        </div>
      </div>
      <div class="col-6 q-pa-sm q-gutter-sm ">
        <div class="q-pa-md row items-start  q-gutter-sm">
          <div class="q-pa-md q-gutter-sm" style="width: 100%">
            <div class="text-h5 q-mt-sm q-mb-xs text-green-8">一个非常简单的例子</div>
            <div class="text-teal-8 q-pa-md row">
              &ensp;&ensp;&ensp;&ensp;不像大多数C++框架那样，drogon的主程序可以保持非常简单。 Drogon使用了一些小技巧使主程序和控制器解耦合.
              控制器的路由设置可以在控制器类中定义或者配置文件中完成.
              下面是一个典型的主程序的样子:
            </div>
            <q-card class="bg-teal-4" style="width: 100%">
              <q-card-section class="text-light-green-1 q-ma-lg">

                #include &lt;drogon/drogon.h><br/>
                using namespace drogon;<br/>
                <br/>
                int main()<br/>
                <br/>
                {<br/>
                &nbsp; &nbsp; &nbsp;app().setLogPath("./")<br/>
                &nbsp; &nbsp; &nbsp;.setLogLevel(trantor::Logger::kWarn)<br/>
                &nbsp; &nbsp; &nbsp;.addListener("0.0.0.0", 80)<br/>
                &nbsp; &nbsp; &nbsp;.setThreadNum(16)<br/>
                &nbsp; &nbsp; &nbsp;.enableRunAsDaemon()<br/>
                &nbsp; &nbsp; &nbsp;.run();<br/>
                <br/>
                }<br/>
              </q-card-section>
            </q-card>
            </q-expansion-item>
          </div>
        </div>

      </div>
    </div>
  </q-page>
</template>

<script lang="ts">
  import {Todo, Meta} from 'components/models';
  import ExampleComponent from 'components/CompositionComponent.vue';
  import {defineComponent, ref} from '@vue/composition-api';

  export default defineComponent({
    name: 'PageIndex',
    components: {},
    setup() {

    },
    data() {
      return {
        editor: "#include <\drogon/drogon.h>\n" +
          "using namespace drogon;\n" +
          "int main()\n" +
          "{\n" +
          "    app().setLogPath(\"./\")\n" +
          "         .setLogLevel(trantor::Logger::kWarn)\n" +
          "         .addListener(\"0.0.0.0\", 80)\n" +
          "         .setThreadNum(16)\n" +
          "         .enableRunAsDaemon()\n" +
          "         .run();\n" +
          "}",
      }

    }
  });
</script>

<style scoped>
  .my-card {
    /*max-width: 800px;*/
    /*height: 260px;*/
  }

</style>

