// Aluno: Gustavo Bonifácio Conceição
// Turma: BSI4 - 2021.2

#include "lista_circ.h"

Lista* inicializa(void)
{
    return NULL;
}


int vazia (Lista* l)
{
    return (l == NULL); 
}

Lista* insere(Lista *l, int i)
{
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    if (novo == NULL)
    {
        printf("Memoria insuficiente \n");
        exit(1);
    }
    novo->info = i;
	//Se for a primeira inserção da lista temos que criar o ciclo na lista
	if (l == NULL)
		// Fazemos com que o primeiro da lista aponte ele mesmo como o próximo nó.
		novo->prox = novo;
	else{
		novo->prox = l;

		// como inserimos no início da lista, devemos percorre a lista e 
		//procurar o elemento anterior ao início da lista circular
		Lista *locUlt = l;
		while (locUlt->prox != l){
			locUlt = locUlt->prox;
		}
		//Assim que achamos o elemento devemos mudar o endereço de próximo desse elemento para o novo elemento.
		locUlt->prox = novo;
	}
    return novo;
}

void imprime (Lista* l)
{
	//Verifico se a lista está vazia antes e encerro a função
	if (vazia(l)){
		printf("Lista vazia!\n");
		return;
	}
	
	Lista* p = l;
	do{
		//Estou imprimindo o endereço do nó, o Info e o endereço do próximo elemento.
		printf("Endereco do no: %d Info do no = %d  Endereco do Proximo: %d \n", p, p->info, p->prox);
		p = p->prox;
	//Critério de para quando chegarmos no endereço do início da lista circular
	}while(p != l);
	
	    
}


Lista* busca (Lista* l, int v)
{
    Lista* p=l;
	do{
		if (p->info == v)
            return p;
		
		p=p->prox;
	}while(p!=l);
    
    return NULL; 
}

Lista* retira (Lista* l, int v) {
	//Verifico se a lista está vazia primeiro
	if (l == NULL)
		return l;
	
    Lista* ant = l;
    Lista* p = l->prox; 
    while (p != l && p->info != v){
        ant = p;
        p = p->prox;
    }
	//Só altero se parei no elemento que vou retirar
	if (p->info == v){
		ant->prox = p->prox;
		
		//Se o elemento a retirar for o primeiro preciso ajeitar o início da lista.
		if (l == p)
			//Se não é o único elemento da lista
			if (l != l->prox)
				l = l->prox;
			
			else //Retirando o único elemento da lista
				l = NULL;
		
		free(p); 
	}

    return l;
}

void libera (Lista* l)
{
	if (l == NULL)
        return;
		
    Lista* p = l;
    Lista* t = NULL;
    do{
        t = p->prox; 
        free(p); 
        p = t; 
    }while (p != l);
}

void retira_josephus (Lista* l, int k)
{
    int tot_elem = 0;
    Lista* est = l;
	do{
		tot_elem++;
	}while(est != l);
	
	
	int total = sizeof(l)/sizeof(l[0]);
    printf("TOTAL DE ELEMENTOS: %d\n", total);
	
    printf("\n\n");
    int count = 0;
	Lista* p = l;
	do{
		//Estou imprimindo o endereço do nó, o Info e o endereço do próximo elemento.
        //printf("Endereco do no: %d Info do no = %d  Endereco do Proximo: %d \n", p, p->info, p->prox);
		printf("Info do no = %d  \n", p->info);
		p = p->prox;
		
		if(count == k) {
		    printf("Deletendo a info %d  \n", p->info);
		    p = retira (p, p->info);
		    count = 0;
		}
		
		count++;
	//Critério de para quando chegarmos no endereço do início da lista circular
	}while(p != l);
	
	printf("\n\n", p->info);
}


