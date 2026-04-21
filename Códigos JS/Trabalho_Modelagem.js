const prompt = require('prompt-sync')();

let qntInte, instante, somaDx = 0, N, mat = [];
console.log(`Quantos membros tem a equipe?`);
qntInte = Number(prompt('> '));

function v(t) {
    return 0.08*Math.pow(t,5) - 1.24*Math.pow(t,4) + 11.22*Math.pow(t, 3) - 56.17*Math.pow(t, 2) + 134.72*t - 98.19;
}
function a(t) {
    return -1*0.02*Math.pow(t, 5) + 0.4*Math.pow(t, 4) - 4.98*Math.pow(t, 3) + 33.66*Math.pow(t, 2) - 112.35*t + 134.72;
}

function newtonRaphson(t0) {
    let t = t0;
    
    for (let i = 0; i < 100; i++) {
        let ft = v(t) - N;
        let dft = a(t);
        let tNovo = t - ft/dft;
        
        if (Math.abs(tNovo - t) < 0.0000001) break
        t = tNovo
    }
    return t
}

for (let i = 1; i <= qntInte; i++) { //Pega o d1 de cada membro do grupo.
    console.log(`Informe a ${i}ª matrícula: `);
    let preMat = prompt('> ');
    mat[i-1] = preMat[6];
    somaDx += Number(mat[i-1]);
}

N = (10 + somaDx)/10;// Newton-Raphson

instante = newtonRaphson(1);
console.log(`t ≈ ${instante.toFixed(4)}s`);