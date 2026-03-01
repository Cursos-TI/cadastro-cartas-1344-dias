#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char codigo[4];
  char cidade[50];
  int populacao;
  float area;
  float pib;
  int pontosturisticos;
  
  
  // Área para entrada de dados

  printf("Digite o codigo da carta: ");
  scanf("%s", codigo);

  printf("Digite a cidade: ");
  scanf("%s", cidade);
  
  printf("Digite a população da cidade: ");
  scanf("%d", &populacao);

  printf("Digite a area da cidade km²:\n" );
  scanf(" %f", &area);

  printf("Digite o pib da cidade:\n");
  scanf(" %f", &pib);

  printf("digite o numero de pontos turisticos:\n");
  scanf(" %d", &pontosturisticos);


    // Área para exibição dos dados da cidade

    printf("\n -  Dados da Carta - \n");
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontosturisticos: %d\n", pontosturisticos);

    return 0;
}
