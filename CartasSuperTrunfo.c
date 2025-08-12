#include <stdio.h>

int main(){

//Nesse momento eu fiz a declaração das variáveis, lembrando que tem as variáveis para a primeira e outra para a segunda carta. 
    char estado1, estado2;
    char CodCard1[10], CodCard2[10];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2, PointTurist1, PointTurist2;
    float area1, area2, pib1, pib2;

//Bloco de informações da primeira carta 
    printf("Digite uma letra de 'A' a 'H' para representar um estado: ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da sua carta contendo a letra que escolheu e um número de 01 a 04: ");
    scanf("%s", CodCard1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o valor da população que existe na cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &PointTurist1);

    printf("Digite o tamanho da área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

//Bloco de informações da segunda carta

    printf("Digite novamente uma letra de 'A' a 'H' para representar um estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite novamente o código da sua carta contendo a letra que escolheu e um número de 01 a 04: ");
    scanf("%s", CodCard2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade2);

    printf("Digite o valor da população que existe na cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &PointTurist2);

    printf("Digite o tamanho da área da segunda cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);

//Bloco de exibição das informações coletadas do usuario
    //Primeira Carta
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", CodCard1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", PointTurist1);

    printf("\n"); //esse printf foi somente para pular a linha e deixar no formato certo
    //Segunda Carta
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", CodCard2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", PointTurist2);


    return 0;

    
}