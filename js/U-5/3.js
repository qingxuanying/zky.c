function every(array,test){
    let cnt=true;
    for(let a of array){
        if(!test(a)){
            cnt=false;
        }
    }
    return cnt;
}
function every2(array,test){
    return !array.some(a=>!test(a));
}
console.log(every([1, 3, 5], n => n < 10));
console.log(every([2, 4, 16], n => n < 10));
console.log(every2([1,5,9], n => n < 10));
