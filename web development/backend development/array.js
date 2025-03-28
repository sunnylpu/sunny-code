let arr=[100,12,91,2,3,86];
let ans = arr.filter((number) => number > 23);
console.log(ans);

let grade=arr.map(arr=>{
    if(arr>=90) return 'A';
    if(arr>=80) return 'B';
    return 'C';
});
console.log(grade);