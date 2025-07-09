function tst(){
  let x=10;
  return function myname(){
    console.log(x);
  };
}

let fun=tst();
x=20;
fun();