const prompt = require('prompt-sync')();

let media = 0, soma;

function mediaUp(x) {
    let cont = 0;
    for(let j = 0; j < x.length; j++) {
        if (x[j] > media) cont++;
    }
    return ((cont/x.length)*100);
}

function arredondar(numero, casas) {
  return Number(Math.round(numero + 'e+' + casas) + 'e-' + casas);
}

let c, n;
c = parseInt(prompt(''));

for (let i = 0; i< c; i++) {
    n = parseInt(prompt(''));
    let temp = [];
    soma = 0;
    for (let l = 0; l < n; l++) {
        temp[l] = parseInt(prompt(''));
        soma += temp[l];
        if (l == (n-1)) media = soma/n;
    }
    let aaa = arredondar(mediaUp(temp), 3)
    console.log(`${aaa}%\n`);
}