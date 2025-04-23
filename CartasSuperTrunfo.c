#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado [10];
    char codigo [3];
    char nome [10];
    int populacao;
    float area; 
    float PIB;
    int pontos_turisticos;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro da primeira carta

    printf ("Cadastro da Carta 1\n");
    printf ("Digite o estado: \n");
    scanf ("%s", &estado);
    printf ("Insira o código da carta. Ex: A01.\n");
    scanf ("%s", &codigo);
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome);
    printf ("Digite o número de habitantes: \n");
    scanf ("%d", &populacao);
    printf ("Digite a Área (KM²): \n");
    scanf ("%.2f", &area);
    printf ("Digite o PIB (produto interno bruto) da cidade: \n");
    scanf ("%.2f", &PIB);
    printf ("Insira a quatidade de pontos turísticos: \n");
    scanf ("%d", &pontos_turisticos);

    // Leitura dos dados da primeira carta
    
    printf ("\nDados da Carta 1: \n");
    printf ("Estado: %s\n", estado);
    printf ("Código: %s\n", codigo);
    printf ("Nome da Cidade: %s\n", nome);
    printf ("Número de Habitantes: %d\n", populacao);
    printf ("Área da Cidade (Km²): %.2f\n", area);
    printf ("PIB da cidade: %.2f\n", PIB);
    printf ("Número de pontos turísticos: %d\n", pontos_turisticos);


    // Cadastro dos dados da segunda carta

    printf ("\nCadastro da Carta 2\n");
    printf ("Digite o estado: \n");
    scanf ("%s", &estado);
    printf ("Insira o código da carta. Ex: A01.\n");
    scanf ("%s", &codigo);
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome);
    printf ("Digite o número de habitantes: \n");
    scanf ("%d", &populacao);
    printf ("Digite a Área (KM²): \n");
    scanf ("%.2f", &area);
    printf ("Digite o PIB (produto interno bruto) da cidade: \n");
    scanf ("%.2f", &PIB);
    printf ("Insira a quatidade de pontos turísticos: \n");
    scanf ("%d", &pontos_turisticos);

    // Leitura dos dados da segunda carta 

    printf ("\nDados da Carta 2: \n");
    printf ("Estado: %s\n", estado);
    printf ("Código: %s\n", codigo);
    printf ("Nome da Cidade: %s\n", nome);
    printf ("Número de Habitantes: %d\n", populacao);
    printf ("Área da Cidade (Km²): %.2f\n", area);
    printf ("PIB da cidade: %.2f\n", PIB);
    printf ("Número de pontos turísticos: %d\n", pontos_turisticos);


   
     return 0;
}
