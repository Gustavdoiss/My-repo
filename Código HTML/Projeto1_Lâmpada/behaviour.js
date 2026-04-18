let botoes = [], img;
img = document.querySelector('.lampada');
botoes[0] = document.getElementById('botaoON');
botoes[1] = document.getElementById('botaoOFF');

botoes[0].addEventListener('click', function() {
    img.src = 'lampada_acesa.jpg';
})
botoes[1].addEventListener('click', function() {
    img.src = 'lampada_apagada.jpg';
});
