#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça irá se mover
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // -------------------
    // Movimento da Torre
    // -------------------
    // A Torre se move em linha reta horizontal ou vertical. Aqui vamos mover 5 casas para a direita.
    printf("Movimento da Torre (for):\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // -------------------
    // Movimento do Bispo
    // -------------------
    // O Bispo se move na diagonal. Aqui vamos simular 5 casas na diagonal para cima e à direita.
    printf("Movimento do Bispo (while):\n");
    int passos_bispo = 0;
    while (passos_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        passos_bispo++;
    }

    printf("\n");

    // -------------------
    // Movimento da Rainha
    // -------------------
    // A Rainha se move em todas as direções. Aqui vamos simular 8 casas para a esquerda.
    printf("Movimento da Rainha (do-while):\n");
    int passos_rainha = 0;
    do {
        printf("Esquerda\n");
        passos_rainha++;
    } while (passos_rainha < casas_rainha);

    return 0;
}
