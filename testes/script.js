const inputdecimal = document.getElementById("decimal");
var inputbinario1 = document.getElementById("binario1");
var inputbinario2 = document.getElementById("binario2");
const div = document.getElementById("resultado");
const divsoma = document.getElementById("resultadosoma");
const botao = document.getElementById("botao");
const botao2 = document.getElementById("botao2");

botao.addEventListener("click", conversao)
botao2.addEventListener("click", soma)

function soma() {

    var binario1 = parseInt(inputbinario1.value);
    var binario2 = parseInt(inputbinario2.value);

    var resultado = binario1 + binario2;
    var digits = resultado.toString().split('');
    console.log(digits);
    var bitseparado = digits.map(Number)
    console.log(bitseparado);

    for (let i = 0; i < bitseparado.length; ++i) {
        window['bit'+i] = bitseparado[i];
        console.log(window['bit'+i]);
        if (window['bit'+(i+1)] != 1 || window['bit'+(i+1)] != 0 || window['bit'+(i+1)] != 2) {
            window['bit'+(i+1)] = 0;
            console.log(window['bit'+(i+1)]);
        }
        console.log(window);
    }
    let i = 0;
    let a = 0;
    let b = 1;
    while(a != b) {
        console.log(window['bit'+i]);
        if (window['bit'+i] > 1) {
            window['bit'+(i+1)] = window['bit'+(i+1)] + 1;
            console.log("bit+1: "+window['bit'+(i+1)]);
            window['bit'+i] -= 2;
            console.log("bit+0: "+window['bit'+i]);
        }
        console.log(window);
        b -= 1;
        i++;
    }
    

    divsoma.innerHTML = "binario1: " + binario1 + "<br>" +
                        "binario2: " + binario2 + "<br>" +
                        "resultado: " + "<br" ;




}

function inverter(binario) {
    var invertido = "";
    for (var i = binario.length - 1; i >= 0; i--) {
        invertido += binario[i];
    }
    return invertido;
}

function conversao() {
    let decimal = inputdecimal.value;
    let i = 0;
    let binario = "";

    while(decimal!=0){
        teste1 = decimal / 2;
        teste2 = Math.floor(decimal / 2);
        teste3 = "" ;
        if(teste1 == teste2){

            teste3 = decimal - teste2;
            binario += "0";
        }
        else if(teste1 != teste2){
    
            teste3 = decimal - teste2 - 1;
            binario += "1";
        };
        i++;
        decimal = Math.floor(decimal / 2);

        div.innerHTML = "binario: " +inverter(binario) + "<BR>" +
                    "bits: " + i;
    }
}

