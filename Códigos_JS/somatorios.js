const prompt = require('prompt-sync')();

function fatorial(num) {
    if (num <= 0) return 1;
    else return num * fatorial(num-1);
}


let soma1 = 0, soma2 = 0, soma3 = 0, n;

console.log(`Informe o número de termos para somar:`);
n = 3;

//Somatório 1
let term1 = 1;
for (let i = 1; i <= n; i++) {
    soma1 = soma1 + term1;
    term1 = term1 + 2;
}
console.log(soma1);

//Somatório 2 ---- 1 - 3 + 5 - 7
let term2 = 1;
for (let i = 1; i <= n; i++) {
    soma2 = soma2 + term2;
    term2 = (Math.abs(term2) + 2) * Math.pow(-1, i);
}
console.log(soma2);

//Somatório 3
let term3 = 1, temp = 1;
for (let i = 1; i <= n; i++) {
    soma3 += temp;
    term3 = (Math.abs(term3) + 2) * Math.pow(-1, i);
    temp = 1/(fatorial(Math.abs(term3))) * Math.pow(-1, i);
}
console.log(soma3);