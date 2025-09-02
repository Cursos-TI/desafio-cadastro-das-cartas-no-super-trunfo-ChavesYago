#include <stdio.h>

int main(){

    printf("Desafio Super Trunfo em C\n");

    char estado1[10], estado2[10];
    // O estado referesse a uma letra entre 'A' a 'H' representando os 8 Estados
    char codigodacarta1[10], codigodacarta2[10];
    // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nomedacidade1[20], nomedacidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;

    //Entrada de dados carta 01
    printf("Qual Estado: \n");
    scanf("%s", estado1);

    printf("Qual o código da Carta: \n");
    scanf("%s", codigodacarta1);

    printf("Qual o nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Qual a área:\n");
    scanf("%f", &area1);

    printf("Qual o PIB \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = (float) populacao1 / area1; //Divide a população da cidade pela sua área
    pibpercapita1 = (float) pib1 / populacao1; //Divide o PIB da cidade pela sua população 
    
    printf("\nReponda para a segunda carta\n");

    //Entrada de dados carta 02 
    printf("Qual Estado: \n");
    scanf("%s", estado2);

    printf("Qual o código da Carta: \n");
    scanf("%s", codigodacarta2);

    printf("Qual o nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Qual a área:\n");
    scanf("%f", &area2);

    printf("Qual o PIB \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = (float) populacao2 / area2; //Divide a população da cidade pela sua área
    pibpercapita2 = (float) pib2 / populacao2; //Divide o PIB da cidade pela sua população 


    printf("\nCARTA 01\n");
    printf("Estado: %s\n", estado1);
    printf("Carta: %s%s\n", estado1, codigodacarta1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.4f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\nCARTA 02\n");
    printf("Estado: %s\n", estado2);
    printf("Carta: %s%s\n", estado2, codigodacarta2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.4f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    
    
return 0;







}

