#include <stdio.h>


// Função recursiva para mover a Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva com loops aninhados para mover o Bispo (5 casas na diagonal superior direita)
void moverBispo(int atual, int limite) {
    if (atual >= limite) return;

    for (int i = atual; i < atual + 1; i++) {
        for (int j = atual; j < atual + 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(atual + 1, limite);
}

// Movimento do Cavalo (2 casas para cima e 1 para a direita) com loops complexos
void moverCavalo() {
    int verticais = 2;
    int horizontais = 1;

    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < verticais; i++) {
        if (i == 1) continue;  // exemplo de uso de continue
        printf("Cima\n");
    }

    int j = 0;
    while (j < horizontais) {
        if (j > 1) break;  // exemplo de uso de break
        printf("Direita\n");
        j++;
    }
}

int main() {
    const int passosTorre = 5;
    const int passosBispo = 5;
    const int passosRainha = 8;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(passosTorre);

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(0, passosBispo);

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(passosRainha);

    // Movimento do Cavalo
    moverCavalo();

    return 0;
}
