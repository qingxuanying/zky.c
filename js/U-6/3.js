class Group{
    constructor(){
        this.menber=[];
    }
    add(value){
        this.menber.push(value);
    }
    delete(value){
        //这里要删去该参数（如果有的话）所以可以用数组的筛选法(过滤操作)，将不是ｖａｌｕｅ的值保留下来
        this.menber=this.menber.filter(v => v !== value);
    }
    has(value){
        for(let key of this.menber){
            if(key===value){
                return true;
            }
        }
        return false;
    }
    static from(arr){
        let group = new Group;
        for(let key of arr){
            group.add(key);
        }
        return group;
    }
    [Symbol.iterator](){
        return new GroupIterator(this);
    }
    //至关重要，一定要传递整个ｔｈｉｓ
}
class GroupIterator{
    constructor(group){
        this.group=group;
        this.p=0;
    }
    next(){
        if(this.p >= this.group.menber.length){
            return {value:undefined,done:true};
        }
        this.p++;
        return {
            value:this.group.menber[this.p-1],
            done:false
        }
    }
}
for (let value of Group.from(["a", "b", "c"])) {
    console.log(value);
  }