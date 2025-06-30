#include <stdio.h>

int main() {
    // ----------- TORRE (for) -----------
    // A torre se move em linha reta. Simularemos 5 movimentos para a direita.
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // ----------- BISPO (while) -----------
    // O bispo se move em diagonal. Simularemos 5 movimentos para cima e à direita.
    printf("\nMovimento do BISPO:\n");
    int j = 1;
    while (j <= 5) {
        printf("Casa %d: Cima Direita\n", j);
        j++;
    }

    // ----------- RAINHA (do-while) -----------
    // A rainha se move em todas as direções. Simularemos 8 movimentos para a esquerda.
    printf("\nMovimento da RAINHA:\n");
    int k = 1;
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= 8);

    return 0;
}

