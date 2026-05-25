const prompt = require('prompt-sync')();

let notas = [];
let acumulador = 0;
const n = parseInt(prompt());

for (let i = 0; i < n; i++) {
    notas[i] = parseFloat(prompt());
    acumulador += notas[i];
}

const media = acumulador/n;

console.log(`Média: ${media.toFixed(2)}`);