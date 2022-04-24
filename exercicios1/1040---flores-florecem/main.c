/*
    Aluno: Gustavo Bonifácio Conceição
    Turma: BSI 2021.2
    Questão: URI Online Judge | 1040
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[1250]; // vetor da frase com o tamanho máximo possível
    char resposta;    // variável com o retorno
    int i = 0;        // contador para iterar o vetor frase
    
     
    do {
        fgets(frase, 1250, stdin); // entrada da frase
        
        if (frase[0] == '*') { // finalizar o programa ao receber '*'
            return 0;
        }
        
        resposta = 'Y';
        
        // repetir até i ser igual ao tamanho do vetor (usando strlen para garantir que sejam apenas os espaços preenchidos)
        for (i= 0; i <= strlen(frase); i++) {
        
            if (frase[i] == ' '){ // verificar espaços na frase
                
                // o valor seguinte ao espaço (a primeira letra da próxima palavra) deve ser igual à primeira letra da frase
                if( tolower(frase[0]) != tolower(frase[i+1]) ){
                    resposta = 'N'; // se não for o caso, não é um tautograma
                    
                }
                
            }
        }
        
        printf("%c\n", resposta); // exibe se é ou não um tautograma
        
    }while (frase[0] != '*');   
    

    return 0; // encerra o programa
}
