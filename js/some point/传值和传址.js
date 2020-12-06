let a=1;
let b=a;//将a的值赋予b，因为其变量类型占空间较小
console.log(a,b);
b=3;
console.log(a,b);
//可见，a和b是分开的两块空间，对ｂ进行改变不会改变ａ

let c = {
    name: "未改变"
};
let d=c; //因为c变量为一个对象，所占的空间较大，所以是将ｃ的地址引给ｄ，即ｃ与ｄ共用一个空间。
console.log(c,d);
d.name="被改变";
console.log(c,d);
//可见，改变ｄ时ｃ也随着改变