function range(start,end,cnt=1){
    let a=[];
    if(start>end){
        for(let i=end;i<=start;i=i-cnt){
            a.push(start-i+end);
        }
    }
    else{
        for(let i=start;i<=end;i=i+cnt){
            a.push(i);
        }
    }
    return a;
}
function sum(suzu){
    let sum=0;
    for(let entry of suzu){
        sum=sum+entry;
    }
    return sum;
}
//console.log(range(2,10));
//console.log(sum(range(1,10,2)));
//console.log(range(1,10,2));
//console.log(range(10,2,-3));