<template>
	
<!-- ========================== -->
<!-- Navigation -->
<!-- ========================== -->
<header style="height:80px;">

    <nav style="width: 100%; background-color: #FF5722">
        <div class="container ">
            <div class="flex-row ">
                <!-- <div>
                    <h1 class="doc-title mdui-text-color-theme mdui-typo-title ">Drogon</h1>
                </div> -->

                <ul class="myul ">
                    <li class="boxulli " style="width: 25%;" @click="clickli(0)">
                        <div class="row">
                            <img src="~/static/drogon_white.png" alt="drogon" style="width:75px; height:75px;" v-show="currentIndex!=0">
                            <h1 style="color: #FFF;">
                                <nuxt-link to="/">Drogon</nuxt-link>
                            </h1>
                        </div>
                        
                    </li>
                    <nuxt-link to="/" class="boxulli ">
                        <li :class="{bgsecond: 0==currentIndex}" style="display: flex; justify-content: center" @click="clickli(0)">
                            <text style="color: #FFF; font-size: x-large;">
                                首页
                            </text>
                        </li>
                    </nuxt-link>
                    <nuxt-link to="/doc" class="boxulli " >
                        <li :class="{bgsecond: 1==currentIndex}" style="display: flex; justify-content: center" @click="clickli(1)">
                            <text style="color: #FFF; font-size: x-large;">
                                文档
                            </text>
                        </li>
                    </nuxt-link>
                    <nuxt-link to="/forum" class="boxulli ">
                        <li :class="{bgsecond: 2==currentIndex}" style="display: flex; justify-content: center" @click="clickli(2)">
                            <text style="color: #FFF; font-size: x-large;">
                                社区
                            </text>
                        </li>
                    </nuxt-link>
                    
                    <!-- <li class="boxulli " :class="{bgsecond: 3==currentIndex}" align="center " @click="clickli(3)">
                        <nuxt-link to="/com">
                            <text style="color: #FFF; font-size: x-large;">
                                问答
                            </text>
                        </nuxt-link>
                    </li> -->
                    
                    <!-- <li v-for="(item,index) in lis" class="boxulli " :class="{bgsecond: index==currentIndex}" align="center " :key="index" @click="clickli(index)">
                        <text style="color: #FFF; font-size: x-large;">
                            <nuxt-link to="{{item.link}}">{{item.title}}</nuxt-link>
                        </text>
                    </li> -->
                </ul>
                <button type="button" class="btn btn-outline-light" style="height: 40px;">English</button>
            </div>
        </div>
    </nav>

</header>

</template>


<script>

    export default {
        name: "Header",
        data() {
            return {
                lis: [
                    {title: "主页", link: "/"},
                    {title: "文档", link: "/doc"},
                    {title: "社区", link: "/com"},
                ],
                currentIndex: 0
            }
        },
        mounted: function () {
            
        },
        methods: {
            clickli(index) {
                this.currentIndex = index;
                // console.log(index)
            }
        }

    }


</script>

<style scoped>
    .flex-row {
        display: flex;
        flex-direction: row;
        align-items: center;
    }
    
    .myul {
        display: flex;
        flex-direction: row;
        width: 100%;
        margin: auto;
        /* align-content: center; */
        align-items: center;
    }
    
    .boxulli {
        list-style: none;
        height: 80px;
        line-height: 80px;
        width: 10%;
        align-content: center;
        justify-content: center;
    }
    
    a{
        text-decoration:none;
        color: #FFF;
    }
    
</style>

