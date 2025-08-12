#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Eduardo Guilherme

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1[10];
    char estado2[10];
    char codigoestado1[50];
    char codigoestado2[50];
    char nomecidade1[50];
    char nomecidade2[50];
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Insira a opção do estado - carta 1: \n");
    scanf("%s", &estado1);

    printf("Insira o código do estado -  carta 1: \n");
    scanf("%s", &codigoestado1);

    printf("Insira o nome da cidade - carta 1: \n");
    scanf("%s", &nomecidade1);

    printf("Insira o número da população - carta 1: \n");
    scanf("%d", &populacao1);

    printf("Insira a quantidade de pontos turisticos - carta 1: \n");
    scanf("%d", &pontosturisticos1);

    printf("Insira a área da cidade - carta 1: \n");
    scanf("%f", &area1);

    printf("Insira o valor do PIB - carta 1: \n");
    scanf("%f", &pib1);

    printf("         Carta 1     \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", codigoestado1);
    printf("Cidade: %s \n", nomecidade1);
    printf("População: %d habitantes \n", populacao1);
    printf("Pontos turisticos: %d \n", pontosturisticos1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n\n", pib1);

    
    printf("Inserir a opção do estado - carta 2: \n");
    scanf("%s", &estado2);

    printf("Insira o código do estado - carta 2: \n");
    scanf("%s", &codigoestado2);

    printf("Insira o nome da cidade - carta 2: \n");
    scanf("%s", &nomecidade2);

    printf("Insira o número da população - carta 2: \n");
    scanf("%d", &populacao2);

    printf("Insira a quantidade de pontos turisticos - carta 2: \n");
    scanf("%d", &pontosturisticos2);

    printf("Insira a área da cidade - carta 2: \n");
    scanf("%f", &area2);

    printf("Insira o valor do PIB - carta 2: \n");
    scanf("%f", &pib2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    
    printf("         Carta 2     \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigoestado2);
    printf("Cidade: %s \n", nomecidade2);
    printf("População: %d habitantes \n", populacao2);
    printf("Pontos turisticos: %d \n", pontosturisticos2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);

    return 0;
}
