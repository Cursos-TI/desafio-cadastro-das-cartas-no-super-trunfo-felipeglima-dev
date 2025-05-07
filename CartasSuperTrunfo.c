#include<stdio.h>
#include<locale.h>
   
    int main(){
        setlocale(LC_ALL, "Portuguese_Brazil");

        /*Menu Interativo por Switch*/

        int opcao;

        printf("\n");
        printf("---------SUPER TRUNFO: MENU PRINCIPAL----------\n");
        printf("Escolha uma das opções abaixo:\n");
        printf("1. Regras:\n");
        printf("2. Iniciar Jogo:\n");
        printf("3. Sair:\n");
        scanf("%d",&opcao);
    
        switch(opcao){
            case 1: 
                printf("Insira as informações correspondentes de duas cartas Super Trunfo para iniciar as batalhas.\n");
            case 2: 
                printf("Iniciando o jogo...\n");


        /* Variáveis da Carta 01*/

        char codigo_estado1[90];
        char pais1[90];
        char estado1[90];
        char codigo_cidade1[90];
        char cidade1[100];
        float populacao1, area1, pib1;
        int nturismo1;
        float densidade_populacional1, pib_per_capita1, inverso_densidade_populacional1;
        double superpoder_1;

        /*Entrada de dados para Carta 01:*/

        printf("#______________Cadastrando suas cartas_______________#\n");
        printf("\n");
        printf("---Cadastre sua primeira carta---\n");
        printf("\n");

        printf("Insira o país da correspondente:\n");
        scanf("&[^\n]", pais1);

        printf("Insira o código do Estado de A a C: Ex.(A): ");
        scanf(" %[^\n]", codigo_estado1);
        
        printf("Insira o Nome do Estado: ");
        scanf(" %[^\n]", estado1);

        printf("Insira o Código da Carta de A a C entre 0 e 4: Ex.(A01): "); 
        scanf(" %[^\n]", codigo_cidade1);

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

        /* Cálculos para Carta 01: */

        densidade_populacional1 = populacao1 / area1;
        pib_per_capita1 = pib1 / populacao1;
        inverso_densidade_populacional1 = 1 / densidade_populacional1;
        superpoder_1 = populacao1 + area1 + pib1 + (float) nturismo1 +
        pib_per_capita1 + inverso_densidade_populacional1;

        
        /*Saída de Dados da Carta 01:*/

            printf("País: %s\n", pais1);
            printf("Código do Estado: %s\n", codigo_estado1);
            printf("Nome do Estado: %s\n", estado1);
            printf("Código da Carta: %s\n", codigo_cidade1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %.3f Habitantes \n", populacao1);
            printf("Área Total %.3f Km². \n", area1);
            printf("PIB: %.3f Bilhões de Reais \n", pib1);
            printf("São %d pontos turísticos. \n", nturismo1);
            printf("Densidade Populacional: %.3f hab/km²\n", populacao1 / area1);
            printf("PIB per Capita: %.3f reais\n", pib1 / populacao1);
            printf ("Inverso Densidade Populacional: %.3f\n", inverso_densidade_populacional1);
            printf("Super Poder: %.3f pontos\n", superpoder_1);
            printf("Computando..... ");
            printf("Primeira carta cadastrada com sucesso!\n");
            printf("\n");
            printf("-----------------------------------\n");

        /* Variáveis da carta 02:*/

        char codigo_estado2[90];
        char pais2[90];
        char estado2[90];
        char codigo_cidade2[90];
        char cidade2[100];
        float populacao2, area2, pib2;
        int nturismo2;
        float densidade_populacional2, pib_per_capita2, inverso_densidade_populacional2;
        double superpoder_2;


        /* Entrada de dados da carta 02:*/

        printf("\n");
        printf("---Cadastre sua segunda carta---\n");
        printf("\n");

        printf("Insira o país correspondente:\n");
        scanf("%[^\n]", pais2);

        printf("Insira o código do Estado entre D e F: Ex.(D): ");
        scanf(" %[^\n]", codigo_estado2);

        printf("Insira o Nome do Estado: ");
        scanf(" %[^\n]", estado2);

        printf("Insira o Código da Carta de D e F entre 5 a 7: Ex.(D02) "); 
        scanf(" %[^\n]", codigo_cidade2);

        printf("Insira o nome da cidade: "); 
        scanf(" %[^\n]", cidade2);

        printf("Insira o Nº Populacional: "); 
        scanf("%f", &populacao2);

        printf("Insira a Área Total da cidade: ");
        scanf( "%f", &area2);

        printf("Insira o PIB referente: ");
        scanf("%f", &pib2);

        printf("Nº de Pontos Turísticos: ");
        scanf("%d", &nturismo2);

        /*Cálculos da Carta 02:*/

        densidade_populacional2 = populacao2 / area2;
        pib_per_capita2 = pib2 / populacao2;
        inverso_densidade_populacional2 = 1 / densidade_populacional2;
        superpoder_2 = populacao2 + area2 + pib2 + (float) nturismo2 +
        pib_per_capita2 + inverso_densidade_populacional2;


        /*Saída de dados da carta 02:*/

            printf("País: %s\n", pais2);
            printf("Código do Estado: %s\n", codigo_estado2);
            printf("Nome do Estado: %s\n", estado2);
            printf("Código da Carta: %s\n", codigo_cidade2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %.3f Habitantes \n", populacao2);
            printf("Área Total %.3f Km². \n", area2);
            printf("PIB: %.3f Bilhões de Reais \n", pib2);
            printf("São %d pontos turísticos. \n", nturismo2);
            printf("Densidade Populacional: %.3f hab/km²\n", populacao2 / area2);
            printf("PIB per Capita: %.3f reais\n", pib1 / populacao2);
            printf ("Inverso Densidade Populacional: %.3f\n", inverso_densidade_populacional2);
            printf("Super Poder: %.3f pontos\n", superpoder_2);
            printf("Computando..... ");
            printf("Segunda carta cadastrada com sucesso!\n");
            printf("\n");
            printf("-----------------Cartas Cadastradas------------------\n");


            /* Comparação de cartas por decisão composta:*/

                printf("\n");
                printf("----------1º Batalha-----------\n");

                if(populacao1>populacao2){
                printf("A primeira carta venceu!!\n");
                } else{
                printf("A segunda carta venceu!!\n");
                }
                if(area1>area2){
                printf("A primeira carta Venceu!!\n");
                } else{
                printf("A segunda carta venceu!!\n");
                }
                if(pib1>pib2){
                printf("A primeira carta Venceu!!\n");
                } else{
                printf("A segunda carta venceu!!\n");
                }
                if(nturismo1>nturismo2){
                printf("A primeira carta Venceu!!\n");
                } else{
                printf("A segunda carta venceu!!\n");
                }
                if(densidade_populacional1>densidade_populacional2){
                printf("A primeira carta Venceu!!\n");
                } else{
                printf("A segunda carta venceu!!\n");
                }
                if(pib_per_capita1>pib_per_capita2){
                printf("A primeira carta Venceu!!\n");
                } else{
                printf("A segunda carta venceu!!\n");
                }
                if(superpoder_1>superpoder_2){
                printf("A primeira carta Venceu!!\n");
                } else{
                printf("A segunda carta venceu!!\n");
                }

            case 3:
            printf("Obrigado por participar. Saindo...\n");


            
        }
        

return 0;

}