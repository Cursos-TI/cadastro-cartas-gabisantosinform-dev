#include <stdio.h>

int main() {

    // CARTA 1
    char estado1[50];
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1, pib_per_capita1;

    // CARTA 2
    char estado2[50];
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2, pib_per_capita2;

    // ENTRADA CARTA 1
    printf("Cadastro da Carta 1\n");

    printf("Estado: ");
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

    // ENTRADA CARTA 2
    printf("\nCadastro da Carta 2\n");

    printf("Estado: ");
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

    // ============================
    // COMPARAÇÃO (ATRIBUTO FIXO)
    // ============================

    printf("\nComparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}