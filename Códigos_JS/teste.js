const prompt = require('prompt-sync')();

let a = 0, b = 1, c;
console.log('Digite o termo final da sequência:');
let term = parseInt(prompt('> '));
let res = '';

for (let i = term; i > 0; i--) {
    res = res + a + " ";
    c = a + b;
    a = b;
    b = c;
}

console.log(res);