import {RouteConfig} from 'vue-router';

const routes: RouteConfig[] = [
    {
      path: '/',
      component: () => import('layouts/layout.vue'),
      children: [

        {path: 'wiki', component: () => import('pages/wiki.vue')},
        {path: 'bbs', component: () => import('pages/bbs.vue')},
        {path: 'example', component: () => import('pages/example.vue')},
        {path: 'join', component: () => import('pages/join.vue')},
        {path: '*', component: () => import('pages/Index.vue')},
      ]
    },
    {
      path: '*',
      component: () => import('layouts/layout.vue')
    },

  ]
;

export default routes;
