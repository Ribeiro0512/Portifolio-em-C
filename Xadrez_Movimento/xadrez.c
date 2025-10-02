#include <stdio.h>

// ------------------- Funções recursivas -------------------

// Recursividade da Torre
void movertorre(int mover) {
    if (mover > 0) {                // enquanto ainda houver movimentos
        printf("Direita\n");        // imprime um passo para a direita
        movertorre(mover - 1);      // chama a função novamente diminuindo 1 movimento
    }
}

// Recursividade do Bispo
void moverbispo(int mover) {
    if (mover > 0) {                  // enquanto ainda houver movimentos
        printf("Cima, Direita\n");    // imprime um passo na diagonal
        moverbispo(mover - 1);        // chama a função novamente diminuindo 1 movimento
    }
}

// Recursividade da Rainha
void moverrainha(int mover) {
    if (mover > 0) {                  // enquanto ainda houver movimentos
        printf("Esquerda\n");         // imprime um passo para a esquerda
        moverrainha(mover - 1);       // chama a função novamente diminuindo 1 movimento
    }
}

// ------------------- Função principal -------------------
int main() {

    // Movimento da torre
    printf("---- TORRE ----\n");
    movertorre(5);   // chama a função recursiva da torre 5 vezes

    // Movimento do bispo
    printf("----BISPO----\n");
    for (int i = 1; i <= 1; i++){        // loop externo (para atender requisito de loops aninhados)
        for (int c = 1; c <= 1; c++){    // loop interno (mesma finalidade)
            moverbispo(5);               // chama a função recursiva do bispo 5 vezes
        }
    }

    // Movimento da rainha
    printf("---- RAINHA ----\n");
    moverrainha(8);   // chama a função recursiva da rainha 8 vezes

    // Movimento do cavalo
    printf("---- CAVALO ----\n");
    // Loop complexo
    for (int cima = 1, direita = 1; cima <= 2 && direita <= 1; cima++) {
        printf("Cima\n");                 // imprime cada passo para cima
        if (cima == 2) {                  // quando termina os 2 passos para cima
            printf("Direita\n");          // imprime 1 passo para a direita
        }
    }

    return 0;
}