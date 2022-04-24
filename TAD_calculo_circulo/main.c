/*
    *   Aluno: Gustavo Bonifácio Conceição
    *   Turma: BSI4 - 2021.2
    *
    *   Utilizei a implementação de lista circular do SIGAA.
    *   Deixei alguns printfs comentados para demonstrar os passos que são realizados.
    *   Não consegui chegar no resultado esperado, porém penso que estou no caminho correto,
    * por favor comunicar a correção para essa minha implementação (no sigaa ou pelo email, vou ficar muito grato).
*/


#include "lista_circ.h"

int main(void)
{
	Lista *lista;
    lista = inicializa(); 
    int n, k, info, i, totItensLista, pessoaRetirada;
    Lista *pessoa;
    
    printf("\n\n");
    
    printf("Quantos elementos serão informados (n) ?\n");
    scanf("%d", &n);
    
    for( i = 1 ; i <= n; i++) {
        lista = insere(lista, i);
    }
    
    printf("Agora, de quantos em quantos elementos ocorrerá uma retirada de elemento ?\n");
    scanf("%d", &k);
    
    printf("\n\n");

    totItensLista = n;
    
    
    for( i = 1 ; totItensLista >= 1; i = i+k) {
        
        pessoaRetirada = i+k-1;
        
        if(i > n) {
            i = i - n;
        }
        
        if(pessoaRetirada > n) {
            pessoaRetirada = pessoaRetirada - n;
        }
        
        //printf("\n valor de i = %d e será deletada a pessoa %d \n", i, pessoaRetirada);
         
        pessoa = busca(lista, pessoaRetirada);
        
        if (pessoa != NULL) {
            //printf("\n resultado da busca = %d\n", pessoa->info);
            
            retira(lista, pessoa->info);
            totItensLista--;
        }
        
    }
    
    imprime(lista);
    
    libera (lista);
    
}