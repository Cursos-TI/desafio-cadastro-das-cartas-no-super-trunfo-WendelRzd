#include <stdio.h>

int main(){

    //Variaveis carta 1
    char Estado[50];
    char cidade[15];
    int Populacao;
    float area;
    int pturisticos;
    float pib;
    char codigo[04];

    //Variaveis carta 2
    char Estado2[50];
    char cidade2[15];
    int Populacao2;
    float area2;
    int Pturisticos2;
    float pib2;
    char codigo2[05];



    //Leitura da carta 1
    printf("Estado:");
    scanf("%s", Estado);

    printf("Cidade:");
    scanf("%s", cidade);

    printf("População:");
    scanf("%d", &Populacao);

    printf("Area:");
    scanf("%f", &area);
 
    printf("Ponto Turistico:");
    scanf("%d", &pturisticos);

    printf("PIB:");
    scanf("%f", &pib);

    printf("Codigo da Carta:");
    scanf("%s", codigo);

    float densidadepopulacional = (populacao/area);
    float pippercapita = (pib/area);

//Exibição carta 1
    printf("Estado: %s \n", Estado);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", Populacao);
    printf("Area: %f \n", area);
    printf("Ponto Turistico: %d \n", pturisticos);
    printf("PIB: %f \n", pib);
    printf("Código %s \n", codigo);

 


    //Leitura da carta 2
    printf("Estado2:");
    scanf("%s", Estado2);

    printf("Cidade2:");
    scanf("%s", cidade2);

    printf("Populacao2:\n");
    scanf("%d", &Populacao2);

    printf("Area2:");
    scanf("%f", &area2);

    printf("Ponto Turistico2:");
    scanf("%d", &Pturisticos2);

    printf("PIB2:");
    scanf("%f", &pib2);

    printf("codigo da carta2:");
    scanf("%s", codigo2);

    float densidadepopulacional2 = (populacao2/area2);
    float pippercapita2 = (pib2/area2);

    
//Exibição carta 2
    printf("Estado: %s \n", Estado2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %d \n", Populacao2);
    printf("Area: %f \n", area2);
    printf("Ponto Turistico: %d \n", Pturisticos2);
    printf("PIB: %f \n", pib2);
    printf("codigo %s \n", codigo2);

    return 0;
}
