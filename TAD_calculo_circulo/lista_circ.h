#include <stdio.h>
#include <stdlib.h>

struct lista_enc {
    int info; 
    struct lista_enc *prox;
};

typedef struct lista_enc Lista;

Lista* inicializa(void);

int vazia (Lista* l);

Lista* insere(Lista *l, int i);

void imprime (Lista* l);

Lista* busca (Lista* l, int v);

Lista* retira (Lista* l, int v);

void libera (Lista* l);

void retira_josephus (Lista* l, int k);