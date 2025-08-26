#include <stdio.h>

#define TAMANHO 10
#define NUM_NAVIOS 2
#define TAMANHO_NAVIO 3

// Tabuleiro
char tabuleiro[TAMANHO][TAMANHO];

// Posições fixas dos navios (linha, coluna)
int navios[NUM_NAVIOS][TAMANHO_NAVIO][2] = {
    { {1,1}, {1,2}, {1,3} },   // Navio 1
    { {5,5}, {6,5}, {7,5} }    // Navio 2
};

// Inicializar tabuleiro
void inicializar_tabuleiro() {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = '~'; // água
        }
    }

    // Colocar navios no tabuleiro (pode deixar oculto se quiser mais realista)
    for (int n = 0; n < NUM_NAVIOS; n++) {
        for (int k = 0; k < TAMANHO_NAVIO; k++) {
            int linha = navios[n][k][0];
            int coluna = navios[n][k][1];
            tabuleiro[linha][coluna] = 'N';
        }
    }
}

// Mostrar tabuleiro
void mostrar_tabuleiro() {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função de ataque
void atacar(int linha, int coluna) {
    if (linha < 0 || linha >= TAMANHO || coluna < 0 || coluna >= TAMANHO) {
        printf("Posição inválida!\n");
        return;
    }

    if (tabuleiro[linha][coluna] == 'N') {
        tabuleiro[linha][coluna] = 'X'; // acertou
        printf("Acertou o navio em (%d, %d)!\n", linha, coluna);
    } else if (tabuleiro[linha][coluna] == '~') {
        tabuleiro[linha][coluna] = 'O'; // tiro na água
        printf("Tiro na água em (%d, %d).\n", linha, coluna);
    } else {
        printf("Já atacou essa posição (%d, %d).\n", linha, coluna);
    }
}

int main() {
    printf("=== Jogo de Batalha Naval ===\n\n");

    inicializar_tabuleiro();
    mostrar_tabuleiro();

    // Exemplos de ataques
    atacar(1, 1);
    atacar(1, 2);
    atacar(4, 4);
    atacar(5, 5);

    printf("\n--- Tabuleiro após os ataques ---\n");
    mostrar_tabuleiro();

    return 0;
}
