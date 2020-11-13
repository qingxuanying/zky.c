function isEven(a){
    if(a==0){
        return true;
    }
    if(a==1){
        return false;
    }
    if(a>1){
        return isEven(a-2);
    }
}
let number=Number(prompt("n"));
if(isEven(number)){
    console.log("他是偶数");
}
else{
    console.log("他是奇数")
}
//console.log("50是个偶数：",isEven(50));
//console.log("75是个偶数：",isEven(75));