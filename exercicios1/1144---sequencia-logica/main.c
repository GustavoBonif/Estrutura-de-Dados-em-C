/*
    Aluno: Gustavo Bonifácio Conceição
    Turma: BSI 2021.2
    Questão: URI Online Judge | 1144
*/
#include <stdio.h>

int main()
{
    int valor; // criação da variável valor
    
    scanf("%d", &valor); // entrada de valor
    
    // loop para repetir o número de vezes informado na variável valor
    for (int i = 1; i <= valor; i++ ){ 
        
        // primeira exibição do loop: i, i^2, i^3
        printf("%d %d %d\n", i, i*i, i*i*i);
        
        // segunda exibição do loop: i, i^2 + 1, i^3 + 1
        printf("%d %d %d\n", i, i*i+1, i*i*i+1);
    }

    return 0; // encerra o programa
}
