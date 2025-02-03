#include <stdio.h>

int main() {

    //Variaveis
    char codigo[10], estado[50], cidade[50];
    int turismo;
    float populacao, area, densidadep, pib, percapita;
    //---------------------------------------------------------
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite a cidade: \n");
    scanf("%s", cidade);

    printf("Digite o número da população: \n");
    scanf("%f", &populacao);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &area);

    printf("Digite a densidade populacional: \n");
    scanf("%f", &densidadep);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o PIB per capita: \n");
    scanf("%f", &percapita);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turismo);

    // resultado

    printf("Código: %s \n", codigo);
    printf("Estado: %s \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("População: %f \n", populacao);
    printf("Área: %f \n", area);
    printf("Densidade populacional: %f \n", densidadep);
    printf("PIB: %f \n", pib);
    printf("PIB per capita: %f \n", percapita);
    printf("Número de pontos turísticos: %d \n", turismo);
 



    return 0;
}
