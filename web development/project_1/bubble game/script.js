function createBubbles() {
  let clutter = "";
  for (let i = 0; i < 220; i++) {
    clutter += `<div class="panelbottom">
        <h2 class="bubble">${Math.floor(Math.random()*10)}</h2>
      </div>`;  
  }
  document.getElementById("bubble-panel").innerHTML = clutter;
}

function runtimer(){
    var timeint = setInterval(function(){
        if(time > 0){
            time--;
            document.querySelector("#timer").textContent = time;
        } else {
            clearInterval(timeint);
            document.getElementById("bubble-panel").innerHTML = "<h1>Game Over</h1>";
        }
    }, 1000);
}

var score = 0;
var time = 40;
var a = 0;

function incscore(){
    score += 10;
    document.querySelector("#score").textContent = score;
}

function hit(){
    a = Math.floor(Math.random()*10);
    document.querySelector("#hit").textContent = a;
}

document.querySelector("#bubble-panel").addEventListener("click", function(dets){
    var clicked = Number(dets.target.textContent);
    if(clicked === a){
        incscore();
        createBubbles();
        hit();
    }
});

document.querySelector("#score").textContent = score;
document.querySelector("#timer").textContent = time;

createBubbles();
hit();
runtimer();