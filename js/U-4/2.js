function reverseArray(a){
    let b=[];
    let i=0;
    for(let entry of a){
        b[i]=a[a.length-i-1];
        i++;
    }
    return b;
}
function reverseArrayInPlace(a){
    let tmp;
    for(let i=0;i<a.length/2;i++){
        tmp=a[i];
        a[i]=a[a.length-i-1];
        a[a.length-i-1]=tmp;
    }
    return a;
}
console.log(reverseArray([3,4,5,6,7]));
console.log(reverseArrayInPlace([1,2,3,4,5,6,7,8,9]));
let arr=[1,2,3,4,5,6,7,8,9];
reverseArrayInPlace(arr);
console.log(arr);