//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Cores
const char *dark_purple = "\033[38;5;55m";
const char *purple = "\033[38;5;93m";
const char *light_purple = "\033[38;5;219m";
const char *reset = "\033[0m";

//funcoes
void logo(){
    //logotipo que aparece no inicio do programa so para dar style
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
    //Funcao que gera os numeros aleatoriamente e converte para char
    //em outras palavras funcao que gera as senhas
    srand(time(NULL));
    for(int i = 0;i<num_letras;i++){
        char letra = 65+rand()%25; //o range de numeros a gerar
        printf("%c", letra);
    }
}
void escolha(int op){ //funcao que permite que o usuario faca as escolha de palavras passes e muito mais
    switch (op){
        int num_letras;// variavel que indica quantas letras tera a senha
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

void opcoes(){ // funcao que mostra as opcoes para o usuario (funcao output)
    printf("\nTAMANHOS: \n");
    printf("1) 6 Letras\n");
    printf("2) 8 Letras\n");
    printf("3) 12 Letras\n");
    printf("4) Personalizado\n");
    printf("5) \033[31mSair\033[0m\n");
}

void apresentacao(){ // como diz o nome funcao que apresenta tudo isso na tela
    logo();// o logotipo inicial
    opcoes();// opcoes de senhas
}   

int main(){ // funcao principal onde tudo acontece
    int opcao = 0;// funciona em conjunto com a funcao escolha para designar a escolha do user
    apresentacao();
    do{//loop que torna o programa versatil podendo utilizar quantas vezes quiser
        printf("Escolha: ");
        scanf("%d", &opcao);// funcao que le a opcao que o usuario escolhe
        system("clear");// limpa a tela
        escolha(opcao);
        opcoes();
        printf("\n");
        if(opcao == 5){// interatividade para mostrar que saiu do programa
            printf("saindo...");
        }
    }while(opcao != 5);
    printf("\n");
}