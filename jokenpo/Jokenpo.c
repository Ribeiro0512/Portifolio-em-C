#include <stdio.h>   // Biblioteca padrão de entrada e saída (printf, scanf, etc.)
#include <stdlib.h>  // Biblioteca padrão do C (rand, srand, etc.)
#include <time.h>    // Biblioteca para trabalhar com tempo (usada no srand)

int main() {
    int escolhaJogador, escolhaComputador;
    
    srand(time(0));


    // Exibe o menu inicial do jogo
    printf("===============\n");
    printf("JOGO DE JOKENPÔ\n");
    printf("===============\n");
    printf("Escolha uma opção\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);
    printf("===============\n");

    // Gera a escolha do computador de forma aleatória entre 1 e 3
    escolhaComputador = rand() % 3 + 1;

    // Exibe o que o jogador escolheu
    switch (escolhaJogador) {
        case 1:
            printf("Jogador: Pedra | ");
            break;
        case 2:
            printf("Jogador: Papel | ");
            break;
        case 3:
            printf("Jogador: Tesoura | ");
            break;
        default:
            printf("Opção inválida "); // Caso o jogador digite algo fora de 1 a 3
            return 0; // Encerra o jogo
    }

    // Exibe a jogada do computador
    switch (escolhaComputador) {
        case 1:
            printf("Computador: Pedra\n");
            break;
        case 2:
            printf("Computador: Papel\n");
            break;
        case 3:
            printf("Computador: Tesoura\n"); 
            break;
    }

    // Verifica se houve empate
    if (escolhaComputador == escolhaJogador) {
        printf("=====================\n");
        printf("=== JOGO EMPATOU! ===\n");
        printf("=====================\n");
    } 
    // Verifica as condições de vitória do jogador
    else if ( (escolhaJogador == 1 && escolhaComputador == 3) || 
              (escolhaJogador == 2 && escolhaComputador == 1) || 
              (escolhaJogador == 3 && escolhaComputador == 2)) { 
        printf("==============================\n");
        printf("=== PARABÉNS, VOCÊ GANHOU! ===\n");
        printf("==============================\n");
    } 
    // Se não for empate nem vitória, o jogador perdeu
    else {
        printf("===================\n");
        printf("=== VOCÊ PERDEU ===\n");
        printf("===================\n");
    }

    return 0; 
}