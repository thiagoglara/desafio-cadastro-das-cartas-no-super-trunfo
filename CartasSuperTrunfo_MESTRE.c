#include<stdio.h>

    int main() {
       // Dados da Carta 1
       char estado1;
       char codigo1[4];
       char cidade1[30];
       unsigned long int populacao1;
       float area1;
       float pib1;
       int pontoturistico1;
       float densidade1;
       float pibpercapita1;
       float superpoder1;
     
       // Dados da Carta 2
        char estado2;
        char codigo2[4];
        char cidade2[30];
        unsigned long int populacao2;
        float area2;
        float pib2;
        int potonturistico2;
        float densidade2;
        float pibpercapita2;
        float superpoder2;

        // Leitura da Carta 1
        printf("Cadastro da Carta 1\n");
        
        printf("Informe o estado (letra A a H): ");
        scanf(" %c", &estado1); // espaço antes de %c para ignorar o \n
        
        printf("Informe o codigo da carta (ex:A01): ");
        scanf("%s", codigo1);
        
        printf("Informe o nome da cidade: ");
        scanf(" %s", cidade1);

        printf("Informe a populacao: ");
        scanf("%lu", &populacao1);

        printf("Informe a area da cidade (em km2): ");
        scanf("%f", &area1);

        printf("informe o PIB da cidade: ");
        scanf("%f", &pib1);

        printf("Informe o numero de pontos turisticos: ");
        scanf("%d", &pontoturistico1);
 
        // Leitura da Carta 2
        printf("\nCadastro da Carta 2\n");

        printf("Informe o estado (letra A a H): ");
        scanf(" %c", &estado2);

        printf("Informe o codigo da carta (ex:A02): ");
        scanf("%s", codigo2);

        printf("Informe o nome da cidade: ");
        scanf("%s", cidade2);

        printf("informe a populacao da cidade: ");
        scanf("%lu", &populacao2);

        printf("Informe a area da cidade (em km2): ");
        scanf("%f", &area2);

        printf("informe o PIB da cidade: ");
        scanf("%f", &pib2);

        printf("Informe o numero de pontos turisticos: ");
        scanf("%d", &potonturistico2);

        densidade1 = populacao1 / area1;
        pibpercapita1 = pib1 / populacao1;
        
        densidade2 = populacao2 / area2;
        pibpercapita2 = pib2 / populacao2;

        
        superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontoturistico1 + pibpercapita1 + (1.0 / densidade1);
        superpoder2 = (float)populacao2 + area2 + pib2 + (float)potonturistico2 + pibpercapita2 + (1.0 / densidade2);

        // Exibicao dos dados da Carta 1
        printf("\nDados da Carta 1\n");
        printf("Estado: %c\n", estado1);
        printf("Codigo: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("Populacao: %lu\n", populacao1);
        printf("Area: %.2f km2\n", area1);
        printf("PIB: %.2f bilhoes de reais\n", pib1);
        printf("Pontos turisticos: %d\n", pontoturistico1);

        printf("Densidade Populacional: %.2f \n", densidade1);
        printf("PIB per capita: %.2f \n", pibpercapita1);
        printf("Super Poder da Carta 1: %.2f\n", superpoder1);

    
        printf("\nDados da Carta 2\n");
        printf("Estado: %c\n", estado2);
        printf("Codigo: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("Populacao: %lu\n", populacao2);
        printf("Area: %.2f km2\n", area2);
        printf("PIB: %.2f bilhoes de reais\n", pib2);
        printf("Pontos turisticos: %d\n", potonturistico2);

        printf("Densidade Populacional: %.2f \n", densidade2);
        printf("PIB per capita: %.2f \n", pibpercapita2);

        printf("Super Poder da Carta 2: %.2f\n", superpoder2);


        // Comparacao dos Super Poderes
        printf("\nComparacao entre as Cartas:\n");

        // População
        (populacao1 > populacao2) * printf("Carta 1 vence em populacao.\n");
        (populacao2 > populacao1) * printf("Carta 2 vence em populacao.\n");
        (populacao1 == populacao2) * printf("Empate em populacao.\n");

        // Área
        (area1 > area2) * printf("Carta 1 vence em area.\n");
        (area2 > area1) * printf("Carta 2 vence em area.\n");
        (area1 == area2) * printf("Empate em area.\n");

        // PIB 
        (pib1 > pib2) * printf("Carta 1 vence em PIB.\n");
        (pib2 > pib1) * printf("Carta 2 vence em PIB.\n");
        (pib1 == pib2) * printf("Empate em PIB.\n");

        // Pontos Turísticos
        (pontoturistico1 > potonturistico2) * printf("Carta 1 vence em pontos turisticos.\n");
        (potonturistico2 > pontoturistico1) * printf("Carta 2 vence em pontos turisticos.\n");
        (pontoturistico1 == potonturistico2) * printf("Empate em pontos turisticos.\n");

        // PIB per capita
        (pibpercapita1 > pibpercapita2) * printf("Carta 1 vence em PIB per capita.\n");
        (pibpercapita2 > pibpercapita1) * printf("Carta 2 vence em PIB per capita.\n");
        (pibpercapita1 == pibpercapita2) * printf("Empate em PIB per capita.\n");

        // Densidade (MENOR VENCE)
        (densidade1 < densidade2) * printf("Carta 1 vence em densidade populacional.\n");
        (densidade2 < densidade1) * printf("Carta 2 vence em densidade populacional.\n");
        (densidade1 == densidade2) * printf("Empate em densidade populacional.\n");

         // Super Poder
        (superpoder1 > superpoder2) * printf("Carta 1 vence em Super Poder.\n");
        (superpoder2 > superpoder1) * printf("Carta 2 vence em Super Poder.\n");
        (superpoder1 == superpoder2) * printf("Empate em Super Poder.\n");

          // Comparacao geral
        printf("\nResultados das Comparações\n");

        printf("Populacao: %d\n", populacao1 > populacao2);
        printf("Area: %d\n", area1 > area2);
        printf("PIB: %d\n", pib1 > pib2);
        printf("Pontos turisticos: %d\n", pontoturistico1 > potonturistico2);
        printf("Densidade Populacional: %d\n", densidade1 > densidade2);
        printf("PIB per capita: %d\n", pibpercapita1 > pibpercapita2);
        printf("Super Poder: %d\n", superpoder1 > superpoder2);

     return 0;
    }