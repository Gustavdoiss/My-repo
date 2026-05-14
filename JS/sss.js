const prompt = require('prompt-sync')();

let a = 0, b = 140;

function maior(x, y) {
    y = x > y ? x : y;
    return y;
}
function menor(c, d) {
    d = c < d ? c : d;
    return d;
}

for (let i = 1; i <= 2; i++) {
    console.log(`Informe a idade da ${i}ª pessoa:`);
    let idade = Number(prompt("> "));
    console.log(`Informe a altura da ${i} pessoa:`);
    let altura = Number(prompt("> "));
    a = maior(altura, a);
    b = menor(idade, b);
}

console.log(`Maior altura: ${a}\nMenor idade: ${b}`);
