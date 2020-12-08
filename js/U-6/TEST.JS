class Rabbit{
    constructor(type){
        this.type = type;
    }
    speak(line){
        console.log(`the ${this.type} rabbit says ${line}`);
    }
}
let killerRabbit = new Rabbit("killer");
killerRabbit.speak("sssss");
//console.log(Array.prototype.toString);
//console.log(Map);
let ages = new Map();
ages.set("qiuyunhao",18);
console.log(ages.get("qiuyunhao"));
