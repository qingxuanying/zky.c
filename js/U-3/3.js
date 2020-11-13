let conut=String(prompt("which to count"));
let str=String(prompt("your str"));
function countChar(conut,zifu){
    let i=0;
    let cnt=0;
    for(i=0;i<128;i++){
        if(zifu[i]==conut){
            cnt=cnt+1;
        }
    }
    return cnt;
}
console.log(countChar(conut,str));
