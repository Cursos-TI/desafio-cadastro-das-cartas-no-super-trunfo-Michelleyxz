#include <stdio.h>

 int main () {
 // Carta 1 
 char nomecidade1[30]; // Nome da cidade (ex: "Curitiba")
 char codigo1[3];    // Código da carta (2 Letras)
 int populacao1;    // População da cidade
 float area1;     // Área da cidade em km
 float pib1;     // PIB da cidade em bilhões
 float densidade1; //População / Área
 float pib_per_capita1; // PIB / População

 // Carta 2
 char nomecidade2[30];
 char codigo2[3];
 int populacao2;
 float area2;
 float pib2;
 float densidade2;
 float pib_per_capita2;
   
 // ======== Leitura dos Dados da Carta 1 ======

 printf("Digite o nome da cidade 1: ");
 scanf("%s" , nomecidade1); // le string sem o &

 printf("Digite o código da carta 1: ");
 scanf("%s" , codigo1);

 printf("Digite a populacao da cidade 1: ");
 scanf("%d" , &populacao1); // le inteiro com &

 printf("Digite a área da cidade 1 (em km2): ");
 scanf("%f" , &area1);

 printf("Digite o PIB da cidade 1 (em bilhões R$): ");
 scanf("%f" , &pib1);

 //====== Leitura dos Dados da Carta 2 =======

 printf("Digite o nome da cidade 2: ");
 scanf("%s" , nomecidade2);

 printf("Digite o código da carta 2: ");
 scanf("%s" , codigo2);

 printf("Digite a populacao da cidade 2: ");
 scanf("%d" ,&populacao2); // Precisa colocar o & que indica a iniciação de uma variavel 

 printf("Digite a área da cidade 2 (em km2): ");
 scanf("%f", &area2);

 printf("Digite o PIB da cidade 2 (em bilhões R$): ");
 scanf("%f" , &pib2);

 // ======== Cálculos dos Novos Atributos ========

 densidade1 = populacao1 /area1;
 pib_per_capita1 = pib1 / populacao1;
 
 densidade2 = populacao2 / area2;
 pib_per_capita2 = pib2 / populacao2;

 // ====== EXIBIÇÃO DOS DADOS =======

 printf("\n===== CARTA 1 =====\n");
 printf("Cidade: %s\n", nomecidade1);
 printf("Código: %s\n", codigo1);
 printf("População: %d habitantes\n", populacao1);
 printf("Área: %.2f km2\n", area1);
 printf("PIB: R$ %.2f bilhões\n", pib1);
 printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
 printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);


 printf("\n===== CARTA 2 =====\n");
 printf("Cidade: %s\n",nomecidade2);
 printf("Código: %s\n", codigo2);
 printf("População: %d habitantes\n", populacao2);
 printf("Área: %.2f km2\n" , area2);
 printf("PIB: R$ %.2f bilhões\n",pib2);
 printf("Densidade Populacional: %.2f hab/km2\n",densidade2);
 printf("PIB per Capita: R$ %.2f\n",pib_per_capita2);

 return 0;
 }