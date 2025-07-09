var a=document.querySelector("p").innerHTML="this is the dom manipulation"
console.log(a);
var b=document.getElementById("para");
b.innerHTML="this is the para change in the page using the dom manipulation"

b.style.backgroundColor="black"
b.addEventListener("click",function(){
    console.log("this is dom manipulation");
    b.getElementsByClassName("para1");
    b.style.backgroundColor="yellow";
})