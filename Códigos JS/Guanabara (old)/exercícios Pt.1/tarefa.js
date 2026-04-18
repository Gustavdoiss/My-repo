function carregar() {
    var msg = document.getElementById('msg')
    var img = document.getElementById('imagem')
    var data = new Date()
    var hora = data.getHours()
    var minutos = data.getMinutes()
    msg.innerHTML = `Agora são ${hora}:${minutos}.`
    if (hora >= 0 && hora < 12) {
        //BOM DIA!
        img.src = 'tomelogo.png'
        document.body.style.backgroundColor = '#e2cd9f'
    } else if (hora >= 12 && hora < 18) {
        //BOA TARDE!
        img.src = 'poistoma.png'
        document.body.style.backgroundColor = '#b9846f'
    } else {
        //BOA NOITE!!
        img.src = 'rapaz.png'
        document.body.style.backgroundColor = '#515154'
    }
}