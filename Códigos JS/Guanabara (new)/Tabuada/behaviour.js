let input, button, cont = 1, res, itens = [];
input = document.getElementById('tabNum');
button = document.getElementById('doTable');
res = document.querySelector('ul')

button.addEventListener('click', function() {
    res.innerHTML = '';
    let num = Number(input.value);
    cont = 1;
    if (num === null || Number.isNaN(num) || num === 0) {
        window.alert(`Por favor, digite um valor válido!!`);
    }else {
        for (let i = 0; i < 30; i++) {
            itens[i] = document.createElement('li');
            itens[i].innerHTML = `${num} x ${cont} = ${cont*num}`;
            res.appendChild(itens[i]);
            cont++;
        }
    }
})