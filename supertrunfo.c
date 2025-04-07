#include<stdio.h>
   
    int main(){

        //Variáveis_cidade01:
        char estado01[40];
        char codigo01[40];
        char cidade01[100];
        int populacao01;
        float area01;
        float pib01;
        int nturismo01;
        float densidade01 = populacao01 / area01;
        float pibcapita01 = (float) pib01 / populacao01;


        //CARTA01:
        // ENTRADA DE DADOS:

        printf("______________#####______________\n");
        printf("Carta nº1: \n");

        printf("Insira o Código do Estado: "); //Estado:
        scanf(" %[^\n]", estado01);   

        printf("Insira o Código da Carta: "); //Cod.Carta:
        scanf(" %[^\n]", codigo01);

        printf("Insira o nome da cidade: "); //Cidade:
        scanf(" %[^\n]", cidade01);
       
        printf("Insira o Nº Populacional: "); //Populacao:
        scanf("%d", &populacao01);

        printf("Insira a Área total da cidade: "); //Area total:
        scanf( "%f", &area01);

        printf("Insira o PIB referente: "); //PIB:
        scanf("%f", &pib01);

        printf("Nº de Pontos Turísticos? "); //Turismo:
        scanf("%d", &nturismo01);

        printf("Insira a Densidade Populacional: ");
        scanf("%f", &densidade01);



            //SAÍDA DE DADOS_01:

            printf("Estado: %s\n", estado01);
            printf("Código da Carta: %s\n", codigo01);
            printf("Cidade: %s\n", cidade01);
            printf("População: %d habitantes \n", populacao01);
            printf("Área total %.3f Km². \n", area01);
            printf("PIB: %.3f Bilhões de Reais \n", pib01);
            printf("São %d pontos turísticos. \n", nturismo01);
            printf("Densidade Populacional: %.2f hab/km²", densidade01);
            printf("PIB per Capita: %.2f reais", pibcapita01);
            
            
        //Variáveis_cidade02:
        char estado02[40];
        char codigo02[40];
        char cidade02[100];
        int populacao02;
        float area02;
        float pib02;
        int nturismo02;
            
            
        //Cadastro_carta02:

        // ENTRADA DE DADOS_02:
            
        printf("\n");
        printf("______________#####______________\n");
        printf("Carta nº2: \n");
            
        printf("Insira o Código do Estado: "); //Estado:
        scanf(" %[^\n]", estado02);   
            
        printf("Insira o Código da Carta: "); //Cod.Carta:
        scanf(" %[^\n]", cidade02);
            
        printf("Insira o nome da cidade: "); //Cidade:
        scanf(" %[^\n]", cidade02);
                   
        printf("Insira o Nº Populacional: "); //Populacao:
        scanf("%d", &populacao02);
            
        printf("Insira a Área total da cidade: "); //Area total:
        scanf( "%f", &area02);
            
        printf("Insira o PIB referente: "); //PIB:
        scanf("%f", &pib02);
            
        printf("Nº de Pontos Turísticos? "); //Turismo:
        scanf("%d", &nturismo02);
                   
            
        //SAÍDA DE DADOS_02:
            
        printf("Estado: %s\n", estado02);
        printf("Código da Carta: %s\n", codigo02);
        printf("Cidade: %s\n", cidade02);
        printf("População: %d habitantes \n", populacao02);
        printf("Área total %.3f Km². \n", area02);
        printf("PIB: %.3f Bilhões de Reais \n", pib02);
        printf("São %d pontos turísticos. \n", nturismo02);
            
return 0;
            
}