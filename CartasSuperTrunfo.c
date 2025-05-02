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

    char estado; // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo_carta[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nome_cidade [20]; // O nome da cidade
    int populacao; // O número de habitantes da cidade
    float area; // A área da cidade em quilômetros quadrados
    float pib; //O Produto Interno Bruto da cidade
    int n_pontos_turisticos; // A quantidade de pontos turísticos na cidade
    float densidade_populacional; //divide a população da cidade pela área, quantidade por km²
    float pib_percapita; //Riqueza em média por pessoa na cidade, divide o pib pela população
    
    char estado2; // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo_carta2[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nome_cidade2 [20]; // O nome da cidade
    int populacao2; // O número de habitantes da cidade
    float area2; // A área da cidade em quilômetros quadrados
    float pib2; //O Produto Interno Bruto da cidade
    int n_pontos_turisticos2; // A quantidade de pontos turísticos na cidade
    float densidade_populacional2; //divide a população da cidade pela área, quantidade por km²
    float pib_percapita2; //Riqueza em média por pessoa na cidade, divide o pib pela população

    /*
        printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

        %d: Imprime um inteiro no formato decimal.
        %i: Equivalente a %d.
        %f: Imprime um número de ponto flutuante no formato padrão.
        %e: Imprime um número de ponto flutuante na notação científica.
        %c: Imprime um único caractere.
        %s: Imprime uma cadeia (string) de caracteres.
    */

    printf("Cadastro da Carta 1:\n");

    printf("Digite a letra do Estado (A a H): ");
    scanf(" %c", &estado);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf(" %s", codigo_carta);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nome_cidade); 

    printf("Digite a População: ");
    scanf("%d", &populacao);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &n_pontos_turisticos);

        printf("\n\nCadastro da Carta 2:\n");

    printf("Digite a letra do Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf(" %s", codigo_carta2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nome_cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &n_pontos_turisticos2);

  // Exibição das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", n_pontos_turisticos);
    printf("Densidade populacinal %f hab/km²\n", densidade_populacional = populacao/area);
    printf("PIB per Capita: %.2f reais\n", pib_percapita = (float)pib/populacao);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", n_pontos_turisticos2);
    printf("Densidade populacinal %f hab/km²\n", densidade_populacional2 = populacao2/area2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2 = (float)pib/populacao2);
    
    return 0;
}
