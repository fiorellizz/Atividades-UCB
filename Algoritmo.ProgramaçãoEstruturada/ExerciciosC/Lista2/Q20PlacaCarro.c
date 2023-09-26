//A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dos motoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro deve ser renovado é determinado pelo último número da placa do mesmo, faça um programa que, a partir da leitura da placa do carro, informe o mês em que o emplacamento deve ser renovado.


/*
#include <stdio.h>

int main() {
    char placa[8];
    int ultimoDigito;

    // Solicita a entrada da placa do carro
    printf("Digite a placa do carro (formato ABC-1234): ");
    scanf("%s", placa);

    // Obtém o último dígito da placa
    ultimoDigito = placa[7] - '0';

    // Determina o mês de renovação com base no último dígito da placa
    switch (ultimoDigito) {
        case 1:
            printf("O emplacamento deve ser renovado em Janeiro.\n");
            break;
        case 2:
            printf("O emplacamento deve ser renovado em Fevereiro.\n");
            break;
        case 3:
            printf("O emplacamento deve ser renovado em Março.\n");
            break;
        case 4:
            printf("O emplacamento deve ser renovado em Abril.\n");
            break;
        case 5:
            printf("O emplacamento deve ser renovado em Maio.\n");
            break;
        case 6:
            printf("O emplacamento deve ser renovado em Junho.\n");
            break;
        case 7:
            printf("O emplacamento deve ser renovado em Julho.\n");
            break;
        case 8:
            printf("O emplacamento deve ser renovado em Agosto.\n");
            break;
        case 9:
            printf("O emplacamento deve ser renovado em Setembro.\n");
            break;
        case 0:
            printf("O emplacamento deve ser renovado em Outubro.\n");
            break;
        default:
            printf("Placa inválida.\n");
    }

    return 0;
}
*/ 