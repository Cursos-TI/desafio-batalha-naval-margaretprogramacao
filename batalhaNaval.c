#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3


int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    int linha_navio_horizontal = 2; 
    int coluna_navio_horizontal = 4; 

    int linha_navio_vertical = 5; 
    int coluna_navio_vertical = 1; 

    if (coluna_navio_horizontal + TAMANHO_NAVIO > TAMANHO_TABULEIRO ||
        linha_navio_vertical + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Erro: um dos navios excede os limites do tabuleiro.\n");
        return 1;
}

int sobreposicao = 0;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] == 3 ||
            tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] == 3) {
            sobreposicao = 1;
            break;
        }
}

if (sobreposicao) {
        printf("Erro: sobreposição de navios detectada.\n");
        return 1;
}

for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] = 3;
}