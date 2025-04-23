#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[50];
    char codigo1[4];
    char nome1[20];
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;

    // Variáveis da Carta 2
    char estado2[50];
    char codigo2[4];
    char nome2[20];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Insira o código da carta (Ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);
    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);
    printf("Digite a Área (KM²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);
    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Exibição da primeira carta
    printf("\n📄 Dados da Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Insira o código da carta (Ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);
    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);
    printf("Digite a Área (KM²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);
    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição da segunda carta
    printf("\n📄 Dados da Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}
