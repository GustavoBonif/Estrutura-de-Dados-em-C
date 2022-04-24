/*
    Aluno: Gustavo Bonifácio Conceição
    Turma: BSI 2021.2
    Prova 1: Questão: 4 
*/
#include <stdio.h> // biblioteca com funções de entrada e saída
#include "retangulo.h" // inclusão do arquivo com os cabeçalhos das funções

int main()
{
    // inicialização de variáveis para armazenar a base e a altura do retângulo
    float base, altura;
    
    printf("Informe a base do retangulo: ");
    scanf("%f", &base); // entrada da base
    
    printf("Informe a altura do retangulo: ");
    scanf("%f", &altura); // entrada da altura
    
    // exibição dos valores de área, perímetro e diagonal do retângulo,
    // utilizando as funções calc_area, calc_perimetro e calc_diagonal respectivamente
    printf("A área do retangulo é: %.2f\n", calc_area(base, altura));
    printf("O perímetro do retangulo é: %.2f\n", calc_perimetro(base, altura));
    printf("A diagonal do retangulo é: %.2f\n", calc_diagonal(base, altura));

    return 0; // encerra o programa
}
