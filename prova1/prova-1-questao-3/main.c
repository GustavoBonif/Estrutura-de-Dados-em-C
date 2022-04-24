/*
    Aluno: Gustavo Bonifácio Conceição
    Turma: BSI 2021.2
    Prova 1: Questão: 3 
*/
#include <stdio.h> // inclusão da biblioteca com as funções de entrada e saída
#include <stdlib.h> // inclusão da biblioteca com as funções de alocação de memória dinâmica

int main()
{
    int *v;         // inicialização de ponteiro para inteiro
    int valor;      // variável para o valor informado
    int i, count;   // variáveis de iteração
    
    // loop para entrada de valor maior ou igual a 1
    do {
        printf("Informe o valor maior que 0: ");
        scanf("%d", &valor); // a entrada é atribuida a variável valor
    }while (valor < 1);
    
    // alocando dinamicamente o tamanho de v, de acordo com o conteúdo da variável valor
    v = (int*)malloc(valor * sizeof(int));
    if(v == NULL) { // caso v seja nulo, o espaço desejado para a alocação é insuficiênte na memória
        printf("Espaço em memória insuficiênte\n");
        return 0; // se for o caso, o programa é encerrado
    }
    
    // loop que repete a quantidade de vezes definida na variável valor
    for(i = 0; i < valor; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &v[i]); // entrada de valores nas posições do vetor v
    }
    
    printf("_____________________\n");
    printf("O vetor foi preenchido com os seguintes dados:\n");
    
    // loop que repete a quantidade de vezes definida na variável valor
    for(count = 0; count < valor; count++){
       printf("%d ", v[count]); // exibição do vetor v para o usuário, com os dados setados por ele
    }
    
    free(v); // libera o espaço de memória alocada para o vetor v

    return 0; // encerra o programa
}







