const inputdecimal = document.getElementById("decimal");
const inputbinario1 = document.getElementById("binario1");
const inputbinario2 = document.getElementById("binario2");
const div = document.getElementById("resultado");
const divsoma = document.getElementById("resultadosoma");
const botao = document.getElementById("botao");
const botao2 = document.getElementById("botao2");

botao.addEventListener("click", conversao)
botao2.addEventListener("click", soma)

function soma() {
    let binario1 = inputbinario1.value;
    let binario2 = inputbinario2.value;



    divsoma.innerHTML = "binario1: " + binario1 + "<br>" +
                        "binario2: " + binario2 + "<br";
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

