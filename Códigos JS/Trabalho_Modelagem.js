const prompt = require('prompt-sync')();

let qntInte, instante, somaDx, mat = [];
console.log(`Quantos membros tem a equipe?`);
qntInte = Number(prompt('> '));

for (let i = 1; i <= qntInte) {
    console.log(`Informe a ${i}ª matrícula: `);
    let preMat = prompt('> ');
    mat[i-1] = preMat[7];
    somaDx += Number(mat[i-1]);
}