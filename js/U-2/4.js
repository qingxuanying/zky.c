 function chicken(){
     return egg();
 }
 function egg(){
     return chicken();
 }
 console(chicken(1));