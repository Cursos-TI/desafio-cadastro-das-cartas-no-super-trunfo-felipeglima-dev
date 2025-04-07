#include<stdio.h>
#include<locale.h>
   
    int main(){
        setlocale(LC_ALL, "portuguese_Brazil");

        //Variáveis_cidade01:
        char estado1[40];
        char codigo1[40];
        char cidade1[100];
        int populacao1;
        float area1;
        float pib1;
        int nturismo1;
        float densidade_populacional1;
        densidade_populacional1 = populacao1 / area1;
        float pib_per_capita1;
        pib_per_capita1 = pib1 / populacao1;

        //CARTA01:

        //ENTRADA DE DADOS_01:

        printf("#______________#####______________#\n");
        printf("Carta nº1: \n");

        printf("Insira o Código do Estado: "); 
        scanf(" %[^\n]", estado1);   

        printf("Insira o Código da Carta: "); 
        scanf(" %[^\n]", codigo1);

        printf("Insira o nome da cidade: "); 
        scanf(" %[^\n]", cidade1);
       
        printf("Insira o Nº Populacional: "); 
        scanf("%d", &populacao1);

        printf("Insira a Área Total da cidade: ");
        scanf( "%f", &area1);

        printf("Insira o PIB referente: ");
        scanf("%f", &pib1);

        printf("Nº de Pontos Turísticos? ");
        scanf("%d", &nturismo1);


            //SAÍDA DE DADOS_01:

            printf("Estado: %s\n", estado1);
            printf("CÓdigo da Carta: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d habitantes \n", populacao1);
            printf("Área Total %.3f Km². \n", area1);
            printf("PIB: %.3f Bilhõees de Reais \n", pib1);
            printf("São %d pontos turísticos. \n", nturismo1);
            printf("Densidade Populacional: %.3f hab/km²\n", densidade_populacional1);
            printf("PIB per Capita: %.3f reais\n", pib_per_capita1);
            printf("CARTA 01 CADASTRADA COM SUCESSO!\n");

            
        //Variáveis Cidade02:
        char estado2[40];
        char codigo2[40];
        char cidade2[100];
        int populacao2;
        float area2;
        float pib2;
        int nturismo2;
        float densidade_populacional2;
        densidade_populacional2 = populacao2 / area2;
        float pib_per_capita2;
        pib_per_capita2 = pib2 / populacao2;
            
        //CARTA02:

        //ENTRADA DE DADOS_02:
            
        printf("\n");
        printf("______________#####______________\n");
        printf("Carta nº2: \n");
            
        printf("Insira o Código do Estado: "); //Estado:
        scanf(" %[^\n]", estado2);   
            
        printf("Insira o Código da Carta: "); //Cod.Carta:
        scanf(" %[^\n]", codigo2);
            
        printf("Insira o nome da cidade: "); //Cidade:
        scanf(" %[^\n]", cidade2);
                   
        printf("Insira o Número Populacional: "); //Populacao:
        scanf("%d", &populacao2);
            
        printf("Insira a Área total da cidade: "); //Area total:
        scanf( "%f", &area2);
            
        printf("Insira o PIB referente: "); //PIB:
        scanf("%f", &pib2);
            
        printf("Número de Pontos Turísticos? "); //Turismo:
        scanf("%d", &nturismo2);
                   
            //SAÍDA DE DADOS_02:
            
            printf("Estado: %s\n", estado2);
            printf("Código da Carta: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d habitantes \n", populacao2);
            printf("Área Total %.3f Km². \n", area2);
            printf("PIB: %.3f Bilhões de Reais \n", pib2);
            printf("São %d pontos turísticos. \n", nturismo2);
            printf("Densidade Populacional: %.3f hab/km²\n", densidade_populacional2);
            printf("PIB per Capita: %.3f reais\n", pib_per_capita2);
            printf("CARTA 02 CADASTRADA COM SUCESSO!\n");

return 0;
            
}