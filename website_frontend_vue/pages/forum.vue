<template>
    <div>
        <div style="width: 100%;height: 150px;" class="bgsecond">
            <div class="container">
                你想看的，都在这里
            </div>
        </div>
        <div class="container ">

            froum

        </div>
    </div>

</template>

    
<script>

export default {
    head: {
		title: '博客',
        titleTemplate: '%s_drogon_C++_web框架',
        meta: [
            { charset: 'utf-8' },
			{ name: 'viewport', content: 'width=device-width, initial-scale=1' },
			{ hid: "Keywords", name: 'Keywords', content: 'C++,web框架' },
            { hid: 'description', name: 'description', content: 'C++,web框架' }
        ]
    },
    async asyncData ({ req, res }) {
    // 请检查您是否在服务器端
    // 使用 req 和 res
    if (process.server) {
      return { host: req.headers.host }
    }

    return {}
    // let data = await axios.get(`http://localhost:8080/api/index`).catch(function (error) {
        //     if (error.response) {
        //     // The request was made and the server responded with a status code
        //     // that falls out of the range of 2xx
        //     console.log(error.response.data);
        //     console.log(error.response.status);
        //     console.log(error.response.headers);
        //     } else if (error.request) {
        //     // The request was made but no response was received
        //     // `error.request` is an instance of XMLHttpRequest in the browser and an instance of
        //     // http.ClientRequest in node.js
        //     console.log(error.request);
        //     } else {
        //     // Something happened in setting up the request that triggered an Error
        //     console.log('Error', error.message);
        //     }
        //     console.log(error.config);
        // });

        // if(data != undefined){
        //     // console.log(data);
        //     return { article: data.data.article,  arrayList: data.data.objList }
        // }
  }
    
}
</script>



<style>

</style>



