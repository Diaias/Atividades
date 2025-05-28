var sexo2 = document.getElementsByName("sexo");
var alt2 = document.getElementById("alt");
var div = document.getElementById("div");

function teste(){
    var altv = parseFloat(alt2.value);
    var alt = parseFloat(alt2.value);
    var sexo;
    var peso;
    for (var i = 0; i < sexo2.length; i++) {
        if (sexo2[i].checked) {
          sexo = sexo2[i].id;
        }
    };
    if(sexo == "masc"){
        peso = 22 * Math.pow(alt,2);
    }else{
        peso = 21 * Math.pow(alt,2);
    }
    console.log(altv);
    console.log(peso);
    div.innerHTML = "sexo: " + sexo + "<br>" +
                    "peso: " + peso + "<br>";
}