const input = require('fs').readFileSync(0, 'utf-8').trim().split('\n');
let i = 0;
// "fake prompt"
function prompt() { return input[i++]; }

let notas = 0;
let indicador = 0;

while(true){
    let X = Number(prompt());
    
    if(X < 0 || X > 10){
        console.log("nota invalida");
    } else{
        indicador++;
        notas += X
    }
    
    if(indicador===2){
        if(notas){
            
        }
        if((notas/2)<1 || (notas/2)>2)
        indicador = 0;
        console.log(`media = ${(notas/2).toFixed(2)}`)
        console.log("novo calculo (1-sim 2-nao)")
    }
    
    if(X === 2){
        break;
    }
}
