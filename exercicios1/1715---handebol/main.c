/*
    Aluno: Gustavo Bonifácio Conceição
    Turma: BSI 2021.2
    Questão: URI Online Judge | 1715
*/
#include <stdio.h>

int main()
{
    int numJogadores; // variável para o número de jogadores a serem avaliados
    int numPartidas; // variável para o número de partidas jogadas
    int totJogadores = 0; // variável para o número de jogadores que marcaram gols em todas as partidas
    int totPartidasGols; // total de gols por partidas com gols, de cada jogador
    
    
    scanf("%d %d", &numJogadores, &numPartidas); // entrada do número de jogadores e entrada do número de partidas
    
    
    int jogadorCorrente[numPartidas]; // vetor com para os gols por partida de cada jogador
    
    for(int jog = 0; jog < numJogadores; jog++) { // repetir estrutura para cada jogador
        
        totPartidasGols = 0; // contador com o número de gols em cada partida. Começa zerado
        
        for (int part = 0; part < numPartidas; part++){ // loop para entrada de gols por partida, para cada jogador
            scanf("%d", &jogadorCorrente[part]);
        }
       
       for (int count = 0; count < numPartidas; count++) { // loop para verificar contar a quantidade de partidas que o jogador marcou gol
           if (jogadorCorrente[count] > 0) {
               totPartidasGols++;
           }
        } 
        
        if ( totPartidasGols == numPartidas) { // condição para verificar se o número de partidas com gols é igual ao número de partidas jogadas
            totJogadores++; // se for, o contador de jogadores com gols em todas as partidas recebe +1
        }

    }
    
    printf("%d\n", totJogadores); // exibe o contador de jogadores com gols em todas as partidas
    
    return 0;
}
