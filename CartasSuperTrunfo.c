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
    float pib_percapita1;
    float dens_populacional1;
    float super_poder1;

    // Variáveis da Carta 2
    char estado2[50];
    char codigo2[4];
    char nome2[20];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;
    float pib_percapita2;
    float dens_populacional2;
    float super_poder2;

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
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &PIB1);
    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da carta 1
    pib_percapita1 = (PIB1 * 1000000000) / populacao1; 
    dens_populacional1 = populacao1 / area1;
    super_poder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + pib_percapita1 + (1.0 / dens_populacional1);

    // Exibição da primeira carta
    printf("\n Dados da Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", dens_populacional1);
    printf("PIB per capita: %.2f reais\n", pib_percapita1);

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
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &PIB2);
    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da carta 2
    pib_percapita2 = (PIB2 * 1000000000) / populacao2;
    dens_populacional2 = populacao2 / area2;
    super_poder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + pib_percapita2 + (1.0 / dens_populacional2);

    // Exibição da segunda carta
    printf("\n Dados da Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", dens_populacional2);
    printf("PIB per capita: %.2f reais\n ", pib_percapita2);
    

    // Resultado das Comprações das Cartas ( 1 = Carta 1 Vence, 0 = Carta 2 Vence)

    printf("\n Resultados das Comparações:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", PIB1 > PIB2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional (menor vence): %d\n", dens_populacional1 < dens_populacional2);
    printf("PIB per Capita: %d\n", pib_percapita1 > pib_percapita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);

    // Inserção das comparações entre as cartas cadastradas, utilizando as estruturas de decisão if e else.

    printf ("\n Comparação de cartas (Atributo: População): \n");
    printf ("Carta 1 - %s, (%s): %d\n", estado1, nome1, populacao1);
    printf ("Carta 2 - %s, (%s): %d\n", estado2, nome2, populacao2);
    if ( populacao1 > populacao2){
        printf ("Resultado: Carta 1 (%s) venceu!\n", nome1);
    }else {
        printf ("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }


    

    return 0;
}
