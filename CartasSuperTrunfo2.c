#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// nível aventureiro
int main() {
     
    //declaração de varíaveis
    //variáveis inicializadas com zero caso usuario não digite valor e mostre valores aleatórios de alguma memória
    char estado1 [2] = "A";
    char codigo1 [4] = "A01" ;
    char nomeDaCidade1 [21] = "Sao Paulo";
    char estado2 [2] = "B";
    char codigo2 [4] = "B02" ;
    char nomeDaCidade2 [21] = "Rio de Janeiro";
    int populacao1 = 0;
    int populacao2 = 0;
    float area1 = 0;
    float area2 = 0;
    float pib1 = 0;
    float pib2 = 0;
    int numeroDePontosTuristicos1 = 0;
    int numeroDePontosTuristicos2 = 0;
    float densidadePopulacional1 = 0;
    float pibPerCapita1 = 0;
    float densidadePopulacional2 = 0;
    float pibPerCapita2 = 0;
    
    //entrada de dados para carta 1
    printf("Cadastro da carta 1!\n");//
    printf("Estado: %s\n", estado1);//
    printf("Código: %s\n", codigo1);//
    printf("Nome da cidade: %s\n", nomeDaCidade1);//
    printf("Tamanho da população em inteiros: \n");
    scanf("%d", &populacao1);
    printf("Tamanho da área: \n");
    scanf("%f", &area1);
    printf("Tamanho do PIB: \n");
    scanf("%f", &pib1);
    printf("Numero de pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos1);
    // manipulando entradas e armazenando resultado em variável 
    densidadePopulacional1 = populacao1/area1;
    pibPerCapita1 = (pib1/ (float)populacao1) *1000000000;
    
     //entrada de dados para carta 2
     printf("Cadastro da carta 2!\n");
     printf("Estado: %s\n", estado2);//
     printf("Código: %s\n", codigo2);//
     printf("Nome da cidade: %s\n", nomeDaCidade2);//
     printf("Tamanho da população em inteiros: \n");
     scanf("%d", &populacao2);
     printf("Tamanho da área: \n");
     scanf("%f", &area2);
     printf("Tamanho do PIB: \n");
     scanf("%f", &pib2);
     printf("Numero de pontos turísticos: \n");
     scanf("%d", &numeroDePontosTuristicos2);
     // manipulando entradas e armazenando resultado em variável 
    densidadePopulacional2 = populacao2/area2;
    pibPerCapita2 = (pib2/ (float)populacao2) *1e9;

    //saída de dados da carta 1 para o terminal
    printf("\n\n\n");
    printf("\tCarta 1!\n");//
    printf("Estado: %s\n", estado1);//
    printf("Código: %s\n", codigo1);//
    printf("Nome da cidade: %s\n", nomeDaCidade1);//
    printf("Tamanho da população: %d hab\n", populacao1);
    printf("Tamanho da área: %.2fkm² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d \n", numeroDePontosTuristicos1);
    printf("Densidade populacional: %.2fhab/km² \n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais \n", pibPerCapita1);
    
    //saída de dados da carta 2 para o terminal
    printf("\n");
    printf("\tCarta 2!\n");//
    printf("Estado: %s\n", estado2);//
    printf("Código: %s\n", codigo2);//
    printf("Nome da cidade: %s\n", nomeDaCidade2);//
    printf("Tamanho da população: %d hab\n", populacao2);
    printf("Tamanho da área: %.2fkm² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d \n", numeroDePontosTuristicos2);
    printf("Densidade populacional: %.2fhab/km² \n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais \n", pibPerCapita2);
    printf("\n");

    return 0;
}