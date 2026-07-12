#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado1[20], estado2[20], Codigo1[20], Codigo2[20], cidade1[20], cidade2[20];
  int carta1, carta2, populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
  float area_em_km1, area_em_km2, densidade1, densidade2, pib_per_capita1, pib_per_capita2, pib1, pib2, poder1, poder2, inv_densidade1, inv_densidade2;
  // Área para entrada de dados

  printf("Digite o Número da Carta 1: ");//Estado: Uma letra de 'A' a 'H' (representando um dos oito estados)
  scanf("%d", &carta1);

  printf("Digite o Estado: ");
  scanf("%s", Estado1);    

  printf("Digite o Codigo: ");
  scanf("%s", Codigo1);   

  printf("Digite o Nome da Cidade: ");
  scanf("%s", cidade1);

  printf("Digite a Populacao: ");
  scanf("%d", &populacao1);

  printf("Digite a Area em km²: ");
  scanf("%f", &area_em_km1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite a Quantidade de Pontos Turisticos: ");
  scanf("%d", &pontos_turisticos1);
   
  printf("Digite o Número da Carta: ");//Estado: Uma letra de 'A' a 'H' (representando um dos oito estados)
  scanf("%d", &carta2);

  printf("Digite o Estado: ");
  scanf("%s", estado2);    

  printf("Digite o Codigo: ");
  scanf("%s", Codigo2);   

  printf("Digite o Nome da Cidade: ");
  scanf(" %s", cidade2);

  printf("Digite a Populacao: ");
  scanf("%d", &populacao2);

  printf("Digite a Area em km²: ");
  scanf("%f", &area_em_km2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite a Quantidade de Pontos Turisticos: ");
  scanf("%d", &pontos_turisticos2);

  densidade1 = populacao1 / area_em_km1;
  pib_per_capita1 = (pib1 * 1000000000.0) / (float)populacao1;//Calcular o PIB per capita convertendo bilhões para reais
  densidade2 = populacao2 / area_em_km2;  
  pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;//Calcular o PIB per capita convertendo bilhões para reais.
  inv_densidade1 = area_em_km1 / populacao1;
  inv_densidade2 = area_em_km2 / populacao2;
  poder1 = populacao1 + pib_per_capita1 + pontos_turisticos1 + inv_densidade1 + pib1;
  poder2 = densidade2 + pib_per_capita2 + pontos_turisticos2 + inv_densidade2 + pib2;

  //Comparação das cartas.

printf("****** COMPARACAO DAS CARTAS ******\n\n");

if (populacao1 > populacao2) {
    printf("Populacao: Carta 1 venceu(1)\n");
  } else {
    printf("Populacao: Carta 2 venceu(0)\n");
  }
if (area_em_km1 > area_em_km2) {
    printf("Area: Carta 1 venceu(1)\n");
  } else {
    printf("Area: Carta 2 venceu(0)\n");
  }
if (pib1 > pib2) {
    printf("PIB: Carta 1 venceu(1)\n");
  } else {
    printf("PIB: Carta 2 venceu(0)\n");
  }
if (densidade1 < densidade2) {
    printf("Densidade Populacional: Carta 1 venceu(1)\n");
  } else {
    printf("Densidade Populacional: Carta 2 venceu(0)\n");
  }
  if (pib_per_capita1 > pib_per_capita2) {
    printf("PIB per Capita: Carta 1 venceu(1)\n");
  } else {
    printf("PIB per Capita: Carta 2 venceu(0)\n");
  }
if (poder1 > poder2) {
    printf("Poder: Carta 1 venceu(1)\n");
  } else {
    printf("Poder: Carta 2 venceu(0)\n");
  }

    return 0;
}
