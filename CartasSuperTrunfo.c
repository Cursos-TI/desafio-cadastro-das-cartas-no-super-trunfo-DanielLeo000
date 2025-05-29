#include <stdio.h>

int main(){

    //Variáveis

//  As váriaveis (estado1[20],codico1[20],cidade1[20],populacao1,area1, pontosturisticos1,pib1)são referentes a carta Um.
//  As váriaveis (estado2[20],codico2[20],cidade2[20],populacao2,area2, pontosturisticos2,pib2)são referentes a carta Dois.

char codico1[20], codico2[20], cidade1[20], cidade2[20], estado1[20], estado2[20];
int populacao1, populacao2, pontosturisticos1, pontosturisticos2; 
float area1, area2, pib1, pib2;

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
scanf("%i", &codico1);

printf("Digite a área: ");
scanf("%f", &area1);

printf("Digite Pib: ");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turisticos: ");
scanf("%i", &pontosturisticos1);

printf(" \n"); //Espaço

//Imprimindo informações da carta Um

printf("CARTA UM\n"); //titulo

printf(" \n"); //espaço para organização

printf("Estado: %s\n", estado1);
printf("Códico: %s\n", codico1);
printf("Cidade: %s\n", cidade1);
printf("População: %i habiantes\n", populacao1);
printf("Área: %fkm\n", area1);
printf("PIB: %fR$\n", pib1);
printf("Pontos turisticos: %i locais\n", pontosturisticos1);


printf(" \n"); //Espaço para organização

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
scanf("%f",& pib2);

printf("Digite a quantidade de pontos turisticos: ");
scanf("%i", &pontosturisticos2);

printf(" \n"); //espaço para organização

//Imprimindo informações da carta dois

printf("CARTA DOIS\n"); //titulo

printf(" \n"); //espaço para organização

printf("Estado: %s\n", estado2);
printf("Códico: %s\n", codico2);
printf("Cidade: %s\n", cidade2);
printf("População: %i habiantes\n", populacao2);
printf("Área: %fkm\n", area2);
printf("PIB: %fR$\n", pib2);
printf("Pontos turisticos: %i locais\n", pontosturisticos2);
printf(" \n"); //Espaço

return 0;
}
