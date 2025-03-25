#include <stdio.h>


int main() {
    char Estado [50];
    char Codigo_da_carta[50];
    char Nome_da_cidade[50];
    int populacao;
    float Area_em_Km;
    float PIB;
    int Numero_de_Pontos_Turisticos;

   printf("Desafio Super trunfo - Novato!\n\n");
    
   printf("Estado A\n\n");

   printf("Digite o Estado da carta A: \n");
   scanf("%s",&Estado);

   printf("Digite o Código da Carta: \n");
   scanf("%s",&Codigo_da_carta);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &Nome_da_cidade);

   printf("População: \n");
   scanf("%d",&populacao);

   printf("Área em Km \n");
   scanf("%f",&Area_em_Km);

   printf("PIB: \n");
   scanf("%f", &PIB);

   printf("Número de Pontos Turísticos: \n");
   scanf("%d", &Numero_de_Pontos_Turisticos);

   printf("Estado B\n\n");

   printf("Digite o Estado da carta B: \n");
   scanf("%s", &Estado);

   printf("Digite o Códidigo da carta: \n");
   scanf("%S", &Codigo_da_carta);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &Nome_da_cidade);

   printf("População: \n");
   scanf("%d", &populacao);
    
   printf("Área em Km:" \n);
   scanf("%f", &Area_em_Km);
   
   printf("PIB: \n");
   scanf("%f",&PIB);

   printf("Número de Pontos Turísticos: \n");
   scanf("%d", &Numero_de_Pontos_Turisticos);


   printf("Estado da Carta: %s \n" , Estado);
   printf("Código da Carta: %s \n" , Codigo_da_carta);
   printf("A Cidade é: %s \n" , Nome_da_cidade );
   printf("A População é de: %.2f \n" , populacao );
   printf(" A Área em Km é de: %.2f \n" , Area_em_Km);
   printf("O PIB é: %.2f \n" , PIB);
   printf("Os Pontos Turísticos são: %d \n" , Numero_de_Pontos_Turisticos);
   













   
    return 0;
}
