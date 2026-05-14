const prompt = require('prompt-sync')();

let temp = [], cont, maior, menor, maior_mes, menor_mes;

for (let i = 0; i < 12; i++) { temp[i] = Number(prompt(`Informe a ${i+1}ª temperatura:\n`)); }

