let qntInte = 0, somaDx = 0, N, contMat = 0;

const inputMemberN = document.getElementById('memberN');
const inputMatricula = document.getElementById('matricula');
const btn = document.getElementById('calculate');
const resultado = document.getElementById('resultado');

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
        if (Math.abs(tNovo - t) < 0.0000001) break;
        t = tNovo;
    } /*Como o método só acha raízes e quero achar "v(t) = N", preciso criar uma função para "0 = v(t) - N".
        Essa função é a ft, e a sua derivada é a dft. O método de Newton-Raphson é iterativo,
        então ele vai se aproximando cada vez mais da raiz,
        e quando a diferença entre as aproximações for menor que um valor muito pequeno (0.0000001),
        ele para e retorna o valor encontrado.*/
    return t;
}

btn.addEventListener('click', () => {
    if (qntInte === 0) {
        qntInte = Number(inputMemberN.value);
        if (!qntInte || qntInte <= 0) {
            alert('Informe um número válido de membros!');
            return;
        }
        inputMemberN.disabled = true;
    }

    const matricula = inputMatricula.value.trim();
    if (matricula.length < 7) {
        alert('Matrícula inválida! Deve ter pelo menos 7 dígitos.');
        return;
    }

    somaDx += Number(matricula[6]);
    contMat++;
    inputMatricula.value = '';

    if (contMat < qntInte) {
        inputMatricula.placeholder = `Matrícula ${contMat + 1} de ${qntInte}`;
    } else {
        N = (10 + somaDx) / 10;
        const instante = newtonRaphson(1);
        resultado.textContent = `t ≈ ${instante.toFixed(4)}s`;
        inputMatricula.disabled = true;
        btn.disabled = true;
    }
});
