#ifndef LISTADECONJUNTO_H_INCLUDED
#define LISTADECONJUNTO_H_INCLUDED

struct conjunto{
    char nome[50];
    int valores[100];
};

typedef struct lista* Lista;

Lista* criar();
void destruir(Lista *);
int tamanho(Lista *);
int cheia(Lista *);
int vazia(Lista *);
int inserirInicio(Lista *, struct conjunto);
int inserirFim(Lista *, struct conjunto);
int removerFim(Lista *);
int removerInicio(Lista *);
int removerValor(Lista *, int);
int acessarIndice(Lista *, int, struct conjunto *);
int acessarValor(Lista *, int, struct conjunto *);


#endif // LISTADECONJUNTO_H_INCLUDED
