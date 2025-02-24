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

    // Cálculo correto da densidade
    densidade = populacao / area;  

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

    return 0;
}

