#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre);

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(casasBispo);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casasRainha);

    printf("\n=== Movimento do Cavalo ===\n");
    moverCavalo();

    return 0;
}

/*
Função: moverTorre
Descrição:
  - Move a Torre para a direita, de forma recursiva.
  - Cada chamada representa o movimento de 1 casa.
*/
void moverTorre(int casas) {
    if (casas == 0)
        return; // Caso base: fim do movimento

    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

/*
Função: moverBispo
Descrição:
  - Move o Bispo na diagonal direita para cima.
  - Usa loops aninhados (obrigatório) e recursividade.
  - Loop externo -> vertical (Cima)
  - Loop interno -> horizontal (Direita)
*/
void moverBispo(int casas) {
    if (casas == 0)
        return; // Caso base

    for (int i = 0; i < 1; i++) { // Movimento vertical
        printf("Cima\n");

        for (int j = 0; j < 1; j++) { // Movimento horizontal
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // Recursão: próxima casa diagonal
}

/*
Função: moverRainha
Descrição:
  - Move a Rainha para a esquerda.
  - Usa recursividade pura (sem loops).
*/
void moverRainha(int casas) {
    if (casas == 0)
        return; // Caso base

    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

/*
Função: moverCavalo
Descrição:
  - Move o Cavalo em "L":
      2 casas para cima e 1 para a direita.
  - Usa loops aninhados e controle de fluxo (break/continue).
*/
void moverCavalo(void) {
    for (int i = 1; i <= 2; i++) { // Movimento vertical (Cima)
        printf("Cima\n");

        if (i < 2)
            continue; // Continua subindo até completar 2 casas

        // Quando chegar na 2ª casa, move 1 para a direita
        for (int j = 1; j <= 1; j++) {
            printf("Direita\n");
            break; // Sai após completar o movimento em L
        }
    }
}
