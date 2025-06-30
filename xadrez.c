#include <stdio.h>

int main() {
    // ========================
    // TORRE (Movimento: Direita)
    // ========================
    const int passosTorre = 5;

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= passosTorre; i++) {
        printf("Direita\n");
    }

    // ========================
    // BISPO (Movimento: Diagonal Superior Direita)
    // ========================
    const int passosBispo = 5;
    int j = 1;

    printf("\nMovimento do Bispo:\n");
    while (j <= passosBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // ========================
    // RAINHA (Movimento: Esquerda)
    // ========================
    const int passosRainha = 8;
    int k = 1;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= passosRainha);

    // ========================
    // CAVALO (Movimento: em L -> 2 Baixo + 1 Esquerda)
    // ========================
    const int passosVerticais = 2;
    const int passosHorizontais = 1;

    printf("\nMovimento do Cavalo:\n");

    // Primeiro loop (for): movimenta duas vezes para baixo
    for (int v = 1; v <= passosVerticais; v++) {
        printf("Baixo\n");
    }

    // Segundo loop (while): uma vez para a esquerda
    int h = 0;
    while (h < passosHorizontais) {
        printf("Esquerda\n");
        h++;
    }

    return 0;
}
