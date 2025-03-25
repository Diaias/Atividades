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

    var bit1 = 0;
    var bit2 = 0;
    var bit3 = 0;
    var bit4 = 0;
    var bit5 = 0;

    for (i = 0; i < bitseparado.length; i++) {
        bit1 = bitseparado[i];
        bit2 = bitseparado[i-1];
        bit3 = bitseparado[i-2];
        bit4 = bitseparado[i-3];
      }
      for(i = 0; i < bitseparado.length; i++){
        if(bit1 = 2){
            bit1 = 0;
            bit2 =+ 1;
          }else
          if(bit2 = 2){
            bit2 = 0;
            bit3 =+ 1;
          }else
          if(bit3 = 2){
            bit3 = 0;
            bit4 =+ 1;
          }else
          if(bit4 = 2){
            bit4 = 0;
            bit5 =+ 1;
          }
      }

      console.log(bit1);
      console.log(bit2);
      console.log(bit3);
      console.log(bit4);
      console.log(bit5);

    divsoma.innerHTML = "binario1: " + binario1 + "<br>" +
                        "binario2: " + binario2 + "<br>" +
                        "resultado: " + bit1 + bit2 + bit3 + bit4 + bit5 + "<br" ;
    





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

