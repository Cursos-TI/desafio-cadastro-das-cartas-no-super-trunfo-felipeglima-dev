#include<stdio.h>
#include<locale.h>
   
    int main(){
        setlocale(LC_ALL, "portuguese_Brazil");

        //Variáveis_cidade01:
        char estado1[90];
        char codigo1[90];
        char cidade1[100];
        unsigned long int populacao1;
        float area1;
        float pib1;
        int nturismo1;
        float densidade_populacional1;
        densidade_populacional1 = populacao1 / area1;
        float pib_per_capita1;
        pib_per_capita1 = pib1 / populacao1;
        float superpoder1;
        superpoder1 = populacao1 + area1 + pib1 + nturismo1 + pib_per_capita1 + densidade_populacional1;

        //CARTA01:

        //ENTRADA DE DADOS_01:

        printf("#______________#####______________#\n");
        printf("Carta nº1: \n");

        printf("Insira o Código do Estado: ");
        scanf(" %[^\n]", estado1);
        
        printf("Insira o Nome do Estado: ");
        scanf(" %[^\n]", estado1);

        printf("Insira o Código da Carta: "); 
        scanf(" %[^\n]", codigo1);

        printf("Insira o nome da cidade: "); 
        scanf(" %[^\n]", cidade1);
       
        printf("Insira o Nº Populacional: "); 
        scanf("%u", &populacao1);

        printf("Insira a Área Total da cidade: ");
        scanf( "%f", &area1);

        printf("Insira o PIB referente: ");
        scanf("%f", &pib1);

        printf("Nº de Pontos Turísticos: ");
        scanf("%d", &nturismo1);


            //SAÍDA DE DADOS_01:

            printf("Código do Estado: %s\n", estado1);
            printf("Nome do Estado: %s\n", estado1);
            printf("Código da Carta: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %u habitantes \n", populacao1);
            printf("Área Total %.3f Km². \n", area1);
            printf("PIB: %.3f Bilhões de Reais \n", pib1);
            printf("São %d pontos turísticos. \n", nturismo1);
            printf("Densidade Populacional: %.3f hab/km²\n", populacao1 / area1);
            printf("PIB per Capita: %.3f reais\n", pib1 / populacao1);
            printf("Super Poder: %.2f pontos\n", superpoder1);
            printf("CARTA 01 CADASTRADA COM SUCESSO!\n");

return 0;

}