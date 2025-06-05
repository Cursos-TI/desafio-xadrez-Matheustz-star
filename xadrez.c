#include <stdio.h>

int main() {
    // Simulação da TORRE com for
    printf("Movimento da TORRE (5 casas para a direita):\n");

    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Simulação do BISPO com while
    printf("\nMovimento do BISPO (5 casas na diagonal Cima e Direita):\n");

    int passoBispo = 1;
    while (passoBispo <= 5) {
        printf("Cima Direita\n");
        passoBispo++;
    }

    // Simulação da RAINHA com do-while
    printf("\nMovimento da RAINHA (8 casas para a esquerda):\n");

    int passoRainha = 1;
    do {
        printf("Esquerda\n");
        passoRainha++;
    } while (passoRainha <= 8);

    return 0;
}