#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
    char estado;
    char carta[4];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
  
  // Área para entrada de dados

    printf("Estado (A-H): ");
    scanf("   %c", &estado);

    printf("Código: ");
    scanf("%s", carta);   
    
    printf("Nome da Cidade: ");
    scanf("%s", cidade); //não usar espaço no nome da cidade

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade
  
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", PIB);
    printf("Número de Pontos Turísticos: %d", pontos_turisticos);

return 0;
} 
