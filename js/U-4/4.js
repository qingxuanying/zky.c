function deepEqual(a,b){
    if(a===b){
        return true;
    }
    if(typeof(a)!=typeof(b)){
        return false;
    }
    if(typeof(a)!=Object){
        return false;
    }
    if(a.keys != b.keys){
        return false;
    }
    if(a.keys.length != b.keys.length){
        return false;
    }
    for(let key of a.keys){
        if(!b.keys.include(key) || !deepEqual(a[key],b[key])){
            return false;
        }
    }
    return true;
}