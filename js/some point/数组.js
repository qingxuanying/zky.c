let a = new Array("1","12313",12);
console.log(a);
let b = ["1","12313",12];
console.log(b);
//数租变量是引用型
let c=a;
c[0]=0;
console.log(a);
let arr=[1];
arr[4]=3;
console.log(arr);
//我们指定在原本只有１个元素的数组上添加第４个元素，那么编译器会帮我们将第２３个元素设置为ｕｎｄｅｆｉｎｅｄ