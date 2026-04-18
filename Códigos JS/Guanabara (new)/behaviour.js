let inicio, fim, passos, contar, res;
inicio = document.getElementById('inicio');
fim = document.getElementById('fim');
passos = document.getElementById('passos');
contar = document.getElementById('count');
res = document.getElementById('res');

contar.addEventListener('click', function() {
    let start = Number(inicio.value);
    let finish = Number(fim.value);
    let pace = Number(passos.value);
    let resposta = `${start} `;

    for (let i = (start+pace); i <= finish; (i += pace)) {
        resposta += ` 👉 ${i}`;
    }

    res.innerHTML = resposta + `🏁`;
})