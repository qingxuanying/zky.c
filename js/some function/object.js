//变量冻结(对象)
const HOST = {
    url:"http://www.baidu.com",
    port:443
};
Object.freeze(HOST);//暂时冻结该变量，使无法在对其属性进行修改