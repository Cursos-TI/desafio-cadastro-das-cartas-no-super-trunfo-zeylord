#include <stdio.h>

int main(){
    char estado; // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo_carta[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nome_cidade [20]; // O nome da cidade
    unsigned long int populacao; // O número de habitantes da cidade
    float area; // A área da cidade em quilômetros quadrados
    float pib; //O Produto Interno Bruto da cidade
    int n_pontos_turisticos; // A quantidade de pontos turísticos na cidade
    float densidade_populacional; //divide a população da cidade pela área, quantidade por km²
    float pib_percapita; //Riqueza em média por pessoa na cidade, divide o pib pela população
    float densidade_populacional_invertida; // 1 dividido pela densidade populacional que é o que dá pontuação no jogo
    double super_Poder; //Soma todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional

    char estado2; // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo_carta2[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nome_cidade2 [20]; // O nome da cidade
    unsigned long int populacao2; // O número de habitantes da cidade
    float area2; // A área da cidade em quilômetros quadrados
    float pib2; //O Produto Interno Bruto da cidade
    int n_pontos_turisticos2; // A quantidade de pontos turísticos na cidade
    float densidade_populacional2; //divide a população da cidade pela área, quantidade por km²
    float pib_percapita2; //Riqueza em média por pessoa na cidade, divide o pib pela população
    float densidade_populacional_invertida2; // 1 dividido pela densidade populacional que é o que dá pontuação no jogo
    double super_Poder2; //Soma todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional
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
    scanf("%lu", &populacao);

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
    scanf("%lu", &populacao2);

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
    printf("População: %lu\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", n_pontos_turisticos);
    printf("Densidade populacinal: %f hab/km²\n", densidade_populacional = populacao/area);
    printf("PIB per Capita: %.2f reais\n", pib_percapita = (float)pib/populacao);
    densidade_populacional_invertida = 1/densidade_populacional;
    printf("Super poder: %f\n", super_Poder = (double)populacao + (double)area + (double)pib + (double)n_pontos_turisticos + (double)pib_percapita + (double)densidade_populacional_invertida);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", n_pontos_turisticos2);
    printf("Densidade populacinal: %f hab/km²\n", densidade_populacional2 = populacao2/area2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2 = (float)pib2/populacao2);
    densidade_populacional_invertida2 = 1/densidade_populacional2;
    printf("Super poder: %f\n", super_Poder2 = (double)populacao2 + (double)area2 + (double)pib2 + (double)n_pontos_turisticos2 + (double)pib_percapita2 + (double)densidade_populacional_invertida2);
    
    
     // Exibição da comparação das Cartas
    
    printf("\n\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", 
        populacao > populacao2 ? 1 : 2, 
        populacao > populacao2 ? 1 : 0);

    printf("Área: Carta %d venceu (%d)\n", 
        area > area2 ? 1 : 2, 
        area > area2 ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n", 
        pib > pib2 ? 1 : 2, 
        pib > pib2 ? 1 : 0);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
        n_pontos_turisticos > n_pontos_turisticos2 ? 1 : 2, 
        n_pontos_turisticos > n_pontos_turisticos2 ? 1 : 0);

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
        densidade_populacional > densidade_populacional2 ? 1 : 2, 
        densidade_populacional > densidade_populacional2 ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
        pib_percapita > pib_percapita2 ? 1 : 2, 
        pib_percapita > pib_percapita2 ? 1 : 0);

    printf("Super Poder: Carta %d venceu (%d)\n\n", 
        super_Poder > super_Poder2 ? 1 : 2, 
        super_Poder > super_Poder2 ? 1 : 0);


    
    
    return 0;
    
    }