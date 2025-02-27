var value = Number(prompt('Digite um numero: '));

for (let i = 0; i < value; i++) {
    if (i % 2 === 0) {  // Para números pares
        document.write('<span style="color: green; font-size: 50px">Valor ' + i + '</span><br>');
    } else {  // Para números ímpares
        document.write('<span style="color: red; font-size: 20px">Valor ' + i + '</span><br>');
    }
}

alert('Bem vindo ao FiorelliBank');

var isRuning = true;
var value = 0;

while (isRuning) {
    alert('Seu Saldo atual é '+value);

    var extrato = [];

    var option = Number(prompt('Digite 1 para Sacar\nDigite 2 para Depositar\nDigite 0 para Sair\nDigite sua escolha: '));

    switch (option) {
        case 1:
            alert('Opção Saque');
            var valueSaque = Number(prompt('Digite o valor do seu Saque: '));
            if (valueSaque>value) {
                alert('Como tu quer sacar um valor que você não tem?\nSai daqui seu liso!');
                continue;
            }
            value -= valueSaque;
            alert('Ok!\nValor sacado: '+valueSaque);
            extrato.push('saque');
            break;
        
        case 2:
            alert('Opção Deposito');
            var valueDeposito = Number(prompt('Digite o valor do seu Deposito: '));
            if (valueDeposito<0) {
                alert('Como tu quer depositar um valor menor que 0?');
                continue;
            }
            value += valueDeposito;
            alert('Ok!\nValor depositado: '+valueDeposito);
            extrato.push('deposito');
            break;

        case 0:
            alert('Tmj, Obrigado por usar essa coisa ruim e feia!')
            isRuning = false;
            break;
    
        default:
            isRuning = false;
            break;
    }

    alert(extrato);
}