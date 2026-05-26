const prompt = require('prompt-sync')();

function inverterArr (x) {
    let temp, n = x.length;
    for (let i = 0; i < n/2; i++) {
        temp = x[i];
        x[i] = x[n-1-i];
        x[n-1-i] = temp;
    }
}

let arr = [3, 9, 2, 4, 5, 1];

console.log(arr);
inverterArr(arr);
console.log(arr);