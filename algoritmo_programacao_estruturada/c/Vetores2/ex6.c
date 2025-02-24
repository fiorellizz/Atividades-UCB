/*Construa um programa que realize as reservas de passagens áreas de uma companhia. O programa deve permitir cadastrar o número de 10 voos e definir a quantidade de lugares disponíveis para cada um. Após o cadastro, leia vários pedidos de reserva, constituídos do número da carteira de identidade do cliente e do número do voo desejado. Para cada cliente, verificar se há possibilidade no voo desejado. Em caso afirmativo, imprimir o número da identidade do cliente e o número do voo, atualizando o número de lugares disponíveis. Caso contrário, avisar ao cliente a inexistência de lugares. A leitura do número 0 (zero) para o voo desejado indica o término da leitura de reservas.*/

#include <stdio.h>
#define TOTAL 10

void realizarReserva(int voos[], int numVoo, int lugaresDesejados, int identidadeCliente) {
    if (numVoo >= 1 && numVoo <= TOTAL) {
        int indiceVoo = numVoo - 1;
        if (voos[indiceVoo] >= lugaresDesejados) {
            voos[indiceVoo] -= lugaresDesejados;
            printf("Reserva realizada para o cliente %d no voo %d. Lugares restantes: %d.\n",
                   identidadeCliente, numVoo, voos[indiceVoo]);
        } else {
            printf("Não há lugares suficientes no voo %d para o cliente %d.\n", numVoo, identidadeCliente);
        }
    } else {
        printf("Voo inválido.\n");
    }
}

int main() {
    int voos[TOTAL];

    for (int i = 0; i < TOTAL; i++) {
        printf("Digite a quantidade de lugares disponíveis para o voo %d: ", i + 1);
        scanf("%d", &voos[i]);
    }

    while (1) {
        int identidadeCliente, numVoo, lugaresDesejados;

        printf("\nDigite o número da identidade do cliente (ou 0 para encerrar): ");
        scanf("%d", &identidadeCliente);

        if (identidadeCliente == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        printf("Digite o número do voo desejado (1 a %d): ", TOTAL);
        scanf("%d", &numVoo);

        printf("Digite a quantidade de lugares desejados: ");
        scanf("%d", &lugaresDesejados);

        realizarReserva(voos, numVoo, lugaresDesejados, identidadeCliente);
    }

    return 0;
}