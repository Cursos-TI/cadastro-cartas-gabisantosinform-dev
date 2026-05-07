#include <stdio.h>

int main() {

    // =========================
    // CARTA 1
    // =========================

    char estado1[50];
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1, pib_per_capita1;

    // =========================
    // CARTA 2
    // =========================

    char estado2[50];
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2, pib_per_capita2;

    int opcao;

    // =========================
    // ENTRADA CARTA 1
    // =========================

    printf("====================================\n");
    printf("      CADASTRO DA CARTA 1\n");
    printf("====================================\n");

    printf("Estado/Pais: ");
    scanf(" %[^\n]", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // CALCULOS CARTA 1
    densidade1 = (area1 != 0) ? (float)populacao1 / area1 : 0;
    pib_per_capita1 = (populacao1 != 0) ? (pib1 * 1e9) / populacao1 : 0;

    // =========================
    // ENTRADA CARTA 2
    // =========================

    printf("\n====================================\n");
    printf("      CADASTRO DA CARTA 2\n");
    printf("====================================\n");

    printf("Estado/Pais: ");
    scanf(" %[^\n]", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // CALCULOS CARTA 2
    densidade2 = (area2 != 0) ? (float)populacao2 / area2 : 0;
    pib_per_capita2 = (populacao2 != 0) ? (pib2 * 1e9) / populacao2 : 0;

    // =========================
    // MENU INTERATIVO
    // =========================

    printf("\n====================================\n");
    printf("       SUPER TRUNFO\n");
    printf("====================================\n");

    printf("Escolha o atributo para comparacao:\n\n");

    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    // =========================
    // COMPARACOES
    // =========================

    switch(opcao) {

        case 1:

            printf("\n=== COMPARACAO POR POPULACAO ===\n\n");

            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }

            break;

        case 2:

            printf("\n=== COMPARACAO POR AREA ===\n\n");

            printf("%s: %.2f km2\n", cidade1, area1);
            printf("%s: %.2f km2\n", cidade2, area2);

            if (area1 > area2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }

            break;

        case 3:

            printf("\n=== COMPARACAO POR PIB ===\n\n");

            printf("%s: %.2f bilhoes\n", cidade1, pib1);
            printf("%s: %.2f bilhoes\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }

            break;

        case 4:

            printf("\n=== COMPARACAO POR PONTOS TURISTICOS ===\n\n");

            printf("%s: %d pontos turisticos\n", cidade1, pontos1);
            printf("%s: %d pontos turisticos\n", cidade2, pontos2);

            if (pontos1 > pontos2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }

            break;

        case 5:

            printf("\n=== COMPARACAO POR DENSIDADE DEMOGRAFICA ===\n\n");

            printf("%s: %.2f hab/km2\n", cidade1, densidade1);
            printf("%s: %.2f hab/km2\n", cidade2, densidade2);

            // REGRA INVERTIDA
            if (densidade1 < densidade2) {
                printf("\nResultado: %s venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("\nResultado: %s venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate!\n");
            }

            break;

        default:

            printf("\nOpcao invalida!\n");
            printf("Execute o programa novamente e escolha uma opcao de 1 a 5.\n");

    }

    return 0;
}