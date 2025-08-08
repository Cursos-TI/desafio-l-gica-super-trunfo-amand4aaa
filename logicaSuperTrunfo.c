#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Comparando Cartas com Menu Interativo\n");

    // Declaração das variáveis da Carta 1
    char estado1, codigo1[4], nome1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pib_per_capita1;

    // Declaração das variáveis da Carta 2
    char estado2, codigo2[4], nome2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pib_per_capita2;

    int opcao;

    // Entrada de dados da Carta 1
    printf("\n🔹 Carta 1\n");
    printf("Digite o estado (letra de A a H):\n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01):\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome1);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);
    printf("Digite a area em km2:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos1);

    // Entrada de dados da Carta 2
    printf("\n🔹 Carta 2\n");
    printf("Digite o estado (letra de A a H):\n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B01):\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome2);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);
    printf("Digite a area em km2:\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos2);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Impressão das cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Menu interativo
    printf("\n========== MENU DE COMPARACAO ==========\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha o atributo para comparar (1 a 6): ");
    scanf("%d", &opcao);

    printf("\n Comparando cartas pelo atributo escolhido:\n");

    switch(opcao) {
        case 1: // Populacao
            printf("Populacao - %s: %d | %s: %d\n", nome1, populacao1, nome2, populacao2);
            if (populacao1 > populacao2) {
                printf(" ### Vencedor ###: Carta 1 (%s)\n", nome1);
            } else if (populacao2 > populacao1) {
                printf(" ### Vencedor ###: Carta 2 (%s)\n", nome2);
            } else {
                printf("  Empate!\n");
            }
            break;

        case 2: // Area
            printf("Area - %s: %.2f | %s: %.2f\n", nome1, area1, nome2, area2);
            if (area1 > area2) {
                printf(" ### Vencedor ### : Carta 1 (%s)\n", nome1);
            } else if (area2 > area1) {
                printf(" ### Vencedor ###: Carta 2 (%s)\n", nome2);
            } else {
                printf("  Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB - %s: %.2f | %s: %.2f\n", nome1, pib1, nome2, pib2);
            if (pib1 > pib2) {
                printf(" ### Vencedor ###: Carta 1 (%s)\n", nome1);
            } else if (pib2 > pib1) {
                printf(" ### Vencedor ###: Carta 2 (%s)\n", nome2);
            } else {
                printf("  Empate!\n");
            }
            break;

        case 4: // Pontos Turisticos
            printf("Pontos Turisticos - %s: %d | %s: %d\n", nome1, pontos1, nome2, pontos2);
            if (pontos1 > pontos2) {
                printf(" ### Vencedor ###: Carta 1 (%s)\n", nome1);
            } else if (pontos2 > pontos1) {
                printf(" ### Vencedor ###: Carta 2 (%s)\n", nome2);
            } else {
                printf("  Empate!\n");
            }
            break;

        case 5: // Densidade Populacional (menor vence)
            printf("Densidade Populacional - %s: %.2f | %s: %.2f\n", nome1, densidade1, nome2, densidade2);
            if (densidade1 < densidade2) {
                printf(" ### Vencedor ###: Carta 1 (%s)\n", nome1);
            } else if (densidade2 < densidade1) {
                printf(" ### Vencedor ###: Carta 2 (%s)\n", nome2);
            } else {
                printf("  Empate!\n");
            }
            break;

        case 6: // PIB per capita
            printf("PIB per Capita - %s: %.2f | %s: %.2f\n", nome1, pib_per_capita1, nome2, pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2) {
                printf(" ### Vencedor ###: Carta 1 (%s)\n", nome1);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf(" ### Vencedor ###: Carta 2 (%s)\n", nome2);
            } else {
                printf("  Empate!\n");
            }
            break;

        default:
            printf(" Opcao invalida! Por favor, escolha de 1 a 6.\n");
    }

    return 0;
}
