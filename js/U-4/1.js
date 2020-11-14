function range(start,end){
    let a=[];
    for(let i=start;i<=end;i++){
        a.push(i);
    }
    return a;
}
console.log(range(2,10));
function sum(suzu){
    let sum=0;
    for(let entry of suzu){
        sum=sum+entry;
    }
    return sum;
}
console.log(sum(range(1,10)));