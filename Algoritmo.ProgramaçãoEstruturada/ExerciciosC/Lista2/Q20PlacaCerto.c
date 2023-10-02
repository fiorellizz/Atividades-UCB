//A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dos motoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro deve ser renovado é determinado pelo último número da placa do mesmo, faça um programa que, a partir da leitura da placa do carro, informe o mês em que o emplacamento deve ser renovado.

#include <stdio.h>

int main() {

    int placa, milhar, centena, dezena;

    printf("Digite os números finais da placa do carro (formato: 1234): ");
    scanf("%d", &placa);

    milhar = placa / 1000;
    placa = placa - (milhar*1000);

    centena = placa / 100;
    placa = placa - (centena*100);

    dezena = placa / 10;
    placa = placa - (dezena*10);

    if(placa == 1){
        printf("O emplacamento deve ser renovado em Janeiro.");
    } else if(placa == 2){
        printf("O emplacamento deve ser renovado em Fevereiro.");
    } else if(placa == 3){
         printf("O emplacamento deve ser renovado em Março.");
    } else if(placa == 4){
         printf("O emplacamento deve ser renovado em Abril.");
    } else if(placa == 5){
         printf("O emplacamento deve ser renovado em Maio.");
    } else if(placa == 6){
         printf("O emplacamento deve ser renovado em Junho.");
    } else if(placa == 7){
         printf("O emplacamento deve ser renovado em Julho.");
    } else if(placa == 8){
         printf("O emplacamento deve ser renovado em Agosto.");
    } else if(placa == 9){
         printf("O emplacamento deve ser renovado em Setembro.");
    } else if(placa == 0){
         printf("O emplacamento deve ser renovado em Outubro.");
    } else{
        printf("Placa inválida.");
    }

    return 0;
}
