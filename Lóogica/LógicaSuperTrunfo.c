#include <stdio.h>

int main() {
    // ----------------------
    // Variáveis da Carta 1
    // ----------------------
    char estado1;
    char codigo1[4];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // ----------------------
    // Variáveis da Carta 2
    // ----------------------
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // ----------------------
    // Entrada de dados da Carta 1
    // ----------------------
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("Digite a População da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a Área da cidade (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    // ----------------------
    // Entrada de dados da Carta 2
    // ----------------------
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("Digite a População da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a Área da cidade (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n");

    // ----------------------
    // Cálculos adicionais
    // ----------------------
    float densidade1 = populacao1 / area1; // habitantes por km²
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = pib1 * 1000000000 / populacao1; // PIB per capita em reais
    float pib_per_capita2 = pib2 * 1000000000 / populacao2;

    // ----------------------
    // Exibição das cartas completas
    // ----------------------
    printf("=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    printf("\n");

    printf("=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    printf("\n");

    // ----------------------
    // Comparação de cartas
    // ----------------------
    // Atributo escolhido para comparação: População
    printf("=== Comparação de cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%c): %d\n", nome_cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d\n", nome_cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
