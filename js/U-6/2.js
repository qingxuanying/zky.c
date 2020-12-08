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
}
let group = Group.from([10, 20]);
console.log(group.has(10));
// → true
console.log(group.has(30));
// → false
group.add(10);
group.delete(10);
console.log(group.has(10));
// → false