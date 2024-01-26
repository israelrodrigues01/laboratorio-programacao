#ifndef DECIMALPARABINARIO_H_INCLUDED
#define DECIMALPARABINARIO_H_INCLUDED

typedef struct pilha *Pilha;

int vazia(Pilha *);
Pilha* criar();
int add(Pilha *, int number);
int acessar(Pilha *, int *);
int remover(Pilha *);
int imprimePilha(Pilha *);



#endif // DECIMALPARABINARIO_H_INCLUDED
