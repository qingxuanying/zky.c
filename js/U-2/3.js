let size=Number(prompt("size"));
let i;
let str1,str2;
str1=" ";
str2="#";
for(i=0;i<size-1;i++){
    if(i%2==0){
        str1=str1+"#";
    }
    else{
        str1=str1+" ";
    }
}
for(i=0;i<size-1;i++){
    if(i%2==0){
        str2=str2+" ";
    }
    else{
        str2=str2+"#";
    }
}
for(i=0;i<size;i++){
    if(i%2==0){
        console.log(str1);
    }
    else{
        console.log(str2);
    }
}
console.log(str1.length);
console.log(str2.length);