//从最里面开始生成列表
function arrayToList(array){
    let list = null;
    for(let i=array.length-1;i>=0;i--){
      list=
        {
            value: array[i],
            rest: list
        };
    }
    return list;
}
function listToArray(list){
    let array=[];
    while(list.rest != null){
        array.push(list.value);
        list=list.rest;
    }
    array.push(list.value);
    return array;
}
function nth(list,n){
    let i=0;
    while(i!=n){
        list=list.rest;
        i++;
    }
    return list.value;
}
