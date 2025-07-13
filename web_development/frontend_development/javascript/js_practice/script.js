let main = document.querySelector("#main");

window.addEventListener('mousemove', function(dets){
	main.style.top=dets.clientY +"px";
	main.style.left=dets.clientX +"px";
});
