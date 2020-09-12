<template>
  <q-header elevated class="q-pa-sm">
    <!--        <q-toolbar>-->
    <!--&lt;!&ndash;          <q-btn flat round dense icon="menu" class="q-mr-sm"/>&ndash;&gt;-->
    <!--      -->
    <!--        </q-toolbar>-->

    <q-tabs v-model="tab" inline-label>

      <q-avatar>
        <img src="../assets/drogon.gif">
      </q-avatar>
      <q-toolbar-title>Drogon Web Framework</q-toolbar-title>


      <q-tab name="index" @click="$router.push('/index')" icon="eva-paper-plane-outline" label="首页"/>
      <q-tab name="wiki" @click="$router.push('/wiki')" icon="eva-book-open-outline" label="文档"/>
      <q-tab name="bbs" @click="$router.push('/bbs')" icon="eva-people-outline" label="论坛"/>

      <q-tab name="example" @click="$router.push('/example')" icon="eva-external-link-outline" label="示例"/>
      <q-tab name="join" @click="$router.push('/join')" icon="eva-plus-circle-outline" label="加入我们"/>

      <q-tab @click="goToUrl('https://github.com/an-tao/drogon-website')" name="github" flat round
             icon="eva-github-outline"
             label="Github" class="q-pr-lg"/>
    </q-tabs>
  </q-header>
</template>

<script>
  export default {
    name: "header",
    methods: {
      goToUrl: (url) => {
        window.open(url);
      }
    }
  }
</script>

<style scoped>

</style>
