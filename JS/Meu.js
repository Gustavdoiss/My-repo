const prompt = require('prompt-sync')();

let matrix = new Array(12);
for (let i = 0; i < 12; i++){
    matrix[i] = new Array(12);
}
let operation = prompt('');
let res = 0;

for (let i = 0; i < 12; i++){
    for (let j = 0; j< 12; j++) {
        matrix[i][j] = Number(prompt(''));
    }
}

let contador = 1;
let cont = 0;
    for (let i = 11; i >= 7; i--) {
        for (let j = contador; j < 11 - i; j++) {
            res += matrix[i][j];
            cont++;
        }
        contador++;
    }

if (operation == 'M') { res = res/cont;}

console.log(res.toFixed(1));