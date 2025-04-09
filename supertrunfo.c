#include<stdio.h>
#include<locale.h>
   
    int main(){
        setlocale(LC_ALL, "portuguese_Brazil");

        //Variáveis_cidade01:

        char estado1[90];
        char codigo1[90];
        char cidade1[100];
        float populacao1;
        float area1;
        float pib1;
        int nturismo1;
        float densidade_populacional1;
        densidade_populacional1 = populacao1 / area1;
        float pib_per_capita1;
        pib_per_capita1 = pib1 / populacao1;
        float inverso_densidade_populacional1;
        inverso_densidade_populacional1 = 1 / densidade_populacional1;
        float super_poder1;
        super_poder1 = populacao1 + area1 + pib1 + (float)nturismo1 + pib_per_capita1 + inverso_densidade_populacional1; 


        //CARTA01:

        //ENTRADA DE DADOS_01:

        printf("#______________#### DESAFIO SUPERTRUNFO ####______________#\n");
        printf("\n");
        printf("CADASTRE SUA 1º CARTA(01)! \n");
        printf("\n");

        printf("Insira o código do Estado: ");
        scanf(" %[^\n]", estado1);
        
        printf("Insira o Nome do Estado: ");
        scanf(" %[^\n]", estado1);

        printf("Insira o Código da Carta: "); 
        scanf(" %[^\n]", codigo1);

        printf("Insira o nome da cidade: "); 
        scanf(" %[^\n]", cidade1);
       
        printf("Insira o Nº Populacional: "); 
        scanf("%f", &populacao1);

        printf("Insira a Área Total da cidade: ");
        scanf( "%f", &area1);

        printf("Insira o PIB referente: ");
        scanf("%f", &pib1);

        printf("Nº de Pontos Turísticos: ");
        scanf("%d", &nturismo1);

            //SAÍDA DE DADOS_CARTA01:

            printf("Código do Estado: %s\n", estado1);
            printf("Nome do Estado: %s\n", estado1);
            printf("Código da Carta: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %.3f habitantes \n", populacao1);
            printf("Área Total %.3f Km². \n", area1);
            printf("PIB: %.3f Bilhões de Reais \n", pib1);
            printf("São %d pontos turísticos. \n", nturismo1);
            printf("Densidade Populacional: %.3f hab/km²\n", populacao1 / area1);
            printf("PIB per Capita: %.3f reais\n", pib1 / populacao1);
            printf("Super Poder: %f pontos\n", super_poder1);
            printf("Computando..... ");
            printf("CARTA (01) CADASTRADA COM SUCESSO!\n");
            printf("\n");
            printf("-----------------------------------\n");

return 0;

}