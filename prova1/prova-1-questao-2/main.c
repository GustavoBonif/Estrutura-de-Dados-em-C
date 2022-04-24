/*
    Aluno: Gustavo Bonifácio Conceição
    Turma: BSI 2021.2
    Prova 1: Questão: 2 
*/
#include <stdio.h>
#include <math.h>

// definição da estrutura que receberá um ponto no plano, aplicando o apelido "Ponto"
typedef struct ponto {
    int x;
    int y;
} Ponto;


// função com o cálculo entre dois pontos, retornando um valor de tipo ponto flutuante
float calc_distancia(Ponto p1, Ponto p2) {
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}


int main()
{
    Ponto p1, p2; // variáveis do tipo estrutura Ponto
    
    
    // entrada dos valores do primeiro ponto
    printf("Informe os valores de X e Y do ponto 1:\n");
    // as duas entradas são atribuidas às posições x e y da variável p1, do tipo estruturado Ponto
    scanf("%d %d", &p1.x, &p1.y); 

    
    // entrada dos valores do segundo ponto
    printf("Informe os valores de X e Y do ponto 2:\n");
    // as duas entradas são atribuidas às posições x e y da variável p2, do tipo estruturado Ponto
    scanf("%d %d", &p2.x, &p2.y);

    // exibição da distância entre os pontos, por meio da chamada da função calc_distancia
    printf("distância calculada: %.2f\n", calc_distancia(p1, p2) ); 
    
    return 0; // encerra o programa
}

