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
   scanf("%f",&populacao);

   printf("Área em Km \n");
   scanf("%f",&Area_em_Km);

   printf("PIB: \n");
   scanf("%f", &PIB);

   printf("Número de Pontos Turísticos: \n");
   scanf("%d", &Numero_de_Pontos_Turisticos);

   printf("Estado: %s \n" , Estado);
   printf("Código da Carta: %s \n" , Codigo_da_carta);
   print("Nome da Cidade: %s \n" , Nome_da_cidade );
   print("População: %.2f \n" , populacao );
   print("Área em Km: %.2f \n" , Area_em_Km);
   printf("PIB: %.2f \n" , Area_em_Km);
   printf("Pontos Turísticos: %d \n" , Numero_de_Pontos_Turisticos);

   



   




   













   
    return 0;
}
