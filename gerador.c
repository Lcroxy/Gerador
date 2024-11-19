#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerar_pass(int num_letras){
    srand(time(NULL));
    for(int i = 0;i<num_letras;i++){
        char letra = 65+rand()%25;
        printf("%c", letra);
    }
}
void escolha(int op){
    switch (op){
        int num_letras;
        case 1:
            num_letras = 6;
            printf("Sua senha: ");
            gerar_pass(num_letras);
        break;
        case 2:
            num_letras = 8;
            printf("Sua senha: ");
            gerar_pass(num_letras);
        break;
        case 3:
            num_letras = 12;
            printf("Sua senha: ");
            gerar_pass(num_letras);
        break;
        case 4: 
            printf("Que tamanho tu quer: ");
            scanf("%d", &num_letras);
            printf("Sua senha: ");
            gerar_pass(num_letras);
        break;
    }
} 

void apresentacao(){
    printf("##########################\n");
    printf("#    GERADOR DE SENHA    #\n");
    printf("##########################\n");
    printf("TAMANHOS: \n");
    printf("1) => 6 Letras\n");
    printf("2) => 8 Letras\n");
    printf("3) => 12 Letras\n");
    printf("4) Personalizado\n");
}   

int main(){
    apresentacao();
    int opcao = 0;
    printf("Escolha: ");
    scanf("%d", &opcao);
    escolha(opcao);
}