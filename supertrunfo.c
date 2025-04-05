#include<stdio.h>
   
    int main(){
        
        //Variáveis_cidade01:
        char estado01[20];
        char codigo01[20];
        char cidade01[100];
        int populacao01;
        float area01;
        float pib01;
        int nturismo01;


        //Cadastro_carta01:
        printf("Carta nº1: \n");

        printf("Insira o Código do Estado: ");
        scanf("%s", &estado01);   
        printf("Estado: %s\n", estado01);

        printf("Insira o Código da Carta: ");
        scanf("%s", &codigo01);
        printf("Código da Carta: %s\n", codigo01);

        printf("Insira o nome da cidade: ");
        scanf("%s", &cidade01);
        printf("Cidade: %s\n", cidade01);

        printf("Insira o Nº Populacional: ");
        scanf("%d", &populacao01);
        printf("População: %d habitantes \n", populacao01);

        printf("Insira a área total da cidade: ");
        scanf( "%f", &area01);
        printf("Área total %.3f Km². \n", area01);

        printf("Insira o PIB referente: ");
        scanf("%f", &pib01);
        printf("PIB: %.3f Bilhões de Reais \n", pib01);

        printf("Nº de Pontos Turísticos? ");
        scanf("%d", &nturismo01);
        printf("São %d pontos turísticos. \n", nturismo01);


        return 0;

}