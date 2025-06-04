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

    return 0;

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
