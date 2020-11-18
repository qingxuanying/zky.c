function loop(a,test,update,action){
    for(let b =a;test(b);b=update(b)){
        action(b);
    }   
}
console.log(loop(3,n=>n>0,n=>n-1,console.log));