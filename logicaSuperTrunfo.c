#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2, cod_carta1[3], cod_carta2[3], nome_cidade1[30], nome_cidade2[30];
    int populacao1, populacao2, ponto_turistico1, ponto_turistico2, menu, atributo1, atributo2;
    float area1, area2, pib1, pib2;
    float dens_populacional1, dens_populacional2;
    float pib_percapito1, pib_percapito2;
    float superPoder1, superPoder2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("*** Programa Cartas Super Trunfo ***\n");
    printf("*** Cadastro de cartas ***\n");
    printf("\n");

    printf("*** Cadastrar carta 01 ***\n");
    printf("Digite uma letra de A a H que identifica o estado: \n");
    scanf(" %c", &estado1);
    getchar(); // Limpa o buffer após ler um char

    printf("Digite o código da carta: \n");
    scanf("%2s", cod_carta1);
    getchar(); // Limpa o buffer após ler string

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto_turistico1);

    dens_populacional1 = populacao1 / area1;
    pib_percapito1 = pib1 / populacao1;
    superPoder1 = (float)(populacao1 + area1 + pib1 + ponto_turistico1 + dens_populacional1 + pib_percapito1);

    printf("\n");
    printf("*** Cadastrar carta 02 ***\n");
    printf("Digite uma letra de A a H que identifica o estado: \n");
    scanf(" %c", &estado2);
    getchar(); // Limpa o buffer

    printf("Digite o código da carta: \n");
    scanf("%2s", cod_carta2);
    getchar(); // Limpa o buffer

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &ponto_turistico2);

    dens_populacional2 = populacao2 / area2;
    pib_percapito2 = pib2 / populacao2;
    superPoder2 = (float)(populacao2 + area2 + pib2 + ponto_turistico2 + dens_populacional2 + pib_percapito2);

    printf("\n");
    printf("*** Menu ***\n");
    printf("Escolha uma opção:\n");
    printf("1. Comparar cartas\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    scanf("%d", &menu);
    printf("\n");

    switch (menu)
    {
    case 1:
        printf("*** Comparar cartas ***\n");
        printf("Escolha dois atributos dentre as opções abaixo:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super poder\n");

        printf("Escolha o primeiro atributo: ");
        scanf("%d", &atributo1);

        printf("Escolha o segundo atributo: ");
        scanf("%d", &atributo2);
        printf("\n");

        // switch do primeiro atributo
        switch (atributo1)
        {
        case 1:
            if (populacao1 > populacao2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (populacao1 == populacao2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (area1 == area2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (pib1 == pib2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        case 4:
            if (ponto_turistico1 > ponto_turistico2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (ponto_turistico1 == ponto_turistico2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        case 5:
            if (dens_populacional1 < dens_populacional2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (dens_populacional1 == dens_populacional2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        case 6:
            if (pib_percapito1 > pib_percapito2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (pib_percapito1 == pib_percapito2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        case 7:
            if (superPoder1 > superPoder2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (superPoder1 == superPoder2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        default:
            printf("Atributo inválido!\n");
            break;
        }

        switch (atributo2)
        {
        case 1:
            if (populacao1 > populacao2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (populacao1 == populacao2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (area1 == area2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (pib1 == pib2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        case 4:
            if (ponto_turistico1 > ponto_turistico2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (ponto_turistico1 == ponto_turistico2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        case 5:
            if (dens_populacional1 < dens_populacional2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (dens_populacional1 == dens_populacional2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        case 6:
            if (pib_percapito1 > pib_percapito2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (pib_percapito1 == pib_percapito2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        case 7:
            if (superPoder1 > superPoder2) {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
            } else if (superPoder1 == superPoder2) {
                printf("Empate entre as cartas %s - Cidade: %s e %s - Cidade: %s\n", cod_carta1, nome_cidade1, cod_carta2, nome_cidade2);
            } else {
                printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
            }
            break;
        default:
            printf("Atributo inválido!\n");
            break;
        }
        break;

    case 2:
        printf("*** Regras ***\n");
        printf("1. O jogo é entre duas cartas.\n");
        printf("2. Cada carta possui atributos que serão comparados.\n");
        printf("3. O jogador escolhe um atributo para a comparação.\n");
        printf("4. A carta com o maior valor no atributo escolhido vence.\n");
        break;
    case 3:
        printf("Saindo do programa...\n");
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
  
    return 0;
}
