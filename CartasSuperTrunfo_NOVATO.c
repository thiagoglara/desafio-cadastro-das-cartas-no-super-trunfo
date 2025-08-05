#include<stdio.h>

    int main() {
       // Dados da Carta 1
       char estado1;
       char codigo1[4];
       char cidade1[30];
       int populacao1;
       float area1;
       float pib1;
       int pontoturistico1;

       // Dados da Carta 2
        char estado2;
        char codigo2[4];
        char cidade2[30];
        int populacao2;
        float area2;
        float pib2;
        int potonturistico2;

        // Leitura da Carta 1
        printf("Cadastro da Carta 1\n");
        
        printf("Informe o estado (letra A a H): ");
        scanf(" %c", &estado1); // espaço antes de %c para ignorar o \n
        
        printf("Informe o codigo da carta (ex:A01): ");
        scanf("%s", codigo1);
        
        printf("Informe o nome da cidade: ");
        scanf(" %s", cidade1);

        printf("Informe a populacao: ");
        scanf("%d", &populacao1);

        printf("Informe a area da cidade (em km2): ");
        scanf("%f", &area1);

        printf("informe o PIB da cidade (em bilhoes de reais): ");
        scanf("%f", &pib1);

        printf("Informe o numero de pontos turisticos: ");
        scanf("%d", &pontoturistico1);

        // Leitura da Carta 2
        printf("\nCadastro da Carta 2\n");

        printf("Informe o estado (letra A a H): ");
        scanf("%c", &estado2);

        printf("Informe o codigo da carta (ex:A02): ");
        scanf("%s", codigo2);

        printf("Informe o nome da cidade: ");
        scanf("%s", cidade2);

        printf("informe a populacao da cidade: ");
        scanf("%d", &populacao2);

        printf("Informe a area da cidade (em km2): ");
        scanf("%f", &area2);

        printf("informe o PIB da cidade (em bilhoes de reais): ");
        scanf("%f", &pib2);

        printf("Informe o numero de pontos turisticos: ");
        scanf("%d", &potonturistico2);

        // Exibicao dos dados da Carta 1
        printf("\nDados da Carta 1\n");
        printf("Estado: %c\n", estado1);
        printf("Codigo: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("Populacao: %d\n", populacao1);
        printf("Area: %.2f km2\n", area1);
        printf("PIB: %.2f bilhoes de reais\n", pib1);
        printf("Pontos turisticos: %d\n", pontoturistico1);

        printf("\nDados da Carta 2\n");
        printf("Estado: %c\n", estado2);
        printf("Codigo: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %.2f km2\n", area2);
        printf("PIB: %.2f bilhoes de reais\n", pib2);
        printf("Pontos turisticos: %d\n", potonturistico2);


        return 0;
    }