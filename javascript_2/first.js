//[{},{},{}] using for each loop
const arr=[1,2,3,4]
arr.forEach((val)=>{        //using arrow call back function
    console.log(val);
})
//[{},{},{}]
const arr2=[
{
    name:"shashank",
    sec:2
},
{
    name:"swaroop",
    sec:3
},
{
    name:"satyam",
    sec:4
}];
arr2.forEach((name)=>{
    console.log(name);
})
//......Filter, Map and Reduce..............
const nums=[1,2,3,4,5,6,7,8,9];
const ans=nums.forEach((val)=>{
 console.log(nums); 
})
//.....................Filter........
const num=[1,2,3,4,5,6,7,8,9];
const out=num.filter(function(val){
    return val > 5
})
console.log(out);
//........ or...........>
const outt=num.filter((val)=>{return val<4 })
console.log(outt);
//..........using 7th line reference....
let username=arr2.filter((val)=> val.name === "shashank")
console.log(username);

