console.log("Hello world !");
const accountId=345343;
let accountName="Shashank s m";
Age=55;
Number;
var managerName="Camron Green";
console.table([accountId,accountName,Age,Number,managerName]);
//Data types:
//Boolean=>true/false
//null

// ******Typeconversions*********
console.log("..........Typeconversions........")
let score=100;
let value="100";
console.log(typeof(score));
console.log(typeof(value));
console.log(typeof(managerName));
//"33"=>33
//"33abc"=>NaN;
//true=>1;false=>0
let charT="1200";
let valueNum=Number(charT)
console.log(valueNum)
console.log(typeof (valueNum))
// console.log(valueNUm)
let word=true;
console.log(word);
let ring=1;
let ringrong=Boolean(ring);
console.log(typeof (ringrong));
console.log(ringrong);

//*****************operations ******************

console.log("***********Operations in Java script***********");
let str1="Shashank";
let str2=" Somashekhar";
let str3=str1+str2;
console.log(str3);

console.log(100+1.5);
console.log(100*1.5);
console.log(1+2+"3");
console.log("1"+2+3);
console.log(1+2+3);

// *****************Comparisions***************888
console.log("......Comparisions....")

console.log(2 > 1);
console.log(null > 0);
console.log(null == 0);
console.log(null >= 0);
console.log(null < 0);        //or use Undifined 

// Primitive and non-primitive datatypes....

//primitive datatypes :- Bigint,Boolean,null,undefined,string

let str="Shashank";
console.log(typeof str);

let Boo=true;
console.log(typeof Boo);

//Non-primitive datatyps:- Arrays,objects,Functions

let Heros=["Krrish","Boomer","perman"];
console.table(Heros);

//objects are represented using { }
let Function={
     name:"Boomer",
     ssn:54365,
}
console.log(typeof Function);
console.log(typeof Heros);

//............ Stacks and Heap in javascript
let myname="shashank"
let anothername=myname             //only variables are stored in stacks references are taken from heap storage;
console.log(anothername);


let userone={
     id:13123,
     password:'ssm@2022'      //only content of the object are stored in heap can retrieve by using only reference variable;
}
console.log(userone.id)
console.log(userone.password);
console.log(userone);


//............ Strings

const Gname="Veerabhadreshwara"
console.log(Gname);           //String declaration


const Fname = new String("Veerabhadreshwara");
console.log(Fname[0]);
console.log(Fname.__proto__);

console.log(Fname.length)
console.log(Fname.toUpperCase());
// console.log(Fname.tolowerCase());
console.log(Fname.charAt(10));
console.log(Fname.indexOf('h'));

const somename=Fname.substring(0,8);
console.log(somename);                  //substrings
const randomname=Fname.slice(0,6);
console.log(randomname);

const anyname="     Somashekhar    ";
console.log(anyname);
console.log(anyname.trim());       //Trim and Replace

const xxname="Shashank somashekhar";
console.log(xxname);
console.log(xxname.replace('Shashank','Mahananda'));

console.log(xxname.split(' '));         //separator

//OR

const xxynme="laa-laa-laa-loo-leee";
console.log(xxynme.split('-'));

// ............Numbers and Math 

const balance=400;
console.log(balance);

const Anynum=new Number(400)
console.log(Anynum);
console.log(Anynum.toString());
console.log(typeof Anynum);

const AnyNum1=100;
console.log(AnyNum1.toFixed(2));
console.log(AnyNum1.toFixed(1));
console.log(AnyNum1.toFixed(8));

const Anynum3=123.56756;
console.log(Anynum3.toPrecision(3))
console.log(Anynum3.toPrecision(4))
console.log(Anynum3.toPrecision(2))

const Anynum5=100000000;
console.log(Anynum5.toLocaleString());
console.log(Anynum5.toLocaleString('en-in'));

// /*/-/-//-/-*/-/-MAth.......

console.log(Math.abs(-29.5));
console.log(Math.floor(29.5));
console.log(Math.ceil(29.5));
console.log(Math.round(29.5));

// Date and Time....
console.log("......DATE AND TIME........");

let today=new Date()
console.log(today.toString());
console.log(today.toISOString());
console.log(today.toJSON());
console.log(today.toLocaleDateString());
console.log(today.toLocaleTimeString());

let anotherdate=new Date(2024,0,12)
console.log(anotherdate.toString());

let anotherdate1=new Date(2024,0,12,10,30)
console.log(anotherdate1.toString());

let stringDate=new Date("12-01-2024")
console.log(stringDate.toLocaleDateString());

// .........Arrays.....
// Declaration
const arr=new Array(1,2,3,4,5,20)
console.log(arr)
// or
const Arr1=[10,20,30,567]
console.log(Arr1);

// push items
Arr1.push(100,200)
console.log(Arr1);

// pop
Arr1.pop()
console.log(Arr1);  //only pop last/recent item

Arr1.unshift(99);   //simply add to first
console.log(Arr1);

Arr1.shift();  //removes unshifted ele
console.log(Arr1);

const newArr=Arr1.join() //convert items into string
console.log(newArr);

