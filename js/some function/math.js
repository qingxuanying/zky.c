// Math 对象
//1. 三角函数运算
console.log(Math.cos(3.14));
console.log(Math.sin(3.14));
console.log(Math.tan(3.14));

//2.pai
console.log(Math.PI);

//3.随机数 0~1之间的随机数
let n=Math.random();
console.log(n);
let m=Math.random()*10;

//4.取整
let x=Math.random();
console.log(x);
console.log(Math.floor(x*10)); //Math.floor:下取整
console.log(Math.ceil(x*10));  //Math.ceil:上取整
console.log(Math.round(x*10)); //Math.round:四舍五入取整

//5.绝对值
console.log(Math.abs(-5.65));
console.log(Math.abs(20.20)); //Math.abs:对数值取绝对值

//6.最值
console.log(Math.max(5,6,7,2,9,22,10,-25)); //Math.max:取数组中的最大值
console.log(Math.min(5,6,7,2,9,22,10,-25)); //Math.min:取数组中的最小值

//7.平方根
console.log(Math.sqrt(9));
console.log(Math.sqrt(5)); //Math.sqrt:求数值算术平方根

//8.