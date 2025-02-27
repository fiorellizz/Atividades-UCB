var area = document.getElementById('area');

// function isVazio(text) {
//     if (text === '' || text === null) {
//         alert("Ops, algo deu errado!");
//         area.innerHTML = "Clique no botão acessar...";
//     } else {
//         area.innerHTML = "Bem-vindo, " + nome + "!";
//     }
// }

function entrar() {
    
    var nome = prompt("Digite seu nome:");
    var curso = prompt("Digite o seu curso:");


    if (nome === '' || nome === null || curso === null || curso === '') {
        alert("Ops, algo deu errado!");
        area.innerHTML = "Clique no botão acessar...";
    } else {
        area.innerHTML = `Bem-vindo, ${nome}, ao curso de ${curso}`;
    }

    let botaoSair = document.createElement("button");
    botaoSair.innerHTML = "Sair da conta";
    botaoSair.onclick = sair;
    area.appendChild(botaoSair);

    let addNotas = document.createElement("button");
    addNotas.innerHTML = "Adicionar notas";
    addNotas.onclick = aluno;
    area.appendChild(addNotas);

}

function sair() {
    alert("Até mais!");
    area.innerHTML = "Você saiu!";
}

function aluno(){

    let somaNotas

    for (let i = 0; i < 3; i++) {
        nota = Number(prompt(`Digite sua nota ${i + 1}`));
        while (nota === '' || nota === null) {
            nota = Number(prompt(`Digite sua nota ${i + 1}`));
        }

        somaNotas += nota;
    }
    
    var result = mediaTresNotas(somaNotas);

    alert('Média: ' + result.toFixed(2));

    result > 7 ? alert("Aprovado!") : alert("Reprovado!")
}

function mediaTresNotas(nota) {
    return nota/3;
}