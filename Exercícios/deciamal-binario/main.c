#include <stdio.h>
#include <stdlib.h>
#include "decimalParaBinario.h"


void imprimeMenu(){
    printf("Digite o numero da opcao desejada:\n");
    printf("1- Inserir aluno\n");
    printf("2- Remover aluno\n");
    printf("3- Acessa aluno no topo da pilha\n");
    printf("4- Imprime a pilha\n");
    printf("5- Sair do Programa\n");
}

int main(){
    int opcao = -1;
    Pilha *pilha;
    pilha = NULL;
    pilha = criar();

     while(opcao != 5){
        imprimeMenu();
        scanf("%d", &opcao);
        if(opcao == 1){
            int number;
            printf("\nDigite o número decimal");
            scanf("%d", &number);
            int aux = number;
            while(aux >= 2){
                add(pilha, aux % 2);
                aux= aux/2;
            }
            add(pilha, aux);
        }else if(opcao == 2){
            remover(pilha);
        }else if(opcao == 3){
            int number;
            acessar(pilha,&number);
            printf("--------------------------------\n");
            printf("%d\n", number);
            printf("--------------------------------\n");
        }else if(opcao == 4){
            imprimePilha(pilha);
        }else if(opcao == 5){
            remover(pilha);
            printf("Encerrando o programa\n");
        }else{
            printf("Opcao invalida, tente novamente\n");
        }
    }

    return 0;
}