// slice and splice
const somearr=new Array(10,20,30,40,50,60)
console.log(somearr);
console.log(somearr.slice(1,2));
console.log(somearr.slice(1,3));
console.log(somearr.slice(1,5));
// splice
console.log(".....Splice.....");
console.log(somearr);
console.log(somearr.splice(0,2));
console.log(somearr.splice(1,3));
console.log(somearr.splice(1,5));

// concat array
const odd=[1,3,5,7,11]
const even=[2,4,6,8,10]
const evod=odd.concat(even);
console.log(evod);
console.log(Array.from("shashank"));

// ...Objects.....

const user={
     id:"001",
     name:"shashank",
     place:"bengaluru"
}
console.log(user);                 //nested objects
const par={
     child :{
           id:"001",
           name:"satyam",
           clge:"cambridge"
     }
}
console.log(par.child);
console.log(par.child.id);
console.log(par.child.name);
console.log(par.child.clge);

const obj1={1:"abc",2:"shashank"}
const obj2={3:"satyam",4:"suman"}
const obj3={obj1,obj2};
console.log(obj3);

const obj4={...obj1,...obj2};          //spreading the values
console.log(obj4);

const course={
     name:"something",
     price:"999",
     instructor:"hitesh"
}
const {instructor}=course;         //de-structuring
console.log(instructor);
//or
const{instructor:teacher}=course;
console.log(teacher);

//Functions....
function Add(num1,num2){
console.log(num1+num2);
console.log(num1*num2);
console.log(num1-num2);
console.log(num1/num2);
}
Add(20,10);     //Calling function

//or
function add(num1,num2){
     console.log(num1+num2)
}
let result=add(2,3)
console.log("Result:",result);          //undefined value will be printed

//or
function work(num1,num2){
     let result=num1+num2
     return result
}
result=work(8,3)                        //returned value to a variable
console.log("Result:",result);


//This
const chai=function (){
   let username="shashank"           //this is used to access the values from functions
     console.log(this.username);
}
chai()

const chai1= () =>{
     let username="shashank"           //Arrow functions
       console.log(this.username);
  }
  console.log(chai1());

const chai3=(num1,num2)=>{
     return num1+num2         //explicit return
}
console.log(chai3(5,3));

//or
const chai4=(num1,num2)=>(num1+num2);
console.log(chai4(5,3));

//immediately invoked function Expressions(IIFE)()();

(function code(){
     console.log(`Shashank somashekhar`)  //Execute instantly without a function call always terminated with a;
})();
//or
(()=>{
     console.log(`satyam swaroop`);     //Also represnted in arrow functions
}
)();
//or
((name)=>{
     console.log(`satyam swaroop ${name}`);     //Also represnted in arrow functions
}
)(`Shashank`);

//..........Control Flow..........
//(if ,else if,else)

let score1=100;
if(score==100)
{
     console.log("You scored 100");
}
else{
     console.log("Yup u aren't");
}

//....Implicit flows.....+
let bug=1000;
if(bug>500) console.log("Yup he is gaint");

//Truthy values..(assumes true without applying any condition in flow statements)
// '0',"false"," ",{},[],function(){}

//falsy values
//fasle,0,-0,NaN,undefined,null,"",BigInt On

//Null coalescing operator(??)
let val1,val2,val3,val4;
val1=null ?? 10;
val2=5 ?? 10;
val3=null ?? undefined ?? 10;
console.log(val1);
console.log(val2);
console.log(val3);

//looping iterations
for(let i=0;i<=10;i++)
{
     const ele=i;
     console.log(ele);
}
//Break and Continue
for(let i=0;i<=10;i++)
{
     if(i==5)
     {
          console.log(`Detected nor 5`);
          break;
     }
     console.log(`value is ${i}`);
}
//continue keyword
for(let i=0;i<=10;i++)
{
     if(i==5)
     {
          console.log(`Detected nor 5`);
          continue;
     }
     console.log(`value is ${i}`);
}

//While and Do while loops.......

let i=5;
while(i<=10)
{
     console.log(`s * s= ${i}`);
     i=i+1;
}

//High Order Array loops...
//for (const iterator of object) {}
 let onearr=[10,20,30,40];
 for (const i of onearr) {
     console.log(`value of array : ${i}`);
 }
// in strings....
let strarr="Shashank"
for (const i of strarr) {
     console.log(`value of array : ${i}`);
}

//........MAPS......
const map=new Map()           //Arrange the elements in Key:value manner
map.set('IN',"India");
map.set('Fr',"France");
map.set('Uk',"England");
console.log(map);

//Map using in forof loops
const map1=new Map()
map.set('IN',"India");
map.set('Fr',"France");
map.set('Uk',"England");
for (const [key,value] of map1) {
     console.log(key,'=',value);
}

//....for in loop.....

const myobj={
     js:'javascript',
     cpp:'c++',
     njs:'nodejs'
}
for (const key in myobj) {
    console.log(key);  //prints only keys
    console.log(myobj[key]);    //prints values    
    console.log(`${key} :- ${myobj[key]}`);    //prints both   
}
//using for in loop on arrays
const arr100=["ssp","sps","jcb","js"];
for (const key in arr100 ) {
     console.log(key);        //prints only the indexing or key number but in forof it prints the keys
}
//Basically for in loop cant be applied on MAPS cuz it is nin iterable