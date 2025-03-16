#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// nível mestre

int main() {
     
    //declaração de varíaveis
    //variáveis inicializadas com zero caso usuario não digite valor e mostre valores aleatórios de alguma memória
    char estado1 [2] = "A";
    char codigo1 [4] = "A01" ;
    char nomeDaCidade1 [21] = "Sao Paulo";
    char estado2 [2] = "B";
    char codigo2 [4] = "B02" ;
    char nomeDaCidade2 [21] = "Rio de Janeiro";
    unsigned long int populacao1 = 0;
    unsigned long int populacao2 = 0;
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
    float superPoder1 = 0;
    float superPoder2 = 0;
    
    //entrada de dados para carta 1
    printf("Cadastro da carta 1!\n");//
    printf("Estado: %s\n", estado1);//
    printf("Código: %s\n", codigo1);//
    printf("Nome da cidade: %s\n", nomeDaCidade1);//
    printf("Tamanho da população em inteiros: \n");
    scanf("%lu", &populacao1);
    printf("Tamanho da área: \n");
    scanf("%f", &area1);
    printf("Tamanho do PIB: \n");
    scanf("%f", &pib1);
    printf("Numero de pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos1);
    // manipulando entradas e armazenando resultado em variável 
    densidadePopulacional1 = populacao1/area1;
    pibPerCapita1 = (pib1/ populacao1) *1000000000;
    
     //entrada de dados para carta 2
     printf("\n");
     printf("Cadastro da carta 2!\n");
     printf("Estado: %s\n", estado2);//
     printf("Código: %s\n", codigo2);//
     printf("Nome da cidade: %s\n", nomeDaCidade2);//
     printf("Tamanho da população em inteiros: \n");
     scanf("%lu", &populacao2);
     printf("Tamanho da área: \n");
     scanf("%f", &area2);
     printf("Tamanho do PIB: \n");
     scanf("%f", &pib2);
     printf("Numero de pontos turísticos: \n");
     scanf("%d", &numeroDePontosTuristicos2);
     // manipulando entradas e armazenando resultado em variável 
    densidadePopulacional2 = populacao2/area2;
    pibPerCapita2 = (pib2/ populacao2) *1e9;

    //realizada a soma de todos os atributos para mensurar super poder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)numeroDePontosTuristicos1 + pibPerCapita1 + (1/densidadePopulacional1);
    superPoder2 = ((float)populacao2) + area2 + pib2 + ((float)numeroDePontosTuristicos2) + pibPerCapita2 + ((1/densidadePopulacional2));


    //saída de dados da carta 1 para o terminal
    printf("\n\n\n");
    printf("\tCarta 1!\n");//
    printf("Estado: %s\n", estado1);//
    printf("Código: %s\n", codigo1);//
    printf("Nome da cidade: %s\n", nomeDaCidade1);//
    printf("Tamanho da população: %lu hab\n", populacao1);
    printf("Tamanho da área: %.2fkm² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d \n", numeroDePontosTuristicos1);
    printf("Densidade populacional: %.2fhab/km² \n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais \n", pibPerCapita1);
    printf("Super Poder: %.2f \n", superPoder1);
    
    //saída de dados da carta 2 para o terminal
    printf("\n");
    printf("\tCarta 2!\n");//
    printf("Estado: %s\n", estado2);//
    printf("Código: %s\n", codigo2);//
    printf("Nome da cidade: %s\n", nomeDaCidade2);//
    printf("Tamanho da população: %lu hab\n", populacao2);
    printf("Tamanho da área: %.2fkm² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d \n", numeroDePontosTuristicos2);
    printf("Densidade populacional: %.2fhab/km² \n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais \n", pibPerCapita2);
    printf("Super Poder: %.2f \n", superPoder2);
   
    //realizada a comparação entre atributos e imprime a carta vencedora no terminal
    //realizado lógica sem o uso de if ou otros recursos pois não ficou claro se poderiamos utilizar 
    //devido a conversão de unsigned long int para float o super poder perdeu a precisão das casas decimais
    printf("\n\n\n");
    printf("\tComparação de Cartas!\n");//
    printf("Tamanho da opulação: A carta %d venceu (%d)!\n", 2-(populacao1>populacao2), populacao1 > populacao2 );
    printf("Tamanho da área: A carta %d venceu (%d)!\n", 2-(area1>area2), area1 > area2 );
    printf("PIB: A carta %d venceu (%d)!\n", 2-(pib1>pib2), pib1 > pib2 );
    printf("Número de pontos turísticos: A carta %d venceu (%d)!\n", 2-(numeroDePontosTuristicos1>numeroDePontosTuristicos2), numeroDePontosTuristicos1 > numeroDePontosTuristicos2 );
    printf("Densidade populacional: A carta %d venceu (%d)!\n", 2-(densidadePopulacional1<densidadePopulacional2), densidadePopulacional1 < densidadePopulacional2 );
    printf("PIB per capita: A carta %d venceu (%d)!\n", 2-(pibPerCapita1>pibPerCapita2), pibPerCapita1 > pibPerCapita2 );
    printf("SUPER PODER: A carta %d venceu (%d)!\n", 2-(superPoder1>superPoder2), superPoder1 > superPoder2 );

    return 0;
}