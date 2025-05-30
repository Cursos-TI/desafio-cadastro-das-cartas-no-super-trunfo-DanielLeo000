#include <stdio.h>

int main(){
 
 // Variáveis da carta A
 char  estado1[20], codico1[20], cidade1[20];
 int populacao1, pontosturisticos1;
 float area1, pib1, densidade1, pibpercapta1; 

 // variaveis da carta B
 char estado2[20], codico2[20], cidade2[20];  
 int  populacao2, pontosturisticos2;
 float area2, pib2, densidade2, pibpercapta2;
 
 
    //Informações da Carta um
 
 printf("Preencha os dados da carta 1 abaixo: \n");

 printf(" \n"); // Espaço para organização

 printf("Digite o Estado:");
 scanf("%s", estado1);

 printf("Digite o códico da carta: ");
 scanf("%s", codico1);
 
 printf("Digite a cidade:");
 scanf("%s", cidade1);

 printf("Digite o número de habitantes: ");
 scanf("%i", &populacao1);
 
 printf("Digite a área: ");
 scanf("%f", &area1);

 printf("Digite Pib: ");
 scanf("%f", &pib1);
 
 printf("Digite a quantidade de pontos turisticos: ");
 scanf("%i", &pontosturisticos1);

 densidade1 = (float) populacao1 / area1; // Densidade demografica da  carta um
 
 pibpercapta1 =(float) pib1 / populacao1;  // PIP per capta da  carta um

 printf(" \n"); //Espaço
 

 //Imprimindo informações da carta Um


 printf("****** CARTA UM *******\n"); //titulo
 
 printf(" \n"); //espaço 
 
 printf("Estado: %s\n", estado1);
 printf("Códico: %s\n", codico1);
 printf("Cidade: %s\n", cidade1);
 printf("População: %i habiantes\n", populacao1);
 printf("Área: %.2fkm\n", area1);
 printf("PIB: %.2f bilhões de reais\n", pib1);
 printf("Pontos turisticos: %i locais\n", pontosturisticos1);
 printf("Densidade populaciona1: %.2f hab/km \n", densidade1);
 printf("Pib per capta: %.2f reais\n", pibpercapta1);
 printf(" \n"); //Espaço 
 

 //Informacões da Carta dois
 
 printf("Preencha os dados da carta 2 abaixo: \n");
 
 printf(" \n"); //Espaço para organização

 printf("Digite o Estado: ");
scanf("%s", estado2);
 

 printf("Digite o códico da carta: ");
 scanf("%s", codico2);
 
 printf("Digite a cidade:");
 scanf("%s", cidade2);
 
 printf("Digite o número de habitantes: ");
 scanf("%i", &populacao2);
 
 printf("Digite a área: ");
 scanf("%f", &area2);
 
 printf("Digite Pib: ");
 scanf("%f", &pib2);
 
 printf("Digite a quantidade de pontos turisticos: ");
 scanf("%i", &pontosturisticos2);
 
 densidade2 = (float) populacao2 / area2; // Densidade demografica da  carta dois
 
 pibpercapta2 =(float) pib2 / populacao2;  // PIP per capta da  carta dois
 
 printf(" \n"); //espaço 


 //Imprimindo informações da carta dois
  
 printf("******CARTA DOIS*****\n"); //titulo
 
 printf(" \n"); //espaço
 
 printf("Estado: %s\n", estado2);
 printf("Códico: %s\n", codico2);
 printf("Cidade: %s\n", cidade2);
 printf("População: %i habiantes\n", populacao2);
 printf("Área: %.2fkm\n", area2);
 printf("PIB: %.2f bilhões de reais\n", pib2);
 printf("Pontos turisticos: %i locais\n", pontosturisticos2);
 printf("Densidade populaciona2: %.2f hab/km\n", densidade2);
 printf("Pib per capta: %.2f reais\n", pibpercapta2);
 
 return 0;
 }