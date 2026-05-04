function verificar() {
    var res = document.getElementById('final')
    var img = document.getElementById('fot')
    var sex = document.getElementsByName('sexo')
    var nascimento = document.getElementById('Year')
    var data = new Date()
    var ano = Number(nascimento.value)
    var hoje = data.getFullYear()
    var idade = hoje-ano
    var gênero = ''
    var img = document.createElement('img')
    img.setAttribute('id', 'foto')
    if (sex[0].checked) {
        gênero = 'Homem'
    } else if (sex[1].checked) {
        gênero = 'Mulher'
    }
    res.style.textAlign = 'center'
    res.innerHTML = `Detectamos ${gênero} com ${idade} anos.`
}