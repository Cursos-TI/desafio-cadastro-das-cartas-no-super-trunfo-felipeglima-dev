/*DESAFIO SUPER TRUNFO - TEMA 2 - NÍVEL AVENTURERO.*/

#include<stdio.h>
#include<locale.h>
   
    int main(){

        /*Localizando formato de código para eventuais problemas de acentuação.
        */
        setlocale(LC_ALL, "Portuguese_Brazil");

        /*Menu Interativo por Switch para navegar pelo jogo Super Trunfo*/

        /* Variáveis do Menu Principal:*/

        int opcao;
        int regras1;

        /*Saída inicial com as opções para usuário.*/

        printf("\n");
        printf("---------SEJA BEM-VINDO AO JOGO SUPER TRUNFO----------\n");
        printf("---------MENU PRINCIPAL----------\n");
        printf("Escolha uma das opções abaixo:\n");
        printf("1. Regras:\n");
        printf("2. Iniciar Jogo:\n");
        printf("3. Sair:\n");
        scanf("%d",&opcao);
    
        /*Bloco de código do menu principal. Modo switch.*/

        switch(opcao){
            case 1: 
            printf("---------REGRAS----------\n");
            printf("---------Por favor, escolha entre a opção 1 e 2----------\n");
            scanf("%d", &regras1);
                    switch (regras1){
                    case 1: 
                            printf("---------1º REGRA----------\n");
                            printf("Você deve inserir as informações correspondentes às duas cartas Super Trunfo quando for solicitado pelo Terminal.\n");
                    break;
                    case 2:
                            printf("---------2º REGRA----------\n");
                            printf("Você deverá escolher atributos para batalhar quando for solicitado pelo terminal.\n");
                    break;
                    default: 
                            printf("Operação Inválida! Por favor, escolha opções entre 1 e 2.\n");
                    break;
                    }
            case 2: 
            printf("---------INICIANDO O JOGO----------\n");

        /* Variáveis referentes à Primeira Carta.*/

                    char codigo_estado1[90];
                    char pais1[90];
                    char estado1[90];
                    char codigo_cidade1[90];
                    char cidade1[100];
                    float populacao1, area1, pib1;
                    int nturismo1;
                    float densidade_populacional1, pib_per_capita1, inverso_densidade_populacional1;
                    double superpoder_1;

        /*Entrada de dados pelo usuário da Primeira Carta.*/

                printf("---------CADASTRANDO CARTAS----------\n");
                printf("\n");
                printf("---------Cadastre a Primeia Carta----------\n");
                printf("\n");

                printf("Insira o país correspondente:\n");
                scanf(" %[^\n]", pais1);

                printf("Insira o código do Estado de A a C: Ex.(A):\n");
                scanf(" %[^\n]", codigo_estado1);
        
                printf("Insira o Nome do Estado:\n");
                scanf(" %[^\n]", estado1);

                printf("Insira o Código da Carta de A a C entre 0 e 4: Ex.(A01):\n"); 
                scanf(" %[^\n]", codigo_cidade1);

                printf("Insira o nome da cidade:\n"); 
                scanf(" %[^\n]", cidade1);
       
                printf("Insira o Nº Populacional:\n"); 
                scanf("%f", &populacao1);

                printf("Insira a Área Total da cidade:\n");
                scanf( "%f", &area1);

                printf("Insira o PIB referente:\n");
                scanf("%f", &pib1);

                printf("Nº de Pontos Turísticos:\n");
                scanf("%d", &nturismo1);

        /* Cálculos referentes à Primeira Carta. */

                    densidade_populacional1 = populacao1 / area1;
                    pib_per_capita1 = pib1 / populacao1;
                    inverso_densidade_populacional1 = 1 / densidade_populacional1;
                    superpoder_1 = populacao1 + area1 + pib1 + (float) nturismo1 +
                    pib_per_capita1 + inverso_densidade_populacional1;

        
        /*Saída de Dados da Primeira Carta.*/

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
                printf(".....Computando..... ");
                printf("---------Primeira Carta cadastrada com sucesso!----------\n");
                printf("\n");
                printf("-----------------------------------\n");

        /* Variáveis referentes à Segunda Carta.*/

                    char codigo_estado2[90];
                    char pais2[90];
                    char estado2[90];
                    char codigo_cidade2[90];
                    char cidade2[100];
                    float populacao2, area2, pib2;
                    int nturismo2;
                    float densidade_populacional2, pib_per_capita2, inverso_densidade_populacional2;
                    double superpoder_2;


        /* Entrada de dados pelo usuário da Segunda carta.*/

                printf("---------Cadastre a Segunda Carta----------\n");
                printf("\n");

                printf("Insira o país correspondente:\n");
                scanf(" %[^\n]", pais2);

                printf("Insira o código do Estado entre D e F: Ex.(D):\n");
                scanf(" %[^\n]", codigo_estado2);

                printf("Insira o Nome do Estado:\n");
                scanf(" %[^\n]", estado2);

                printf("Insira o Código da Carta de D e F entre 5 a 7: Ex.(D02):\n"); 
                scanf(" %[^\n]", codigo_cidade2);

                printf("Insira o nome da cidade:\n"); 
                scanf(" %[^\n]", cidade2);

                printf("Insira o Nº Populacional:\n"); 
                scanf("%f", &populacao2);

                printf("Insira a Área Total da cidade:\n");
                scanf( "%f", &area2);

                printf("Insira o PIB referente:\n");
                scanf("%f", &pib2);

                printf("Nº de Pontos Turísticos:\n");
                scanf("%d", &nturismo2);

        /*Cálculos referentes à Segunda Carta.*/

                    densidade_populacional2 = populacao2 / area2;
                    pib_per_capita2 = pib2 / populacao2;
                    inverso_densidade_populacional2 = 1 / densidade_populacional2;
                    superpoder_2 = populacao2 + area2 + pib2 + (float) nturismo2 +
                    pib_per_capita2 + inverso_densidade_populacional2;

        /*Saída de dados referentes à Segunda Carta:*/

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
                printf(".....Computando..... ");
                printf("---------Segunda Carta cadastrada com sucesso!----------\n");
                printf("\n");
                printf("-----------------Você já pode batalhar!------------------\n");

            /* Menu secundário para batalha de cartas escolhidas pelo usuário:*/
    
                printf("\n");
                printf("----------Iniciando 1º Batalha-----------\n");
                printf("\n");

                        int escolha1;

            /*Escolha de um atributo pelo usuário para batalhar.*/

                    printf("---------1. MENU SUPER TRUNFO----------\n");
                    printf("\n");
                    printf("Escolha um dos atributos abaixo para batalhar:\n");
                    printf("1. População:\n");
                    printf("2. Área Total:\n");
                    printf("3. PIB:\n");
                    printf("4. Nº de Pontos Turísticos;\n");
                    printf("5. Densidade Demográfica:\n");
                    scanf("%d", &escolha1);

            /*Switch de atributos para batalha de duas cartas.*/

                        switch(escolha1){
                            case 1:
                                printf("1. Atributo Escolhido: População:\n");
                                printf("Primeira Carta: País %s --- Cidade %s", pais1, cidade1);
                                printf("Segunda Carta: País %s --- Cidade %s", pais2, cidade2);
                            if(populacao1 > populacao2){
                                printf("---Resultado: Primeira Carta País %s -- Cidade %s venceu!---\n", pais1, cidade1);
                            } else if (populacao1 < populacao2) {
                                printf("---Resultado: Segunda Carta País %s -- Cidade %s venceu!---\n", pais2, cidade2);
                            } else {
                                printf("---Resultado: Empatou!!---\n");
                            }
                            break;
                            case 2:
                                printf("1. Atributo Escolhido: Área Total:\n");
                                printf("Primeira Carta: País %s --- Cidade %s", pais1, cidade1);
                                printf("Segunda Carta: País %s --- Cidade %s", pais2, cidade2);
                            if(area1 > area2){
                                printf("---Resultado: Primeira Carta País %s -- Cidade %s venceu!---\n", pais1, cidade1);
                            } else if (area1 < area2) {
                                printf("---Resultado: Segunda Carta País %s -- Cidade %s venceu!---\n", pais2, cidade2);
                            } else {
                                printf("---Resultado: Empatou!!---\n");
                            }
                            break;
                            case 3:
                                printf("1. Atributo Escolhido: PIB:\n");
                                printf("Primeira Carta: País %s --- Cidade %s", pais1, cidade1);
                                printf("Segunda Carta: País %s --- Cidade %s", pais2, cidade2);
                            if(pib1 > pib1){
                                printf("---Resultado: Primeira Carta País %s -- Cidade %s venceu!---\n", pais1, cidade1);
                            } else if (pib1 < pib2) {
                                printf("---Resultado: Segunda Carta País %s -- Cidade %s venceu!---\n", pais2, cidade2);
                            } else {
                                printf("---Resultado: Empatou!!---\n");
                            }
                            break;
                            case 4:
                                printf("1. Atributo Escolhido: Nº de Pontos Turísticos:\n");
                                printf("Primeira Carta: País %s --- Cidade %s", pais1, cidade1);
                                printf("Segunda Carta: País %s --- Cidade %s", pais2, cidade2);
                            if(nturismo1 > nturismo2){
                                printf("---Resultado: Primeira Carta País %s -- Cidade %s venceu!---\n", pais1, cidade1);
                            } else if (nturismo1 < nturismo2) {
                                printf("---Resultado: Segunda Carta País %s -- Cidade %s venceu!---\n", pais2, cidade2);
                            } else {
                                printf("---Resultado: Empatou!!---\n");
                            }
                            break;
                            case 5:
                                printf("1. Atributo Escolhido: Densidade Demográfica:\n");
                                printf("Primeira Carta: País %s --- Cidade %s", pais1, cidade1);
                                printf("Segunda Carta: País %s --- Cidade %s", pais2, cidade2);
                            if(densidade_populacional1 < densidade_populacional2){
                                printf("---Resultado: Primeira Carta País %s -- Cidade %s venceu!---\n", pais1, cidade1);
                            } else if (densidade_populacional1 > densidade_populacional2) {
                                printf("---Resultado: Segunda Carta País %s -- Cidade %s venceu!---\n", pais2, cidade2);
                            } else {
                                printf("---Resultado: Empatou!!---\n");
                            }
                            break;
                            default:
                                printf("Operação Inválida. Por favor, escolha uma opção de 1 a 5.\n");
                            break;
                            } //Fim do switch de escolha da 1ª batalha.


            /*Entrada no terminal para segunda batalha entre dois atributos.*/
            
                    printf("\n");
                    printf("----------Iniciando 2º Batalha-----------\n");
                    printf("\n");        

            /*Variáveis necessárias para escolha do menu da 2ª batalha.*/

                        int carta1atributo1, carta1atributo2, carta2atributo1, carta2atributo2;
                        int resultado1, resultado2;


            /*Segundo menu de batalha com escolha de dois atributos pelo usuário de duas cartas.*/

                    printf("---------2. MENU SUPER TRUNFO----------\n");
                    printf("\n");
                    printf("----Primeira Carta----\n");
                    printf("Escolha dois atributos da Primeira Carta entre as opções abaixo para batalhar! \n");
                    printf("1. Área Total:\n");
                    printf("2. PIB:\n");
                    printf("3. Número de Pontos Turísticos;\n");
                    printf("4. Densidade Demográfica:\n");
                    printf("5. Super-Poder: \n");
                    printf("Insira o Primeiro Atributo: \n");
                    scanf("%d", &carta1atributo1);
            
            /* Switch de escolha com os cálculos dos atributos da primeira carta.*/

                        switch(carta1atributo1){
                            case 1:
                                printf("...Você escolheu o atributo Área Total. \n");
                                resultado1 = area1 > area2 ? 1 : 0;
                            break;
                            case 2: 
                                printf("...Você escolheu o atributo PIB. \n");
                                resultado1 = pib1 > pib2 ? 1 : 0;
                            break;
                            case 3:
                                printf("...Você escolheu o atributo Nº de Pontos Turísticos. \n");
                                resultado1 = nturismo1 > nturismo2 ? 1 : 0;
                            break;
                            case 4:
                                printf("...Você escolheu o atributo Densidade Demográfica. \n");
                                resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
                            break;
                            case 5:
                                printf("...Você escolheu o atributo Super-Poder. \n");
                                resultado1 = superpoder_1 > superpoder_2 ? 1 : 0;
                            break;
                            default:
                                Printf("Operação Inválida. Escolha uma opção de 1 a 5. \n");
                        }

                    printf("\n");
                    printf("Escolha o Segundo Atributo da Primeira Carta entre as opções abaixo para batalhar! \n");
                    printf("1. Área Total:\n");
                    printf("2. PIB:\n");
                    printf("3. Número de Pontos Turísticos;\n");
                    printf("4. Densidade Demográfica:\n");
                    printf("5. Super-Poder: \n");
                    printf("Insira o Segundo Atributo: \n");
                    scanf("%d", &carta1atributo2);
                
                    /* Condição para evitar escolha de um mesmo atributo.*/

                            if(carta1atributo1 == carta1atributo2){
                                printf("Você escolheu o mesmo atributo. Escolha um atributo diferente. \n");
                            } else {switch(carta1atributo2){
                                    case 1:
                                        printf("Você escolheu o atributo Área Total. \n");
                                        resultado2 = area1 > area2 ? 1 : 0;
                                    break;
                                    case 2: 
                                        printf("Você escolheu o atributo PIB. \n");
                                        resultado2 = pib1 > pib2 ? 1 : 0;
                                    break;
                                    case 3:
                                        printf("Você escolheu o atributo Nº de Pontos Turísticos. \n");
                                        resultado2 = nturismo1 > nturismo2 ? 1 : 0;
                                    break;
                                    case 4:
                                        printf("Você escolheu o atributo Densidade Demográfica. \n");
                                        resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
                                    break;
                                    case 5:
                                        printf("Você escolheu o atributo Super-Poder. \n");
                                        resultado2 = superpoder_1 > superpoder_2 ? 1 : 0;
                                    break;
                                    default:
                                        Printf("Operação Inválida. Escolha uma opção de 1 a 5. \n");
                                    }
                                }

            /*Escolha dos atributos para a Segunda Carta.*/

                    printf("\n");
                    printf("----Segunda Carta----\n");
                    printf("Escolha dois atributos da Segunda Carta entre as opções abaixo para batalhar! \n");
                    printf("1. Área Total:\n");
                    printf("2. PIB:\n");
                    printf("3. Número de Pontos Turísticos;\n");
                    printf("4. Densidade Demográfica:\n");
                    printf("5. Super-Poder: \n");
                    printf("Insira o Primeiro Atributo: \n");
                    scanf("%d", &carta2atributo1);
            
            /* Switch de escolha com os cálculos dos atributos da primeira carta.*/

                        switch(carta2atributo1){
                            case 1:
                                printf("...Você escolheu o atributo Área Total. \n");
                                resultado1 = area1 > area2 ? 1 : 0;
                            break;
                            case 2: 
                                printf("...Você escolheu o atributo PIB. \n");
                                resultado1 = pib1 > pib2 ? 1 : 0;
                            break;
                            case 3:
                                printf("...Você escolheu o atributo Nº de Pontos Turísticos. \n");
                                resultado1 = nturismo1 > nturismo2 ? 1 : 0;
                            break;
                            case 4:
                                printf("...Você escolheu o atributo Densidade Demográfica. \n");
                                resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
                            break;
                            case 5:
                                printf("...Você escolheu o atributo Super-Poder. \n");
                                resultado1 = superpoder_1 > superpoder_2 ? 1 : 0;
                            break;
                            default:
                                Printf("Operação Inválida. Escolha uma opção de 1 a 5. \n");
                        }

                    printf("\n");
                    printf("Escolha o Segundo Atributo da Segunda Carta entre as opções abaixo para batalhar! \n");
                    printf("1. Área Total:\n");
                    printf("2. PIB:\n");
                    printf("3. Número de Pontos Turísticos;\n");
                    printf("4. Densidade Demográfica:\n");
                    printf("5. Super-Poder: \n");
                    printf("Insira o Segundo Atributo: \n");
                    scanf("%d", &carta2atributo2);
                
                    /* Condição para evitar escolha de um mesmo atributo.*/

                            if(carta2atributo1 == carta2atributo2){
                                printf("Você escolheu o mesmo atributo. Escolha um atributo diferente. \n");
                            } else {switch(carta2atributo2){
                                    case 1:
                                        printf("Você escolheu o atributo Área Total. \n");
                                        resultado2 = area1 > area2 ? 1 : 0;
                                    break;
                                    case 2: 
                                        printf("Você escolheu o atributo PIB. \n");
                                        resultado2 = pib1 > pib2 ? 1 : 0;
                                    break;
                                    case 3:
                                        printf("Você escolheu o atributo Nº de Pontos Turísticos. \n");
                                        resultado2 = nturismo1 > nturismo2 ? 1 : 0;
                                    break;
                                    case 4:
                                        printf("Você escolheu o atributo Densidade Demográfica. \n");
                                        resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
                                    break;
                                    case 5:
                                        printf("Você escolheu o atributo Super-Poder. \n");
                                        resultado2 = superpoder_1 > superpoder_2 ? 1 : 0;
                                    break;
                                    default:
                                        Printf("Operação Inválida. Escolha uma opção de 1 a 5. \n");
                                    }
                                }

            /* Soma dos dois atributos computados pelo usuário através do terminal.*/

                    int soma1 = carta1atributo1 + carta1atributo2;
                    int soma2 = carta2atributo1 + carta2atributo2;

            /* Bloco de comando referente à comparação dos resultados da batalha.*/
            
         


            /*Continuação do Switch do Menu Principal.*/

            break;
            case 3:
                printf("---------Obrigado por participar!----------\n");
                printf("---------Finalizando----------\n");
            break;
            default:
                printf("Operação Inválida! Por favor, escolha opções entre 1 e 3.\n");
            break;
        }

            /* Fim do programa.*/

return 0;

}