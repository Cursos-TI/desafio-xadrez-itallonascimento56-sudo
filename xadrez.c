#include <stdio.h>

int main() {

    // ================================
    // TORRE - usando FOR
    // Move 5 casas para a direita
    // ================================

    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }


    // ================================
    // BISPO - usando WHILE
    // Move 5 casas na diagonal (Cima e Direita)
    // ================================

    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\nMovimento do Bispo:\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }


    // ================================
    // RAINHA - usando DO-WHILE
    // Move 8 casas para a esquerda
    // ================================

    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\nMovimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);


    // ==================================================
    // CAVALO - usando LOOPS ANINHADOS (FOR + WHILE)
    // Move 2 casas para Baixo e 1 para Esquerda
    // ==================================================

    int movimentosVerticais = 2;   // duas casas para baixo
    int movimentosHorizontais = 1; // uma casa para esquerda

    printf("\nMovimento do Cavalo:\n");

    // Loop externo (FOR) controla o movimento vertical
    for (int i = 1; i <= movimentosVerticais; i++) {

        printf("Baixo\n");

        // Quando terminar as duas casas para baixo,
        // executa o movimento horizontal usando WHILE
        if (i == movimentosVerticais) {

            int contadorHorizontal = 1;

            while (contadorHorizontal <= movimentosHorizontais) {
                printf("Esquerda\n");
                contadorHorizontal++;
            }
        }
    }

    return 0;
}