#include <stdio.h>
#include <string.h>
#include <time.h> 
#include <stdlib.h>  

int main(){

//Declaração das variáveis.

char primeiroatributo, segundoatributo;
char estado1[20], estado2[20], Codigo1[20], Codigo2[20], cidade1[20], cidade2[50];
int carta1, carta2, populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
float area_em_km1, area_em_km2, densidade1, densidade2, pib_per_capita1, pib_per_capita2, pib1, pib2;
float somacarta1 = 0, somacarta2 = 0;

//Inicialização das varíaveis.

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
  
//Cálculo da densidade demográfica e do PIB per capita.
densidade1 = populacao1 / area_em_km1;
pib_per_capita1 = (pib1 * 1000000000.0) / (float)populacao1;//Calcular o PIB per capita convertendo bilhões para reais
densidade2 = populacao2 / area_em_km2;  
pib_per_capita2 = (pib2 * 1000000000.0) / (float)populacao2;//Calcular o PIB per capita convertendo bilhões para reais.


//Exibição do primeiro menu de seleção de atributos.

printf("*******************************************\n");
printf("**** Bem-vindo ao jogo, vamos comecar! ****\n");
printf("*******************************************\n");
printf("Escolha seu Primeiro Atributo!\n");
printf("A - Populacao\n");
printf("B - Area\n");
printf("C - Pontos Turisticos\n");
printf("D - Densidade\n");
printf("E - Pib\n");
printf("Faca a sua escolha:  ");
scanf(" %c", &primeiroatributo );

// Utiliza o switch para tratar a escolha do primeiro atributo.
  
switch ((primeiroatributo)){

case 'A':
case 'a':
        
  printf("Voce escolheu a opcao A - Populacao!\n");
  printf(" Populacao Carta 1: %d Cidade: %s\n", populacao1, cidade1 );
  printf(" Populacao Carta 2: %d Cidade: %s\n", populacao2, cidade2);
  somacarta1 += populacao1;
  somacarta2 += populacao2;  
    break;

case 'B':
case 'b':
        
  printf("Voce escolheu a opcao B - Area!\n");
  printf("Area carta 1: %.2f Cidade: %s\n", area_em_km1, cidade1);
  printf("Area Carta 2: %.2f Cidade: %s\n", area_em_km2, cidade2);
  somacarta1 += area_em_km1;
  somacarta2 += area_em_km2; 
    break;

case 'C':
case 'c':

  printf("Voce escolheu a opcao C - Pontos Turisticos!\n");
  printf(" Pontos Turisticos Carta 1: %d Cidade: %s\n", pontos_turisticos1, cidade1);
  printf(" Pontos Turisticos Carta 2: %d Cidade: %s\n", pontos_turisticos2, cidade2);
  somacarta1 += pontos_turisticos1;
  somacarta2 += pontos_turisticos2;   
    break;

case 'D':
case 'd':

  printf("Voce escolheu a opcao D - Densidade!\n");
  printf(" Densidade Carta 1: %.2f Cidade: %s\n", densidade1, cidade1);
  printf(" Densidade Carta 2: %.2f Cidade: %s\n", densidade2, cidade2);
  somacarta1 += densidade1;
  somacarta2 += densidade2;    
    break;

case 'E':
case 'e':

  printf("Voce escolheu a opcao E - Pib!\n");
  printf(" PIB Carta 1: %.2f Cidade: %s\n", pib1, cidade1);
  printf(" PIB Carta 2: %.2f Cidade: %s\n", pib2, cidade2);
  somacarta1 += pib1;
  somacarta2 += pib2;    
    break;

}
    
//Exibição do segundo menu de seleção de atributos.

printf("Escolha seu Segundo Atributo!\n");
printf("A - Populacao\n");
printf("B - Area\n");
printf("C - Pontos Turisticos\n");
printf("D - Densidade\n");
printf("E - Pib\n");
printf("Faca a sua escolha:  ");
scanf(" %c", &segundoatributo );


// Verifica se o usuário escolheu o mesmo atributo duas vezes.

if (primeiroatributo == segundoatributo){
        printf("Voce escolheu o mesmo atributo, faca uma nova escolha!\n");
        return 0; 
// Se os atributos forem diferentes, continua a execução do jogo.
    }else {
// Utiliza o switch para tratar a escolha do segundo atributo.
    
        switch ((segundoatributo)){

        case 'A':
        case 'a':
                
        printf("Voce escolheu a opcao A - Populacao!\n");
        printf(" Populacao Carta 1: %d Cidade: %s\n", populacao1, cidade1 );
        printf(" Populacao Carta 2: %d Cidade: %s\n", populacao2, cidade2);
        somacarta1 = somacarta1 + populacao1;
        somacarta2 = somacarta2 + populacao2;    
        break;

        case 'B':
        case 'b':
                
        printf("Voce escolheu a opcao B - Area!\n");
        printf("Area carta 1: %.2f Cidade: %s\n", area_em_km1, cidade1);
        printf("Area Carta 2: %.2f Cidade: %s\n", area_em_km2, cidade2);
        somacarta1 = somacarta1 + area_em_km1;
        somacarta2 = somacarta2 + area_em_km2; 
        break;

        case 'C':
        case 'c':

        printf("Voce escolheu a opcao C - Pontos Turisticos!\n");
        printf(" Pontos Turisticos Carta 1: %d Cidade: %s\n", pontos_turisticos1, cidade1);
        printf(" Pontos Turisticos Carta 2: %d Cidade: %s\n", pontos_turisticos2, cidade2);
        somacarta1 = somacarta1 + pontos_turisticos1;
        somacarta2 = somacarta2 + pontos_turisticos2;   
        break;

        case 'D':
        case 'd':

        printf("Voce escolheu a opcao D - Densidade!\n");
        printf(" Densidade Carta 1: %.2f Cidade: %s\n", densidade1, cidade1);
        printf(" Densidade Carta 2: %.2f Cidade: %s\n", densidade2, cidade2);
        somacarta1 = somacarta1 + densidade1;
        somacarta2 = somacarta2 + densidade2; 
        break;

        case 'E':
        case 'e':

        printf("Voce escolheu a opcao E - Pib!\n");
        printf(" PIB Carta 1: %.2f Cidade: %s\n", pib1, cidade1);
        printf(" PIB Carta 2: %.2f Cidade: %s\n", pib2, cidade2);
        somacarta1 = somacarta1 + pib1;
        somacarta2 = somacarta2 + pib2; 
        break;
       
        }
// Exibição do resultado da partida.
if (somacarta1 > somacarta2) {

    printf("**** Exibicao do Resultado ****\n");
    printf("*** Voce venceu! ***\n");
    printf("A Soma dos Atributos da Carta 1 foi maior: %.2f\n", somacarta1);
    printf("A Soma dos Atributos da Carta 2 foi menor: %.2f\n", somacarta2);
   

    }else if (somacarta1 == somacarta2) {
        printf("**** Exibicao do Resultado ****\n");
        printf("*** Voce Empatou! ***\n");
        printf("A Soma dos Atributos da Carta 1 foi igual: %.2f\n", somacarta1);
        printf("A Soma dos Atributos da Carta 2 foi igual: %.2f\n", somacarta2);
     

    }else {
        printf("**** Exibicao do Resultado ****\n");
        printf("*** Voce perdeu, tente novamente! ***\n");
        printf("A Soma dos Atributos da Carta 2 foi maior: %.2f\n", somacarta2);
        printf("A Soma dos Atributos da Carta 1 foi menor: %.2f\n", somacarta1);
     
    }
}

    return 0;
}  