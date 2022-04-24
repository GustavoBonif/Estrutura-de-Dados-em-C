/*
    Aluno: Gustavo Bonifácio Conceição
    Turma: BSI 2021.2
    Prova 1: Questão: 4 
*/
#include <math.h> // biblioteca math para calculo usando raiz quadrada
#include "retangulo.h" // inclusão de arquivo com os cabeçalhos das funções

// todas as funções usam de parâmetro a base e a altura de entrada do usuário

// função que retorna a área do retângulo 
float calc_area(float base, float altura){
    return base * altura;
}

// função que retorna o perímetro do retângulo
float calc_perimetro(float base, float altura){
    return base + base + altura + altura;
}

// função que retorna a diagonal do retângulo
float calc_diagonal(float base, float altura){
    return sqrt( (base * base) + (altura * altura) );
}
