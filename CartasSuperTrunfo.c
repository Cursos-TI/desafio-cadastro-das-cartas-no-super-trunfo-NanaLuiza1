#include <stdio.h>

int main() {

    //VARIAVEIS
    char estado[3],     estado2[3];  //Representando um dos 8 estados
    char codigo[10],    codigo2[10]; //Indentificar o código da carta
    char cidade[50],    cidade2[50]; //Cidade da carta
    int populacao,      populacao2;  //Número de habitantes
    double area,        area2;       //Quilômetros quadrados
    double pib,         pib2;        //Produto interno bruto da cidade
    int pturistico,     pturistico2; //Pontos tuísticos
    double densidade,   densidade2;  //Densidade populacional
    double pibp,        pibp2;       //PIB per capita
    //------------------------------------------------------------------------------

    // CARTA 1
    printf("Estado: ");
    scanf("%2s", estado);
    //-----------------------------------------
    printf("Código: ");
    scanf("%s", codigo);
    //-----------------------------------------
    printf("Cidade: ");
    scanf(" %[^\n]", cidade);
    //-----------------------------------------
    printf("População: ");
    scanf("%d", &populacao);
    //-----------------------------------------
    printf("Área (km²): ");
    scanf("%lf", &area);
    //-----------------------------------------
    printf("PIB (bilhões): ");
    scanf("%lf", &pib);
    //-----------------------------------------
    printf("Número de pontos turísticos: ");
    scanf("%d", &pturistico);

    // Cálculo corrigido
    densidade = (area > 0) ? (populacao / area) : 0;
    pibp = (populacao > 0) ? ((pib * 1e9) / populacao) : 0; // CONVERSÃO DO PIB PARA REAIS



    // CARTA 2
    printf("Estado: ");
    scanf("%2s", estado2);
    //-----------------------------------------
    printf("Código: ");
    scanf("%s", codigo2);
    //-----------------------------------------
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    //-----------------------------------------
    printf("População: ");
    scanf("%d", &populacao2);
    //-----------------------------------------
    printf("Área (km²): ");
    scanf("%lf", &area2);
    //-----------------------------------------
    printf("PIB (bilhões): ");
    scanf("%lf", &pib2);
    //-----------------------------------------
    printf("Número de pontos turísticos: ");
    scanf("%d", &pturistico2);

    densidade2 = (area2 > 0) ? (populacao2 / area2) : 0;
    pibp2 = (populacao2 > 0) ? ((pib2 * 1e9) / populacao2) : 0;


    
    // RESULTADOS
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2lf km²\n", area);
    printf("PIB: R$ %.2lf bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", pturistico);
    printf("Densidade populacional: %.2lf hab/km²\n", densidade);
    printf("PIB per capita: R$ %.2lf\n", pibp);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: R$ %.2lf bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pturistico2);
    printf("Densidade populacional: %.2lf hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2lf\n", pibp2);

    return 0;
}
