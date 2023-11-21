/*Crie um programa para gerenciar um sistema de reservas de mesas em uma casa de espetáculo. A casa possui 30 mesas de 5 lugares cada. O programa deverá permitir que o usuário escolha o código de uma mesa (100 a 129) e forneça a quantidade de lugares desejados. O programa deverá informar se foi possível realizar a reserva e atualizar a reserva. Se não for possível, o programa deverá emitir uma mensagem. O programa deve terminar quando o usuário digitar o código 0 (zero) para uma mesa ou quando todos os 150 lugares estiverem ocupados.*/

#include <stdio.h>

#define QUANTIDADEMESAS 30
#define LUGARES 5

void reservaMesas(int mesas[], int codigoMesa, int lugaresDesejados) {
    int indiceMesa = codigoMesa - 100;

    if (indiceMesa >= 0 && indiceMesa < QUANTIDADEMESAS) {
        if (mesas[indiceMesa] >= lugaresDesejados) {
            mesas[indiceMesa] -= lugaresDesejados;
            printf("Reserva realizada na mesa %d para %d lugares.\n", codigoMesa, lugaresDesejados);
        } else {
            printf("Não há lugares suficientes na mesa %d.\n", codigoMesa);
        }
    } else {
        printf("Código de mesa inválido.\n");
    }
}

void inicializarMesas(int mesas[]) {
    for (int i = 0; i < QUANTIDADEMESAS; i++) {
        mesas[i] = LUGARES;
    }
}

int main() {
    int mesas[QUANTIDADEMESAS];
    int codigoMesa, lugaresDesejados;

    inicializarMesas(mesas);

    while (1) {
        printf("Digite o código da mesa (100 a 129) ou 0 para sair: ");
        scanf("%d", &codigoMesa);

        if (codigoMesa == 0) {
            printf("Programa encerrado.\n");
            break;
        }
        printf("Digite a quantidade de lugares desejados: ");
        scanf("%d", &lugaresDesejados);
        reservaMesas(mesas, codigoMesa, lugaresDesejados);
    }

    return 0;
}