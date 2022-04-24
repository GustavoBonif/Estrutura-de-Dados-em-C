/*
    Aluno: Gustavo Bonifácio Conceição
    Turma: BSI 2021.2
    Questão: URI Online Judge | 1006
*/

#include <stdio.h>

int main()
{
    // declaração das variáveis que serão as notas e a média do aluno
    double A, B, C, MEDIA;
    
    // entrada das 3 notas do aluno, atribuindo às variáveis A, B, C
    scanf("%lf %lf %lf", &A, &B, &C); 
    
    // atribuindo a variável MEDIA o cálculo da média do aluno com os pesos aplicados em cada nota
    MEDIA = (A * 0.2 + B * 0.3 + C * 0.5); 
    
    // exibição da variável média
    printf("MEDIA = %.1lf\n", MEDIA); 
    return 0;
}