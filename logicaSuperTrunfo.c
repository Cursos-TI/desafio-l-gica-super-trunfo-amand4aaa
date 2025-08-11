#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Comparando Cartas com Dois Atributos\n");

    // Variáveis da Carta 1
    char estado1, codigo1[4], nome1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pib_per_capita1;

    // Variáveis da Carta 2
    char estado2, codigo2[4], nome2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pib_per_capita2;

    int opcao1, opcao2;

    // Entrada Carta 1
    printf("\n🔹 Carta 1\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area em km2: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Entrada Carta 2
    printf("\n🔹 Carta 2\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Exibe cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c | Codigo: %s | Nome: %s\n", estado1, codigo1, nome1);
    printf("Populacao: %d | Area: %.2f km² | PIB: %.2f | Pontos: %d\n", populacao1, area1, pib1, pontos1);
    printf("Densidade: %.2f hab/km² | PIB per Capita: %.2f\n", densidade1, pib_per_capita1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c | Codigo: %s | Nome: %s\n", estado2, codigo2, nome2);
    printf("Populacao: %d | Area: %.2f km² | PIB: %.2f | Pontos: %d\n", populacao2, area2, pib2, pontos2);
    printf("Densidade: %.2f hab/km² | PIB per Capita: %.2f\n", densidade2, pib_per_capita2);

    // Menu do primeiro atributo
    printf("\n========== ESCOLHA O PRIMEIRO ATRIBUTO ==========\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha (1-6): ");
    scanf("%d", &opcao1);

    // Menu do segundo atributo (dinâmico)
    printf("\n========== ESCOLHA O SEGUNDO ATRIBUTO ==========\n");
    for (int i = 1; i <= 6; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Populacional (menor vence)\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
            }
        }
    }
    printf("Escolha (1-6, diferente do primeiro): ");
    scanf("%d", &opcao2);

    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;

    // Função de comparação por atributo
    for (int rodada = 1; rodada <= 2; rodada++) {
        int escolha = (rodada == 1) ? opcao1 : opcao2;
        float v1, v2;

        switch (escolha) {
            case 1: v1 = populacao1; v2 = populacao2; break;
            case 2: v1 = area1; v2 = area2; break;
            case 3: v1 = pib1; v2 = pib2; break;
            case 4: v1 = pontos1; v2 = pontos2; break;
            case 5: v1 = densidade1; v2 = densidade2; break;
            case 6: v1 = pib_per_capita1; v2 = pib_per_capita2; break;
            default:
                printf("Opcao invalida!\n");
                return 0;
        }

        printf("\n🔹 Comparacao %d - Atributo %d:\n", rodada, escolha);
        printf("%s: %.2f | %s: %.2f\n", nome1, v1, nome2, v2);

        if (escolha == 5) {
            (v1 < v2) ? printf("Vencedor: %s\n", nome1) :
            (v2 < v1) ? printf("Vencedor: %s\n", nome2) :
                        printf("Empate!\n");
        } else {
            (v1 > v2) ? printf("Vencedor: %s\n", nome1) :
            (v2 > v1) ? printf("Vencedor: %s\n", nome2) :
                        printf("Empate!\n");
        }

        if (rodada == 1) { valor1_c1 = v1; valor1_c2 = v2; }
        else { valor2_c1 = v1; valor2_c2 = v2; }
    }

    // Soma dos valores
    float soma_c1 = valor1_c1 + valor2_c1;
    float soma_c2 = valor1_c2 + valor2_c2;

    printf("\n========== RESULTADO FINAL ==========\n");
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma_c1);
    printf("%s: %.2f\n", nome2, soma_c2);

    (soma_c1 > soma_c2) ? printf("Vencedor Final: %s\n", nome1) :
    (soma_c2 > soma_c1) ? printf("Vencedor Final: %s\n", nome2) :
                          printf("Empate Final!\n");

    return 0;
}
