#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1[30], cidade1[30];
    int codigo1, pontosTuristicos1;
    float populacao1, area1, pib1, densidade1;

    // Variáveis da carta 2
    char estado2[30], cidade2[30];
    int codigo2, pontosTuristicos2;
    float populacao2, area2, pib2, densidade2;

    // Cadastro da carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo: ");
    scanf("%d", &codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%f", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    densidade1 = populacao1 / area1;

    // Cadastro da carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Codigo: ");
    scanf("%d", &codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%f", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    densidade2 = populacao2 / area2;

    // Exibição dos dados
    printf("\n📄 Carta 1: %s - %s\n", cidade1, estado1);
    printf("Codigo: %d | Populacao: %.2f | Area: %.2f | PIB: %.2f | Pontos Turisticos: %d | Densidade: %.2f\n", 
            codigo1, populacao1, area1, pib1, pontosTuristicos1, densidade1);

    printf("\n📄 Carta 2: %s - %s\n", cidade2, estado2);
    printf("Codigo: %d | Populacao: %.2f | Area: %.2f | PIB: %.2f | Pontos Turisticos: %d | Densidade: %.2f\n", 
            codigo2, populacao2, area2, pib2, pontosTuristicos2, densidade2);

    // Comparação (por exemplo, comparar por POPULAÇÃO)
    printf("\n📊 Comparando por Populacao:\n");
    if (populacao1 > populacao2) {
        printf("✅ Carta vencedora: %s (%s)\n", cidade1, estado1);
    } else if (populacao2 > populacao1) {
        printf("✅ Carta vencedora: %s (%s)\n", cidade2, estado2);
    } else {
        printf("⚖️ As duas cidades têm a mesma populacao.\n");
    }

    return 0;
}
