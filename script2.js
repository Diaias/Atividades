var iniciot = document.getElementById("inicio");
var fimt = document.getElementById("fim");
var butao = document.getElementById("butao");
var div = document.getElementById("resultado");

function teste(){
    let inicio = iniciot.value;
    let fim = fimt.value;
    
    div.innerHTML = "inicio: " + inicio*inicio + "<br>" +
                    "fim: " + fim*fim + "<br>"; 
}

butao.addEventListener("click", teste);