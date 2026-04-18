document.addEventListener("DOMContentLoaded", function() {
    const calcButton = document.getElementById("verificar");
    const nascInput = document.getElementById("birthdate");
    const anoatual = new Date().getFullYear();
    const sexoMasc = document.getElementById("masc");
    const sexoFem = document.getElementById("femi");
    calcButton.addEventListener("click", function() {
        let idade = anoatual - parseInt(nascInput.value);
        let sexoSelecionado = null;
        if (sexoMasc.checked) {
            sexoSelecionado = "masculino";
        } else if (sexoFem.checked) {
            sexoSelecionado = "feminino";
        }
        idade = idade < 0 ? 0 : idade; // Garantir que a idade não seja negativa
        if (sexoSelecionado) {
            alert(`Você é do sexo ${sexoSelecionado} e tem ${idade} anos.`);
        } else {
            alert("Por favor, selecione o sexo.");
        }
    });

})