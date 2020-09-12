<template>
  <div class="q-md">
    <q-layout view="lHh lpr lFf" container style="height: 1200px" class="shadow-2 rounded-borders flex">
      <Header></Header>

      <q-page-container>
        <router-view/>
      </q-page-container>
    </q-layout>
  </div>
</template>

<script lang="ts">
  import header from 'components/header.vue'

  import {defineComponent, ref} from '@vue/composition-api';
  import Header from "components/header.vue";

  export default defineComponent({
    name: 'layout',
    components: {Header},
    setup() {

    },
    data: () => {
      return {
        tab: 'index'
      }
    }
  });
</script>
