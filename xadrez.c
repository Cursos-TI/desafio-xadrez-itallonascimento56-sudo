#include <stdio.h>

/* =====================================================
   FUNÇÕES RECURSIVAS
   ===================================================== */

/* ---------------------------
   TORRE (Recursiva)
   Move para a Direita
   --------------------------- */
void moverTorre(int casas) {

    if (casas <= 0) {
        return; // condição de parada
    }

    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}


/* ---------------------------
   RAINHA (Recursiva)
   Move para a Esquerda
   --------------------------- */
void moverRainha(int casas) {

    if (casas <= 0) {
        return; // condição de parada
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}


/* ---------------------------
   BISPO (Recursivo + Loops Aninhados)
   Move na diagonal: Cima e Direita
   Loop externo -> vertical
   Loop interno -> horizontal
   --------------------------- */
void moverBispo(int casas) {

    if (casas <= 0) {
        return; // condição de parada
    }

    // Loop externo (vertical)
    for (int vertical = 1; vertical <= 1; vertical++) {

        printf("Cima\n");

        // Loop interno (horizontal)
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}


/* =====================================================
   FUNÇÃO PRINCIPAL
   ===================================================== */

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    /* =====================================================
       CAVALO - Loops Complexos
       Movimento em L:
       2 casas para Cima
       1 casa para Direita
       ===================================================== */

    printf("\nMovimento do Cavalo:\n");

    int movimentoVertical = 2;
    int movimentoHorizontal = 1;

    for (int i = 1; i <= movimentoVertical; i++) {

        if (i > movimentoVertical) {
            break; // segurança
        }

        printf("Cima\n");

        // Só executa o horizontal depois das duas casas verticais
        if (i == movimentoVertical) {

            int j = 1;

            while (j <= movimentoHorizontal) {

                if (j == 0) {
                    continue; // exemplo de controle de fluxo
                }

                printf("Direita\n");

                j++;

                if (j > movimentoHorizontal) {
                    break;
                }
            }
        }
    }

    return 0;
}