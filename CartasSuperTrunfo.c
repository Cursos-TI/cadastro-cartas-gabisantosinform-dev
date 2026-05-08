#include <stdio.h>
#include <string.h>

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

    float densidade1;
    float pib_per_capita1;

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

    float densidade2;
    float pib_per_capita2;

    // =========================
    // VARIAVEIS COMPARAÇÃO
    // =========================

    int atributo1, atributo2;

    float valor1_carta1 = 0;
    float valor1_carta2 = 0;

    float valor2_carta1 = 0;
    float valor2_carta2 = 0;

    float soma1 = 0;
    float soma2 = 0;

    char nomeAtributo1[50];
    char nomeAtributo2[50];

    // =========================
    // CADASTRO CARTA 1
    // =========================

    printf("====================================\n");
    printf("      CADASTRO DA CARTA 1\n");
    printf("====================================\n");

    printf("Estado/Pais: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';

    printf("Codigo: ");
    scanf("%s", codigo1);

    getchar(); // limpa buffer

    printf("Nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // CALCULOS CARTA 1
    densidade1 = (area1 != 0) ? (float) populacao1 / area1 : 0;
    pib_per_capita1 = (populacao1 != 0) ? (pib1 * 1e9) / populacao1 : 0;

    getchar(); // limpa buffer

    // =========================
    // CADASTRO CARTA 2
    // =========================

    printf("\n====================================\n");
    printf("      CADASTRO DA CARTA 2\n");
    printf("====================================\n");

    printf("Estado/Pais: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Codigo: ");
    scanf("%s", codigo2);

    getchar(); // limpa buffer

    printf("Nome da Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // CALCULOS CARTA 2
    densidade2 = (area2 != 0) ? (float) populacao2 / area2 : 0;
    pib_per_capita2 = (populacao2 != 0) ? (pib2 * 1e9) / populacao2 : 0;

    // =========================
    // MENU PRIMEIRO ATRIBUTO
    // =========================

    printf("\n====================================\n");
    printf("          SUPER TRUNFO\n");
    printf("====================================\n");

    printf("\nEscolha o PRIMEIRO atributo:\n\n");

    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    printf("\nOpcao: ");
    scanf("%d", &atributo1);

    // =========================
    // MENU SEGUNDO ATRIBUTO
    // =========================

    printf("\nEscolha o SEGUNDO atributo:\n\n");

    if (atributo1 != 1)
        printf("1 - Populacao\n");

    if (atributo1 != 2)
        printf("2 - Area\n");

    if (atributo1 != 3)
        printf("3 - PIB\n");

    if (atributo1 != 4)
        printf("4 - Pontos Turisticos\n");

    if (atributo1 != 5)
        printf("5 - Densidade Demografica\n");

    printf("\nOpcao: ");
    scanf("%d", &atributo2);

    // =========================
    // VALIDAÇÃO
    // =========================

    if (atributo1 == atributo2) {

        printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes.\n");
        return 1;
    }

    // =========================
    // ATRIBUTO 1
    // =========================

    switch (atributo1) {

        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            strcpy(nomeAtributo1, "Populacao");
            break;

        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            strcpy(nomeAtributo1, "Area");
            break;

        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            strcpy(nomeAtributo1, "PIB");
            break;

        case 4:
            valor1_carta1 = pontos1;
            valor1_carta2 = pontos2;
            strcpy(nomeAtributo1, "Pontos Turisticos");
            break;

        case 5:
            valor1_carta1 = 1 / densidade1;
            valor1_carta2 = 1 / densidade2;
            strcpy(nomeAtributo1, "Densidade Demografica");
            break;

        default:
            printf("\nOpcao invalida!\n");
            return 1;
    }

    // =========================
    // ATRIBUTO 2
    // =========================

    switch (atributo2) {

        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            strcpy(nomeAtributo2, "Populacao");
            break;

        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            strcpy(nomeAtributo2, "Area");
            break;

        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            strcpy(nomeAtributo2, "PIB");
            break;

        case 4:
            valor2_carta1 = pontos1;
            valor2_carta2 = pontos2;
            strcpy(nomeAtributo2, "Pontos Turisticos");
            break;

        case 5:
            valor2_carta1 = 1 / densidade1;
            valor2_carta2 = 1 / densidade2;
            strcpy(nomeAtributo2, "Densidade Demografica");
            break;

        default:
            printf("\nOpcao invalida!\n");
            return 1;
    }

    // =========================
    // SOMA DOS ATRIBUTOS
    // =========================

    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // =========================
    // RESULTADO FINAL
    // =========================

    printf("\n====================================\n");
    printf("      RESULTADO DA COMPARACAO\n");
    printf("====================================\n");

    printf("\nCarta 1: %s (%s)\n", cidade1, estado1);
    printf("Carta 2: %s (%s)\n", cidade2, estado2);

    printf("\nAtributos escolhidos:\n");
    printf("1 - %s\n", nomeAtributo1);
    printf("2 - %s\n", nomeAtributo2);

    printf("\n--- VALORES DAS CARTAS ---\n");

    printf("\n%s:\n", cidade1);
    printf("%s: %.2f\n", nomeAtributo1, valor1_carta1);
    printf("%s: %.2f\n", nomeAtributo2, valor2_carta1);

    printf("\n%s:\n", cidade2);
    printf("%s: %.2f\n", nomeAtributo1, valor1_carta2);
    printf("%s: %.2f\n", nomeAtributo2, valor2_carta2);

    printf("\n--- SOMA DOS ATRIBUTOS ---\n");

    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    printf("\nResultado Final: %s\n",
           (soma1 > soma2) ? cidade1 :
           (soma2 > soma1) ? cidade2 :
           "Empate!");

    return 0;
}