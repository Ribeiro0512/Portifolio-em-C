#include <stdio.h>

int main(){

//Nesse momento eu fiz a declaração das variáveis, lembrando que tem as variáveis para a primeira e outra para a segunda carta. 
    char estado1, estado2;
    char CodCard1[10], CodCard2[10];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2, PointTurist1, PointTurist2;
    float area1, area2, pib1, pib2;
    float densidadeP1, densidadeP2, PibPC1, PibPC2;
    float superpoder1, superpoder2;

//Bloco de informações da primeira carta 
    printf("Digite uma letra de 'A' a 'H' para representar um estado: ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da sua carta contendo a letra que escolheu e um número de 01 a 04: ");
    scanf("%s", CodCard1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o valor da população que existe na cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &PointTurist1);

    printf("Digite o tamanho da área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    //Cálculos da primeira carta
    densidadeP1 = (float) populacao1 / area1;
    PibPC1 = (float) pib1 / populacao1;
    superpoder1 = (float) populacao1 + PointTurist1 + area1 + pib1 + PibPC1 + (1 / densidadeP1);

//Bloco de informações da segunda carta
    printf("Digite novamente uma letra de 'A' a 'H' para representar um estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite novamente o código da sua carta contendo a letra que escolheu e um número de 01 a 04: ");
    scanf("%s", CodCard2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade2);

    printf("Digite o valor da população que existe na cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &PointTurist2);

    printf("Digite o tamanho da área da segunda cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);

    //Cálculos da segunda carta
    densidadeP2 = (float) populacao2 / area2;
    PibPC2 = (float) pib2 / populacao2;
    superpoder2 = (float) populacao2 + PointTurist2 + area2 + pib2 + PibPC2 + (1 / densidadeP2);

//Bloco de exibição das informações coletadas do usuario
    //Primeira Carta
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", CodCard1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", PointTurist1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeP1);
    printf("PIB per Capita: %.2f reais\n", PibPC1);

    printf("\n"); //esse printf foi somente para pular a linha e deixar no formato certo
    //Segunda Carta
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", CodCard2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", PointTurist2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeP2);
    printf("PIB per Capita: %.2f reais\n", PibPC2);

    printf("\n");
    //Bloco de comparação das cartas
    printf("Comparação de cartas:\n");
    printf("População: Carta 1 venceu %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu %d\n", pib1 > pib2 );
    printf("Pontos Turísticos: Carta 1 venceu %d\n", PointTurist1 > PointTurist2);
    printf("Densidade Populacional: Carta 1 venceu %d\n", densidadeP1 < densidadeP2); 
    printf("PIB per Capita: Carta 1 venceu %d\n", PibPC1 > PibPC2);
    printf("Super Poder: Carta 1 venceu %d\n", superpoder1 > superpoder2);
    
    return 0;

    
}