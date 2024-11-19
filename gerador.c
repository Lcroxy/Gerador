#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Cores
const char *dark_purple = "\033[38;5;55m";
const char *purple = "\033[38;5;93m";
const char *light_purple = "\033[38;5;219m";
const char *reset = "\033[0m";

void logo(){
    printf("%s    ###      ###      ###      ###  ###         ###       ###\n", dark_purple);
    printf("   ####     ####     ####     ####  ####       #####     ####  \n");
    printf("  ##  #    ##       ## ##    ## ##  ## ##     ##  ##    ## ##  \n");
    printf(" ##       ##       ##  ##   ##  ##  ##  ##   ##   ##   ##  ##\n");
    printf("##  ###  ######   #####    #######  ##   ##  ##   ##  ##### \n");
    printf("##    #  ##       ##  ##   ##   ##  ##  ###  ##  ##   ##  ##  \n");
    printf("#######  #######  ##   ##  ##   ##  ######    ####    ##   ##%s\n", reset);
    printf("______________________________________________________________\n");
}

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

void opcoes(){
    printf("\nTAMANHOS: \n");
    printf("1) 6 Letras\n");
    printf("2) 8 Letras\n");
    printf("3) 12 Letras\n");
    printf("4) Personalizado\n");
    printf("5) \033[31mSair\033[0m\n");
}

void apresentacao(){
    logo();
    opcoes();
}   

int main(){
    int opcao = 0;
    apresentacao();
    do{
        printf("Escolha: ");
        scanf("%d", &opcao);
        system("clear");
        escolha(opcao);
        opcoes();
        printf("\n");
        if(opcao == 5){
            printf("saindo...");
        }
    }while(opcao != 5);
    printf("\n");
}