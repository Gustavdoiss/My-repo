const prompt = require('prompt-sync')();

let N = parseFloat(prompt(''));
let notas = [100, 50, 20, 10, 5, 2];
let moedas = [1, 0.5, 0.25, 0.10, 0.05, 0.01];
let valor = Math.round(N * 100);

console.log("NOTAS:");
for (let i = 0; i < notas.length; i++) {
    let qtd = Math.floor(valor / (notas[i] * 100));
    valor -= qtd * notas[i] * 100;
    console.log(`${qtd} nota(s) de R$ ${notas[i].toFixed(2)}`);
}

console.log("MOEDAS:");
for (let i = 0; i < moedas.length; i++) {
    let qtd = Math.floor(valor / Math.round(moedas[i] * 100));
    valor -= qtd * Math.round(moedas[i] * 100);
    console.log(`${qtd} moeda(s) de R$ ${moedas[i].toFixed(2)}`);
}