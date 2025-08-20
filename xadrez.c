#include <stdio.h>
#include <stdbool.h>

// Definição das peças
#define PECA_BISPO 5
#define PECA_TORRE   5
#define PECA_RAINHA  8

// Mover o bispo na diagonal direita para cima
void MOVER_BISPO(int step) {
    if (step == 0) return;
    printf("Diagonal Direita\n");
    MOVER_BISPO(step - 1);
}

// Mover a torre para a direita
void MOVER_TORRE(int step) {
    if (step == 0) return;
    printf("Direita\n");
    MOVER_TORRE(step - 1);
}

// Mover a rainha para a esquerda
void MOVER_RAINHA(int step) {
    if (step == 0) return;
    printf("Esquerda\n");
    MOVER_RAINHA(step - 1);
}

// Mover cavalo em L (para cima e para a direita),
void MOVER_CAVALO() {
    
    for (int i = 0, j = 0; i < 2; i++, j++) {
        if (j > i) {
            
        }
        printf("Cima\n");
    }
    
    int k = 0;
    while (k < 1) {
        printf("Direita\n");
        k++;
        break;
    }
}

int main() {
    printf("Movimentação do Bispo\n");
    MOVER_BISPO(PECA_BISPO);

    printf("\n Movimentação da Torre\n");
    MOVER_TORRE(PECA_TORRE);

    printf("\n Movimentação da Rainha\n");
    MOVER_RAINHA(PECA_RAINHA);

    printf("\n Movimentação do Cavalo em L\n");
    MOVER_CAVALO();

    return 0;
}
