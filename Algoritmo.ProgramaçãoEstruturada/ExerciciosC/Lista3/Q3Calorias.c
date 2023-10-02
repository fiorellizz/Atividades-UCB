//Crie um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.

#include<stdio.h>
#include<locale.h>

int main(){
        setlocale(LC_ALL, "Portuguese");

        int prato, sobremesa, bebida, calorias = 0;

        printf("Escolha seu prato: ");
        scanf("%d", &prato);

        switch(prato){
        case 1:
            calorias = calorias + 180;
            break;
        case 2:
            calorias = calorias + 230;
            break;
        case 3:
            calorias = calorias + 250;
            break;
        case 4:
            calorias = calorias + 350;
            break;
        default:
            printf("\nOPÇÃO INVÁLIDA!.");
            break;
        }


        printf("Escolha seu sobremesa: ");
        scanf("%d", &sobremesa);

        switch(sobremesa){
        case 1:
            calorias = calorias + 75;
            break;
        case 2:
            calorias = calorias + 110;
            break;
        case 3:
            calorias = calorias + 170;
            break;
        case 4:
            calorias = calorias + 200;
            break;
        default:
            printf("\nOPÇÃO INVÁLIDA!.");
            break;
        }  

        printf("Escolha sua bebida: ");
        scanf("%d", &bebida);

        switch(bebida){
        case 1:
            calorias = calorias + 20;
            break;
        case 2:
            calorias = calorias + 70;
            break;
        case 3:
            calorias = calorias + 100;
            break;
        case 4:
            calorias = calorias + 65;
            break;
        default:
            printf("\nOPÇÃO INVÁLIDA!.");
            break;
        }
        printf("O total de calorias da sua refeição é de %d", calorias);
        
        return 0;
}