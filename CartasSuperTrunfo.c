#include <stdio.h>

int main() {

    //VARIAVEIS
    char estado[3],     estado2[3];           //Representando um dos 8 estados
    char codigo[10],    codigo2[10];          //Indentificar o código da carta
    char cidade[50],    cidade2[50];          //Cidade da carta
    unsigned long int populacao, populacao2;  //Número de habitantes
    double area,        area2;                //Quilômetros quadrados
    double pib,         pib2;                 //Produto interno bruto da cidade
    int pturistico,     pturistico2;          //Pontos tuísticos
    double densidade,   densidade2;           //Densidade populacional
    double pibp,        pibp2;                //PIB per capita

    double inverso_densidade, inverso_densidade2; //Inverso da densidade
    float SuperPoder1, SuperPoder2; //Super Poder das cartas
    int resultado; //Resultado final
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
    scanf("%lu", &populacao);
    //-----------------------------------------
    printf("Área (km²): ");
    scanf("%lf", &area);
    //-----------------------------------------
    printf("PIB (bilhões): ");
    scanf("%lf", &pib);
    //-----------------------------------------
    printf("Número de pontos turísticos: ");
    scanf("%d", &pturistico);


    // Cálculo de densidade, PIB per capita e inverso da densidade
    densidade = (area > 0) ? (populacao / area) : 0;
    pibp = (populacao > 0) ? ((pib * 1e6) / populacao) : 0; 
    inverso_densidade = (densidade > 0) ? (1.0 / densidade) : 0;



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
    scanf("%lu", &populacao2); 
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
    pibp2 = (populacao2 > 0) ? ((pib2 * 1e6) / populacao2) : 0; 
    inverso_densidade2 = (densidade2 > 0) ? (1.0 / densidade2) : 0;


    //Cálculo de super poder
    SuperPoder1 = (float)populacao + (float)area + (float)pib + (float)pturistico + (float)pibp + (float)inverso_densidade;
    SuperPoder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pturistico2 + (float)pibp2 + (float)inverso_densidade2;

    //Carta vencedora
    resultado = (SuperPoder1 > SuperPoder2); // Se for 1, a Carta 1 vence

    
    // RESULTADOS
    //CARTA 1 
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
    printf("Super poder: %.2f\n", SuperPoder1);

    //CARTA 2 
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
    printf("Super poder: %.2f\n", SuperPoder2);

     //-------------------------------------------------------------------
     //Comparação de cartas
     printf("\n=== Comparação de cartas ===\n"); //Fazendo comparação utilizando if e else

     if (populacao > populacao2){
        printf("População: Carta 1 vence! \n");
     }else {
        printf("População: Carta 2 vence! \n");
     }
     if (area > area2){
        printf("Área: Carta 1 vence! \n");
     }else {
        printf("Área: Carta 2 vence! \n");
     }
     if (pib > pib2){
        printf("PIB: Carta 1 vence! \n");
     }else {
        printf("PIB: Carta 2 vence! \n");
     }
     if (pibp > pibp2){
        printf("PIB per capita: Carta 1 vence! \n");
     }else {
        printf("PIB per capita: Carta 2 vence! \n");
     }
     if (densidade > densidade2){
        printf("Densidade populacional: Carta 1 vence! \n");
     }else {
        printf("Densidade populacional: Carta 2 vence! \n");
     }
     if (pturistico > pturistico2){
        printf("Número de pontos turísticos: Carta 1 vence! \n");
     }else {
        printf("Número de pontos turísticos: Carta 2 vence! \n");
     }
     if (SuperPoder1 > SuperPoder2){
        printf("Super poder: Carta 1 vence! \n");
     }else {
        printf("Super poder: Carta 2 vence! \n");
     }
     
     //-------------------------------------------------------------------
     //Resultado final 
     printf("\n=== Resultado final ===\n");

     printf("Carta 1 - %s (%s): %.2f \n", cidade, estado, SuperPoder1);
     printf("Carta 2 - %s (%s): %.2f \n", cidade2, estado2, SuperPoder2);

     if (SuperPoder1 > SuperPoder2){ //Definindo o vencedor
        printf(" A carta 1 é a vencedora!");
     } else {
        printf("A carta 2 é a vencedora!");
     }

    return 0;
}