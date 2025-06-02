var danocarta = document.getElementById("numDanoCarta");
var nomecarta = document.getElementById("txtNomeCarta");
var jogsel = document.getElementById("selJogador");
var botao = document.getElementById("btnAddCarta");
var botao2 = document.getElementById("btnBatalha");
var resultado = document.getElementById("resultadoBatalha")

var selcjog1 = document.getElementById("cartaJ1");
var selcjog2 = document.getElementById("cartaJ2");


var listjog1 = document.getElementById("listaJogador1");
var listjog2 = document.getElementById("listaJogador2");


function Carta(nome, dano, jog) {
    this.nome = nome;
    this.dano = dano;
    this.jog = jog;
}

var cartasj1 = [];
var cartasj2 = [];

botao.addEventListener("click", AddCarta);
botao2.addEventListener("click", Batalha);



function AddCarta(){
    jog = jogsel.value;
    nome = nomecarta.value;
    dano = danocarta.value;
    
    var cartast = new Carta(nome, dano, jog)

    var option = document.createElement("option");
    option.text = nome;

    var li = document.createElement("li");
    
   
    if (jog == "jog1") {
        listjog1.appendChild(li);
        selcjog1.add(option)
        cartasj1.push(cartast)
    }else{
        listjog2.appendChild(li);
        selcjog2.add(option)
        cartasj2.push(cartast)
    }
    li.appendChild(document.createTextNode(nome+ " - "+dano));
}

function Batalha(){
    var cartaselc1 = selcjog1.options[selcjog1.selectedIndex].value;
    var cartaselc2 = selcjog2.options[selcjog2.selectedIndex].value;

    var carta1 = cartasj1.find(Carta => {
        return Carta.nome === cartaselc1;
      })

    var carta2 = cartasj2.find(Carta => {
        return Carta.nome === cartaselc2;
      })

    danocarta1 = parseInt(carta1.dano);
    danocarta2 = parseInt(carta2.dano);

    var teste = danocarta1 - danocarta2;
    if (teste > 0) {
        resultado.innerHTML = "Jogador 1 ganhou";
        cartasj2.splice(carta2, 1 )
        console.log(cartasj2);
    }else if(teste < 0){
        resultado.innerHTML = "Jogador 2 ganhou";
    }else{
        resultado.innerHTML = "Empate"
    }
}