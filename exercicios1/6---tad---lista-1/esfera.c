/*
    Aluno: Gustavo Bonifácio Conceição
    Turma: BSI 2021.2
    Questão: 6 - Implemente um TAD
*/

#include "esfera.h" // incluindo a declaração do cabeçalho das funções

#define N_PI 3.14159265358979323846

float calc_raio(float diametro) {
    // cálculando e retornando o raio com base no diâmetro informado
    return diametro / 2; 
}

float calc_area(float raio) {
    // cálculando e retornando a área com base no raio, calculado com base no diâmetro informado
    return 4 * N_PI * (raio * raio);
}

float calc_volume(float raio) {
    // cálculando e retornando o volume com base no raio, calculado com base no diâmetro informado
    return ( 4 * N_PI * (raio * raio * raio) ) / 3;
}