/*
    Aluno: Gustavo Bonifácio Conceição
    Turma: BSI 2021.2
    Prova 1: Questão: 1 
*/
#include <stdio.h>

int soma(int a, int b) {
    return a+b; // retornando o resultado da soma dos dois parâmetros
}

int sub(int a, int b) {
    return a-b; // retornando o resultado da subtração dos dois parâmetros
}

int multi(int a, int b) {
    return a*b; // retornando o resultado da multiplicação dos dois parâmetros
}

int divisao(int a, int b) {
    return a/b; // retornando o resultado da divisão dos dois parâmetros
}

int main()
{
    int x, y; // variáveis para os dois valores
    
    printf("Informe os valores x e y:\n");
    scanf("%d %d", &x, &y); // entrada dos dois valores
    
    printf("\nresultado da soma: \n");
    printf("x + y = %d\n", soma(x, y)); // exibindo o resultado da soma
    
    printf("\nresultado da subtração: \n");
    printf("x - y = %d\n", sub(x, y)); // exibindo o resultado da subtração
    printf("y - x = %d\n", sub(y, x)); // exibindo o resultado da subtração
    
    printf("\nresultado da multiplicação: \n");
    printf("x * y = %d\n", multi(x, y)); // exibindo o resultado da multiplicação 
    
    printf("\nresultado da divisão: \n");
    printf("x / y = %d\n", divisao(x, y)); // exibindo o resultado da 1º divisão
    printf("y / x = %d\n", divisao(y, x)); // exibindo o resultado da 2º divisão

    return 0; // encerra o programa
}

