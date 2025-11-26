//use of Array.from
// Array.from takes two params first one is the object where you have to specify the length of the array and the other is the 
// callback function in which you have to specify the value/something you want to be prefilled. and it returns that array
let arrSample = Array.from({length: 5},()=>
    Array.from({length: 9},()=>" ")
);
  123456789
//    *   
//   ***   
//  *****
// *******
//*********

let row = 5;
let cols = 9;

let arr = Array.from({length: row},()=>
    Array.from({length: cols},()=>" ")
)

let start = 0;
let end = cols;

for(let i = row-1;i>=0;i--){
    for(let j = start;j<end;j++){
        arr[i][j] = "*";
    }
    start++;
    end--;
}

for(let i = 0;i<row;i++){
    let str = "";
    for(let j = 0;j<cols;j++){
        str+=arr[i][j];
    }
    console.log(str);
}







