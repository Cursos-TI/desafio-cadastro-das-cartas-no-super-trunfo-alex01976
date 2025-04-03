#include <stdio.h>


int main() {
    char EstadoA [50];
    char Codigo_da_cartaA [50];
    char Nome_da_cidadeA[50];
    int populacaoA;
    float Area_em_KmA;
    float PIBA;
    int Numero_de_Pontos_TuristicosA;
    float Densidade_Populacional_A;
    float PIB_Per_Capita_A; 

    char EstadoB [50];
    char Codigo_da_cartaB [50];
    char Nome_da_cidadeB [50];
    int populacaoB;
    float Area_em_kmB;
    float PIB_B;
    int Numero_de_Pontos_TuristicosB;
    float Densidade_Populacional_B;
    float PIB_Per_Capita_B;

   printf("Desafio Super trunfo - Novato!\n\n");
    
   printf("Estado carta A\n\n");

   printf("Digite o Estado da carta A: \n");
   scanf("%s",&EstadoA);

   printf("Digite o Código da Carta: \n");
   scanf("%s",&Codigo_da_cartaA);

   printf("Digite o nome da cidade: \n");
   scanf("%s", &Nome_da_cidadeA);

   printf("População: \n");
   scanf("%d",&populacaoA);

   printf("Área em Km \n");
   scanf("%f",&Area_em_KmA);

   printf("PIB: \n");
   scanf("%f", &PIBA);

   printf("Número de Pontos Turísticos: \n");
   scanf("%d", &Numero_de_Pontos_TuristicosA);

   Densidade_Populacional_A = populacaoA / Area_em_KmA; 
   PIB_Per_Capita_A = PIBA / populacaoA;


   printf("Estado carta B\n");

   printf("Estado B: \n");
   scanf("%s", &EstadoB);

   printf("Códidigo: \n");
   scanf("%s", &Codigo_da_cartaB);

   printf("Cidade: \n");
   scanf("%s", &Nome_da_cidadeB);

   printf("População: \n");
   scanf("%d", &populacaoB);
    
   printf("Área: \n");
   scanf("%f", &Area_em_kmB);
   
   printf("PIB: \n");
   scanf("%f",&PIB_B);

   printf("Número de Pontos Turísticos: \n");
   scanf("%d", &Numero_de_Pontos_TuristicosB);

   Densidade_Populacional_B = populacaoB / Area_em_kmB;
   PIB_Per_Capita_B = PIB_B / populacaoB;


   printf("Estado da Carta: %s \n" , EstadoA);
   printf("Código da Carta: %s \n" , Codigo_da_cartaA);
   printf("A Cidade é: %s \n" , Nome_da_cidadeA );
   printf("A População é de: %f \n" , populacaoA );
   printf(" A Área em Km é de: %.2f \n" , Area_em_KmA);
   printf("O PIB é: %.2f \n" , PIBA);
   printf("Os Pontos Turísticos são: %d \n" , Numero_de_Pontos_TuristicosA);

   printf("Estado: %s \n", EstadoB);
   printf("Código: %s \n", Codigo_da_cartaB);
   printf("Cidade: %s \n", Nome_da_cidadeB);
   printf("População: %d \n", populacaoB);
   printf("Área: %.2f \n", Area_em_kmB);
   printf("PIB: %.2f \n", PIB_B);
   printf("Pontos Turísticos: %d \n", Numero_de_Pontos_TuristicosB);
   


   
    return 0;
}
