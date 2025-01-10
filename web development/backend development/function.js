function saymyname(){
    console.log("My name is Shubham");
}
saymyname();

function printcounting(){
    for(let i=0;i<10;i++){
        console.log(i);
    }
}
printcounting();
function getsum(a,b,c){
    let sum=a+b+c
    return sum;
}
let sum1=getsum(3,5,6);
console.log(sum1);
console.log("my name is sunny");

function getexp(x,y){
    let ans=x**y;
    return ans;
} // normal function
let ans1=getexp(2,10);
console.log(ans1);

let getexp=(x,y)=>{
    let ans=x**y;
    return ans;
} // arrow function
let ans=getexp(2,10);
console.log(ans);






