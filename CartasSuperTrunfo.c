#include <stdio.h>

int main (){
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomecidade1[100], nomecidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    //primeira carta 
    printf("Carta 1:\n");
    printf("Digite a inicial do seu estado: \n");
    scanf(" %c", &estado1); //lê a inicial do estado

    printf("Digite o código da carta(ex:A01, B03): \n");
    scanf("%s", codigo1); //lê o código da carta 

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade1); //lê o nome da cidade 

    printf("Digite a população atual: \n");
    scanf("%lu", &populacao1);// lê a população

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1); //lê a área

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib1); //lê o pib 

    printf("Digite a quantidade de pontos turísticos do estado: \n");
    scanf("%d", &pontosturisticos1); // lê os pontos turísticos

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0 / densidade1);

    //segunda carta
    printf("Carta 2:\n");
    printf("Digite a inicial do seu estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta(ex:A01, B03): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomecidade2);
    
    printf("Digite a população atual: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos do estado: \n");
    scanf("%d", &pontosturisticos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0 / densidade2);
    
    //exibindo a carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);

    //exibindo a segunda carta 
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    // comparando atributo por atributo

    if (populacao1 > populacao2){
        printf("População: Carta 1 venceu! \n");
    }else {
        printf("População: Carta 2 venceu! \n");
    }

    if (area1 > area2){
        printf("Área: Carta 1 venceu! \n");
    }else {
        printf("Área: Carta 2 venceu! \n");
    }
    
    if (pib1 > pib2){
        printf("Pib: Carta 1 venceu! \n");
    }else {
        printf("Pib: Carta 2 venceu! \n");
    }
    
    if (pontosturisticos1 > pontosturisticos2){
        printf("Pontos Turísticos: Carta 1 venceu! \n");
    }else {
        printf("Pontos Turísticos: Carta 2 venceu! \n");
    }

    if (pibpercapita1 > pibpercapita2){
        printf("PIB per capta: Carta 1 venceu! \n");
    }else {
        printf("PIB per capta: Carta 2 venceu! \n");
    }

    if (densidade1 < densidade2){
        printf("Densidade Populacional: Carta 1 venceu! \n");
    }else {
        printf("Densidade Populacional: Carta 2 venceu! \n");
    }

    if (superpoder1 > superpoder2){
        printf("Super Poder: Carta 1 venceu! \n");
    }else {
        printf("Super Poder: Carta 2 venceu! \n");
    }

    //Comparação única
    printf("Carta 1: %s = %u \n", nomecidade1, populacao1);
    printf("Carta 2: %s = %u \n", nomecidade2, populacao2);
    
    if (populacao1 > populacao2){
        printf("Carta 1 venceu! \n");
    }else if (populacao1 < populacao2) {
        printf("Carta 2 venceu! \n");
    } else {
        printf("Empate!");
    }

}
