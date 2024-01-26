#include <stdlib.h>
#include <stdio.h>
#include "decimalParaBinario.h"

struct pilha{
    int binario;
    struct pilha *prox;
};

typedef struct pilha Element;

int vazia(Pilha *p){
    if(p == NULL || *p == NULL){
        return 1;
    }else{
        return 0;
    }
}

Pilha* criar(){
    Pilha *p;
    p = (Pilha *)malloc(sizeof(Pilha));

   if(p != NULL){
        *p = NULL;
    }
    return p;
}

int add(Pilha *p, int number){
    if(p == NULL){
        return 0;
    }else{
        Element *novo = (Element *)malloc(sizeof(Element));
        if(novo == NULL){
            return 0;
        }else{
            novo->binario = number;
            novo->prox = *p;
            *p = novo;
            return 1;
        }
    }
}

int acessar(Pilha *p, int *number){
    if(vazia(p)){
        return 0;
    }else{
        *number = (*p)->binario;
        return 1;
    }
};

int remover(Pilha *p){
    if(vazia(p)){
        return 0;
    }else{
        Element *aux;
        while(*p != NULL){
            aux = *p;
            *p = (*p)->prox;
            free(aux);
        }
        free(p);
    }
};

int imprimePilha(Pilha *p){
    if(vazia(p)){
        return 0;
    }else{
        Element *aux = *p;
        while(aux != NULL){
            printf("--------------------------------\n");
            printf("%d\n", aux->binario);
            printf("--------------------------------\n");
            aux = aux->prox;
        }
        return 1;
    }
}






