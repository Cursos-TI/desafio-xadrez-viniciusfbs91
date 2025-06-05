#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Bispo 
void moverBispo(int casas) {
    if (casas == 0) return;
    
    // Loop aninhado para movimento diagonal
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
    
    moverBispo(casas - 1);
}

// Cavalo
void moverCavalo() {
    int movimentos = 0;
    
    for (int i = 0; i < 3; i++) {
        int j = 0;
        // Loop aninhado com while
        while (j < 1) {
            if (movimentos < 2) {
                printf("Cima\n");
            } else if (movimentos < 3) {
                printf("Direita\n");
            }
            movimentos++;
            j++;
        }
    }
}

int main() {
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);
    
    printf("\nMovimento do Bispo (5 casas na diagonal cima-direita):\n");
    moverBispo(5);
    
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);
    
    printf("\nMovimento do Cavalo (2 casas para cima, 1 para a direita):\n");
    moverCavalo();
    
    return 0;
}
