#include <stdio.h>

int main (){
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomecidade1[100], nomecidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    //primeira carta 
    printf("Carta 1:\n");
    printf("Digite a inicial do seu estado: \n");
    scanf(" %c", &estado1); //lê a inicial do estado
    getchar(); // limpa o buffer do \n

    printf("Digite o código da carta(ex:A01, B03): \n");
    scanf("%s", &codigo1); //lê o código da carta 

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade1); //lê o nome da cidade 

    printf("Digite a população atual: \n");
    scanf("%d", &populacao1);// lê a população

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1); //lê a área

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib1); //lê o pib 

    printf("Digite a quantidade de pontos turísticos do estado: \n");
    scanf("%d", &pontosturisticos1); // lê os pontos turísticos

    //segunda carta
    printf("Carta 2:\n");
    printf("Digite a inicial do seu estado: \n");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o código da carta(ex:A01, B03): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade2);
    
    printf("Digite a população atual: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos do estado: \n");
    scanf("%d", &pontosturisticos2);
    
    //exibindo a carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

    //exibindo a segunda carta 
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    



}