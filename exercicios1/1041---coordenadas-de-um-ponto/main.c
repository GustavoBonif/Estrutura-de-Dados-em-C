/*
    Aluno: Gustavo Bonifácio Conceição
    Turma: BSI 2021.2
    Questão: URI Online Judge | 1041
*/

#include <stdio.h>

int main()
{
    double x, y; // variáveis - posição no ponto cartesiano
    char resposta[3] = "Q"; // vetor que recebará o quadrante informado. A terceira posição indica o valor nulo do vetor
    
    scanf("%lf %lf", &x, &y); // entrada pontos x e y, atribuindo as variáveis x e y
    
    // caso ambos os pontos sejam 0.0, exibe "Origem" e termina o código
    if (x == 0.0 && y == 0.0){
        printf("Origem\n");
        return 0;
    }
    
    // se algum dos pontos for 0.0, exibe o eixo em que o ponto se encontra e termina o código
    if (y == 0.0 && x != 0.0) {
        printf("Eixo X\n"); 
    }else if(x == 0.0 && y != 0.0){
        printf("Eixo Y\n");
    }
    else {
        // se X for positivo, atribui na segunda posição do vetor 'resposta' 1 ou 4, indicando o quadrante, dependendo do sinal de Y
        if (x > 0){ 
            resposta[1] = (y > 0 ? '1' : '4');
        }else if(x < 0) { // se X for negativo, atribui na segunda posição do vetor 'resposta' 1 ou 4, indicando o quadrante, dependendo do sinal de Y
            resposta[1] = (y > 0 ? '2' : '3');
        }
        printf("%s\n", resposta); //exibe o conteúdo do vetor 'resposta', contendo o quadrante (ex: Q1)
    }
   
    return 0;
    
}    
    