var botao = document.getElementById("botao");
var div = document.getElementById("resultado");
function Calcular(){
    let num1 = parseInt(document.getElementById("num1").value);
    let num2 = parseInt(document.getElementById("num2").value);
    let total = num1 + num2;
    resultado.innerHTML = "Resultado: " + total;
};