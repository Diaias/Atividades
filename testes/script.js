const inputdecimal = document.getElementById("decimal");
var inputbinario1 = document.getElementById("binario1");
var inputbinario2 = document.getElementById("binario2");
const div = document.getElementById("resultado");
const divsoma = document.getElementById("resultadosoma");
const botao = document.getElementById("botao");
const botao2 = document.getElementById("botao2");

botao.addEventListener("click", conversao);
botao2.addEventListener("click", soma);

inputbinario1.addEventListener("keydown", function(evt){
    var regEx = /^(0|1)$/;
    var key1 = String.fromCharCode(evt.keyCode);
    var key2 = String.fromCharCode(evt.keyCode-48);
    if(!regEx.test(key1) && !regEx.test(key2)){
      evt.preventDefault();
    }
  });
  
inputbinario2.addEventListener("keydown", function(evt){
    var regEx = /^(0|1)$/;
    var key1 = String.fromCharCode(evt.keyCode);
    var key2 = String.fromCharCode(evt.keyCode-48);
    if(!regEx.test(key1) && !regEx.test(key2)){
      evt.preventDefault();
    }
  });

function soma() {

    var binario1 = parseInt(inputbinario1.value);
    var binario2 = parseInt(inputbinario2.value);
    var resultado = binario1 + binario2;

    var digitos = resultado.toString().split('').reverse();

    var bitseparado = digitos.map(Number);
    var valorsoma = "";

    for (let i = 0; i < bitseparado.length; ++i) {
        window['bit'+i] = bitseparado[i];
        if (window['bit'+(i+1)] != 1 || window['bit'+(i+1)] != 0 || window['bit'+(i+1)] != 2) {
            window['bit'+(i+1)] = 0;
        }
    }
    for (let i = 0; i < bitseparado.length + 1; ++i) {
        if (window['bit'+i] > 1) {
            window['bit'+(i+1)] = window['bit'+(i+1)] + 1;
            window['bit'+i] -= 2;
        }
        valorsoma +=  window['bit'+i].toString();
        valorsomatotal = inverter(valorsoma);
    }
    if(valorsomatotal.charAt(0) == "0"){
        valorsomatotal = valorsomatotal.slice(1);
    }

    divsoma.innerHTML = "binario1: " + binario1 + "<br>" +
                        "binario2: " + binario2 + "<br>" +
                        "resultado: " + valorsomatotal + "<br>" ;

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
    let a = 0;
    let binario = "";
    let fracionario = "";
    let depoisvirgula = decimal.slice(decimal.indexOf('.')).slice(1);
    let vezes = depoisvirgula.length;


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
    }
    if(depoisvirgula != 0){
        conta = depoisvirgula/(10 ** vezes);
        conta1 = conta;
        while(a < 6){
            conta1 = conta1*2;
            if(conta1 >= 1){
                conta1 = Math.floor((conta1 - 1)*(10 ** vezes+1));
                conta1 = conta1/(10 ** vezes)
                fracionario += "1"
            }else{
                fracionario += "0"
            }
            a++;
        }
        div.innerHTML = "binario: " +inverter(binario)+ "," + fracionario + "<BR>" +
                        "bits: " + i;
    }else{
        div.innerHTML = "binario: " +inverter(binario) + "<BR>" +
                        "bits: " + i;
    }
}

