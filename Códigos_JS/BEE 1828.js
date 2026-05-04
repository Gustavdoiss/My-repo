const prompt = require('prompt-sync')();

let shel, raj, t = 1;
console.log(`Digite o número de casos de teste:`);
const T = Number(prompt('> '));
const vence = {
    "tesoura": ["papel", "lagarto"],
    "papel": ["pedra", "Spock"],
    "pedra": ["tesoura", "lagarto"],
    "lagarto": ["Spock", "papel"],
    "Spock": ["tesoura", "pedra"],
}
const resposta = ["Bazinga!", "Raj trapaceou!", "De novo!"];

for (let i = 0; i < T; i++) {
    console.log(`Digite as escolhas de Sheldon e Raj:`);
    let escolhas = prompt('> ').split(' ');
    shel = escolhas[0];
    raj = escolhas[1];
    if (shel == raj) {
        console.log(`Caso #${t}: ${resposta[2]}`)
    }else if(vence[shel].includes(raj)) {
        console.log(`Caso #${t}: ${resposta[0]}`)
    }else {
        console.log(`Caso #${t}: ${resposta[1]}`)
    }
    t++
}