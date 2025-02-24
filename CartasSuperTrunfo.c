#include <stdio.h>

int main() {

    //Variaveis

    //Variaveis da primeira carta
    char estado[3]; //repesentando um dos oito estados
    char codigo[10]; //identifiacar o código da carta
    char cidade [50]; //Nome da cidade
    int populacao; //Número de habitantes
    float area; //Quilômetros quadrados
    float pib; //Produto interno bruto da cidade
    int pturistico; //Quantidade de pontos turísticos
    float densidade; //Densidade populacional
    float pibp; //PIB per capita


    char estado2[3]; //repesentando um dos oito estados
    char codigo2[10]; //identifiacar o código da carta
    char cidade2 [50]; //Nome da cidade
    int populacao2; //Número de habitantes
    float area2; //Quilômetros quadrados
    float pib2; //Produto interno bruto da cidade
    int pturistico2; //Quantidade de pontos turísticos
    float densidade2; //Densidade populacional
    float pibp2; //PIB per capita
    //---------------------------------------------------------
 
  //Código

    printf("Estado: \n");
    scanf("%s", estado);

    printf("Código: \n");
    scanf("%s", codigo);

    printf("Cidade: \n");
    scanf("%s", cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área (km²): \n");
    scanf("%f", &area);

    printf("PIB (bilhões de reais): \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pturistico);
    
    densidade = (float)populacao / area;

    // Carta2 --------------------------------------------

    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Código: \n");
    scanf("%s", codigo2);

    printf("Cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área (km²): \n");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pturistico2);

    densidade = (float)populacao2 / area2;

    //-----------------------------------------------
    // resultado

    //Carta1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pturistico);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);

    //carta2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pturistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);

    return 0;
}

