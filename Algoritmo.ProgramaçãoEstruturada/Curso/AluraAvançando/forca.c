#include <stdio.h>
#include <string.h>

void abertura(){
    printf("/****************/\n");
    printf("/ Jogo de Forca */\n");
    printf("/****************/\n\n");
}

void novoChute(char chutes[], int tentativas){
    char chute;
    scanf(" %c", &chute);
    chutes[tentativas] = chute;
}

int main(){
    char secreta[20];

    sprintf(secreta, "MATEMATICA");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    abertura();

    do{

        for (int i = 0; i < strlen(secreta); i++){

            int achou = 0;

            for (int j = 0; j < tentativas; j++){
                if (chutes[j] == secreta[i]){
                    achou = 1;
                    break;
                }
            }
            if (achou){
                printf("%c ", secreta[i]);
            } else {
                printf("_ ");
            }
        }
        printf("\n");
        
        novoChute(chutes, tentativas);
        tentativas++;

    } while (!acertou && !enforcou);
    

    return 0;
}