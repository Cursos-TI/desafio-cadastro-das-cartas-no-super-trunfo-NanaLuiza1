#include <stdio.h>

int main() {

    //Variaveis

    //Variaveis da primeira carta
    char estado[3]; //repesentando um dos oito estados
    char codigo[10]; //identifiacar o código da carta
    char cidade [50]; //Nome da cidade
    int populacao; //Número de abitantes
    float area; //Quilômetros quadrados
    float pib; //Produto interno bruto da cidade
    int pturistico; //Quantidade de pontos turísticos

    //Variaveis da segunda carta
    char estado2[3];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pturistico2;

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

    printf("Aréa: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pturistico);

    //-----------------------------------------------
    //Segunda carta
    printf("Carta 2 \n");

    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Código: \n");
    scanf("%s", codigo2);

    printf("Cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Aréa: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pturistico2);

    //------------------------------------------------------
    // resultado

    //Carta1
    printf("Carta 1 \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turísticos: %d \n", pturistico);
 
    //---------------------------------------------------------------
 
    //Carta2
    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de pontos turísticos: %d \n", pturistico2);


    return 0;
}
