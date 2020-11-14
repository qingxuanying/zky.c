/*let obeject={
    left:1,
    right:2,
    some:undefined
};
console.log(obeject.left);
console.log(obeject.right);
console.log(obeject.some);
console.log("left" in obeject);
console.log("right" in obeject);
console.log("some" in obeject);
delete obeject.left;
console.log(obeject.left);
console.log(obeject.right);
console.log(obeject.some);
console.log("left" in obeject);
console.log("right" in obeject);
console.log("some" in obeject);*/
 
/*let obeject1={
    value:10
};
let obeject2 = obeject1;
let obeject3 = {
    value:10
};
console.log(obeject1==obeject2);
console.log(obeject2==obeject3);
console.log(obeject1==obeject3);*/

let list={
    value:1,
    rest:{
        value:2,
        rest:{
            value:3,
            left:5555,
            rest:{
                value:4,
                rest:null
            }
        }
    }
}
console.log(list.left);