#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int t = 1; t <= 5; t++) {
        printf("Direita\n");
    }

    // Movimentacao do Bispo - 5 casas na diagonal cima-direita (usando while)
    int b = 1;
    printf("\nMovimento do Bispo (5 casas na diagonal Cima Direita):\n");
    while (b <= 5) {
        printf("Cima Direita\n");
        b++;
    }

    // Movimentacao da Rainha - 8 casas para a esquerda (usando do-while)
    int r = 1;
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Cavalo - Utilizando Loop aninhado  for + while (movimento em L: 2 para baixo, 1 para a esquerda)
    printf("\nMovimento do Cavalo (2 casas para baixo, 1 para a esquerda):\n");

    int p_baixo = 2; // anda 2 pra baixo
    int p_lado = 1; // anda somente 1 para o lado

    for (int l = 0; l < p_baixo; l++) {
        printf("Baixo\n"); // Começa Indo para baix
        int m = 0;
        while (m < p_lado && l == p_baixo - 1) {
            printf("Esquerda\n"); // Enquanto atender a condição, "anda"ara a esquerda
            m++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
