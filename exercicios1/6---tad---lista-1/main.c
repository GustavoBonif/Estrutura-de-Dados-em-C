/*
    Aluno: Gustavo Bonifácio Conceição
    Turma: BSI 2021.2
    Questão: 6 - Implemente um TAD
*/

#include <stdio.h>
#include "esfera.h" // incluindo a declaração do cabeçalho das funções

int main()
{
 
    int op;             // variável que irá receber a operação desejada
    float diametro;     // variável para o diâmetro da esfera
    float result;       // resultado da operação escolhida
    
 
    printf("Informe o número da operação desejada: \n 1 - Raio \n 2 - Área \n 3 - Volume\n");
    scanf("%d", &op); // entrada da operação escolhida
 
    printf("Para calcular os valores, informe o diâmetro da esfera: ");
    scanf("%f", &diametro); // entrada do diâmetro
            
            
    // uso de switch redirecionar o conteúdo do diâmetro para a função correta, atribuíndo o retorno para a variável result        
    switch (op) {
        case 1:
            printf("Calculo de raio...\n");
            result = calc_raio(diametro); 
        break;
        
        case 2:
            printf("Calculo de área...\n");
            result = calc_area( calc_raio(diametro) );
        break;
        
        case 3:
            printf("Calculando o volume...\n");
            result = calc_volume( calc_raio(diametro) );
        break;
        
    }
    
    printf("resultado: %.2f", result); // exibindo o conteúdo de result, com apenas 2 casas decimais
 
    return 0; // encerrando o programa
}