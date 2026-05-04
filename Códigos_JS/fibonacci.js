const prompt = require('prompt-sync')();

let a = 0, b = 1, c, soma = 0, n;

console.log(`Informe em qual termo da sequência parar:`);
n = prompt("> ");

for (let i = 0; i <= n; i++) {
    console.log(a);
    c = a + b;
    a = b;
    b = c;
}

function fib(x) {
    if (x <= 1) { return x }
    return fib(x - 1) + fib(x - 2)
}

for (let i = 0; i <= n; i++) { console.log(`fib[${i}] = ${fib(i)}`)}
