#include <stdio.h>
#include <stdlib.h>
#include "listaDeConjunto.h"

struct lista
{
    int indentificador;
    struct conjunto dados;
    struct lista *prox;
};

typedef struct lista ListaAuxiliar;

Lista *criar()
{
    Lista *novo;
    novo = (Lista *)malloc(sizeof(Lista));

    if (novo != NULL)
    {
        *novo = NULL;
    }

    return novo;
};

int vazia(Lista *ldse)
{
    if (ldse == NULL || *ldse == NULL)
    {
        return 1;
    }
    return 0;
}

int cheia(Lista *ldse)
{
    return 0;
}

int tamanho(Lista *ldse)
{
    if (vaiza(ldse))
    {
        return 0;
    }

    int count = 0;
    ListaAuxiliar *aux = (ListaAuxiliar *)malloc(sizeof(ListaAuxiliar));

    while (aux->prox != NULL)
    {
        count++;
        aux = aux->prox;
    }

    return count;
}
