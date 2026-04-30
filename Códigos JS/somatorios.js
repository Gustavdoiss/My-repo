const prompt = require('prompt-sync')();

let soma1 = 0, soma2 = 0, soma3 = 0, n;

console.log(`Informe o número de termos para somar:`);
n = parseInt(prompt("> "));

//Somatório 1
let term1 = 1;
for (let i = 1; i <= n; i++) {
    soma1 = soma1 + term1;
    term1 = term1 + 2;
}
console.log(soma1);

//Somatório 2
let term2 = 1;
for (let i = 1; i <= n; i++) {
    soma2 = soma2 + term2;
    term2 = (term2 + 2) * Math.pow(-1, i);
}
console.log(soma2);

