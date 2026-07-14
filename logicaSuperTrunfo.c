#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado1[20], estado2[20], Codigo1[20], Codigo2[20], cidade1[50], cidade2[50];
  int carta1, carta2, populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
  float area_em_km1, area_em_km2, densidade1, densidade2, pib_per_capita1, pib_per_capita2, pib1, pib2, poder1, poder2, inv_densidade1, inv_densidade2;
  int menu;

  // Área para entrada de dados
  //Atribuindo os valores as variáveis.
  strcpy(cidade1, "SAO PAULO");
  strcpy(cidade2, "RIO DE JANEIRO");
  strcpy(Codigo1, "A01");
  strcpy(Codigo2, "B02");
  populacao1 = 12325000;
  populacao2 = 6748000; 
  area_em_km1 = 1521.11;
  area_em_km2 = 1200.25;
  pib1 = 699.28;
  pib2 = 300.50;
  pontos_turisticos1 = 50;
  pontos_turisticos2 = 30; 
  
  // Cálculo do PIB per capita para cada cidade e densidade.

  densidade1 = populacao1 / area_em_km1;
  pib_per_capita1 = (pib1 * 1000000000.0) / (float)populacao1;//Calcular o PIB per capita convertendo bilhões para reais
  densidade2 = populacao2 / area_em_km2;  
  pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;//Calcular o PIB per capita convertendo bilhões para reais.

  //Criação do Menu de opções.

  printf("Escolha uma opcao:\n");
  printf("1 - Comparar Populacao\n");
  printf("2 - Comparar Area\n");
  printf("Digite sua escolha: ");
  scanf("%d", &menu);
  printf("\n");

  //Resultado da comparação das cartas.
  printf("****** COMPARACAO DAS CARTAS ******\n\n");
  switch (menu){
    case 1:
      if (populacao1 > populacao2) {
        printf("Cidades: Cidade 1: %s, Cidade 2: %s\n", cidade1, cidade2);
        printf("Atributo Escolhido: Populacao\n");
        printf("Populacao: Carta 1: %d, Carta 2: %d\n", populacao1, populacao2);
        printf("Populacao: Carta 1 %s venceu!\n", cidade1);
      } else if (populacao1 < populacao2) {
        printf("Cidades: Cidade 1: %s, Cidade 2: %s\n", cidade1, cidade2);
        printf("Atributo Escolhido: Populacao\n");
        printf("Populacao: Carta 1: %d, Carta 2: %d\n", populacao1, populacao2);
        printf("Populacao: Carta 2 %s venceu!\n", cidade2);
      } else {
        printf("Cidades: Cidade 1: %s, Cidade 2: %s\n", cidade1, cidade2);
        printf("Atributo Escolhido: Populacao\n");
        printf("Populacao: Carta 1: %d, Carta 2: %d\n", populacao1, populacao2);
        printf("Populacao: Empate\n");
      }
      break;
    case 2:
      if (area_em_km1 > area_em_km2) {
        printf("Cidades: Cidade 1: %s, Cidade 2: %s\n", cidade1, cidade2);
        printf("Atributo Escolhido: Area\n");
        printf("Area: Carta 1: %.2f, Carta 2: %.2f\n", area_em_km1, area_em_km2);
        printf("Area: Carta 1 %s venceu!\n", cidade1);
      } else if (area_em_km1 < area_em_km2) {
        printf("Cidades: Cidade 1: %s, Cidade 2: %s\n", cidade1, cidade2);
        printf("Atributo Escolhido: Area\n");
        printf("Area: Carta 1: %.2f, Carta 2: %.2f\n", area_em_km1, area_em_km2);
        printf("Area: Carta 2 %s venceu!\n", cidade2);
      } else {
        printf("Cidades: Cidade 1: %s, Cidade 2: %s\n", cidade1, cidade2);
        printf("Atributo Escolhido: Area\n");
        printf("Area: Carta 1: %.2f, Carta 2: %.2f\n", area_em_km1, area_em_km2);   
        printf("Area: Empate\n");
      }
      break;
    case 3:
        printf("Escolha errada, tente novamente.\n");
        printf("\n\n");
  }
  
  return 0;
} 