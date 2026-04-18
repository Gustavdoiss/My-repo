let num, button, cont = 1, res = [];
num = document.getElementById('tabNum');
button = document.getElementById('doTable');
res = document.querySelectorAll('li');

button.addEventListener('click', function() {
    num = Number(num.value);
    if (num == null) {
        window.alert(`Por favor, digite um valor válido!!`);
    }else {
        for (let i = 0; i < res.length; i++) {
        res[i].innerHTML = `${num} x ${cont} = ${cont*num}`;
        cont++;
        }
    }

})