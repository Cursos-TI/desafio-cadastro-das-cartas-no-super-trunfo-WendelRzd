#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}


#include <stdio.h>

int main(){


    char estado ;
    char codigo[04];
    char cidade[15];
    float area;
    float pib;
    int populacao;
    int pturisticos;
    float pibpercapta;


    printf("Digite o Estado:\n");
    scanf("%c", &estado);

    printf("Digite o Codigo: \n");
    scanf("%c", &codigo);

    printf("Digite a Cidade: \n");
    scanf("%c", &cidade);

    printf("Digite a Area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite o Ponto Turistico: \n");
    scanf("%d", &pturisticos);
    
    printf("Digite o Ponto Turistico: \n");
    scanf("%f", &pibpercapta);

    printf("Estado: %c\n" "Codigo: %c\n" "Cidade: %s\n" "Area: %f \n" "PIB: %f \n" "População: %d \n" "Ponto Turistico: %d \n" "Pib Percapta: %.3f\n", estado, codigo, cidade, area, pib, populacao, pturisticos, pibpercapta);


    //Variaveis carta 2
    int Pturisticos2;
    int População2;
    char Estado2;
    char codigo2[05];
    char cidade2[15];
    float area2;
    float pib2;

    //Leitura da carta 2
    printf("Informe os dados da Carta 2:\n");
    printf("Digite o Estado:\n");
    scanf("%c", &Estado2);

    printf("Digite a Cidade:\n");
    scanf("%c", &cidade2);

    printf("Digite a População:\n");
    scanf("%d", &População2);

    printf("Digite a Area:\n");
    scanf("%f", &area2);

    printf("Digite o Ponto Turistico:\n");
    scanf("%d", &Pturisticos2);

    printf("Digiteb o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o código da carta:\n");
    scanf("%c", &codigo2);
 

    //Exibição carta 2
    printf("codigo %c \n", &codigo2);
    printf("Cidade: %s\n", &cidade2);
    printf("Estado: %c \n", &Estado2);
    printf("Ponto Turistico: %d \n", &Pturisticos2);
    printf("Area: %f \n", &area2);
    printf("População: %d \n", &População2);
    printf("PIB: %f \n", &pib2);
   




    
    return 0;


}
