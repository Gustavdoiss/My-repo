const prompt = require('prompt-sync')();

let maiores = 0, idade = [], alunos;
console.log(`Quantos alunos tem na turma?`);
alunos = parseInt(prompt('> '));

for(let i = 1; i <= alunos; i++) {
    console.log(`Quantos anos o aluno ${i} tem?`)
    idade[i-1] = parseInt(prompt(`> `));

    while (idade[i-1] < 17 || idade[i-1] >= 66 || !(Number.isInteger(idade[i-1]))) {
        console.log(`Digite um valor válido (inteiro entre 17 e 66): `);
        idade[i-1] = parseInt(prompt(`> `));
    }

    if (idade[i-1] >= 25) { maiores++ }
}

console.log(`Na turma, temos ${maiores} alunos maiores de 25 anos.`);