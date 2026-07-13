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
  // Área para entrada de dados

  printf("Digite o Número da Carta 1: ");//Estado: Uma letra de 'A' a 'H' (representando um dos oito estados)
  scanf("%d", &carta1);

  printf("Digite o Estado: ");
  scanf("%s", Estado1);    

  printf("Digite o Codigo: ");
  scanf("%s", Codigo1);   

  getchar(); 
  printf("Digite o Nome da Cidade: ");
  fgets(cidade1, sizeof(cidade1), stdin);
  cidade1[strcspn (cidade1, "\n")] = 0; // Remove o caractere de nova linha
 
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

  getchar(); // Limpar o buffer do teclado
  printf("Digite o Nome da Cidade: ");
  fgets(cidade2, sizeof(cidade2), stdin);
  cidade2[strcspn(cidade2, "\n")] = '\0'; // Remove o caractere de nova linha.


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
  poder2 = populacao2 + pib_per_capita2 + pontos_turisticos2 + inv_densidade2 + pib2;

  //Comparação das cartas - Atributo População..

printf("****** COMPARACAO DAS CARTAS ******\n\n");

if (populacao1 > populacao2) {
    printf("Populacao: Carta 1 %s: %d\n Populacao: Carta 2 %s: %d\n Resultado: Carta 1 (%s) venceu!", cidade1, populacao1, cidade2, populacao2, cidade1);
  } else {
    printf("Populacao: Carta 2 %s: %d\n Populacao: Carta 1 %s: %d\n Resultado: Carta 2 (%s) venceu!", cidade2, populacao2, cidade1, populacao1, cidade2);
  }
  
  return 0;
} 