#include <stdio.h>

int main () {

    //variaveis carta 1
    char estado1; 
    char codigo1 [20], cidade1 [30];
    int populacao1, PontosTuristicos1;
    float area1, pib1;
    
    //variaveis carta 2
    char estado2;
    char codigo2 [20], cidade2 [30];
    int populacao2, PontosTuristicos2;
    float area2, pib2;
    
    //Leitura dos dados carta 1
    printf("\n");
    printf("===DADOS CARTA 1=== \n");
    printf("\n");
    printf("Digite seu estado (letra A a H): \n");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao1);
    
    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto (PIB): \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos1);

    //Operadores Matematicos para calcular a Densidade Populacional e o Pib per Capita:
    float DensidadePopulacional1 = (float)populacao1 / area1;
    float PibCapita1 = pib1 / (float)populacao1;

    //exibição dos dados da Carta 1
    printf("Estado: %c - Código: %s \n", estado1, codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área (em km²): %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais \n", PibCapita1);


        //Leitura dos dados carta 2
    printf("\n");
    printf("===DADOS CARTA 2=== \n");
    printf("\n");

    printf("Digite seu estado (letra A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a area da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto (PIB): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos2);

        //Operadores Matematicos para calcular a Densidade Populacional e o Pib per Capita:
    float DensidadePopulacional2 = (float)populacao2 / area2;
    float PibCapita2 = pib2 / (float)populacao2;

     //exibição dos dados da Carta 2
    printf("Estado: %c - Código: %s \n", estado2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área (em km²): %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n", PibCapita2);

    return 0;









}









}
