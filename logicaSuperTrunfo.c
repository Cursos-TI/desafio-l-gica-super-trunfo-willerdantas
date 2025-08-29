#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2, cod_carta1[3], cod_carta2[3], nome_cidade1[30], nome_cidade2[30];
    int populacao1, populacao2, ponto_turistico1, ponto_turistico2, menu;
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

    printf("Programa Cartas Super Trunfo \n");
    printf("Cadastro de cartas \n");
    printf("\n");

    printf("Cadastrar carta 01\n");
    printf("Digite uma letra de A a H que identifica o estado: \n");
    scanf(" %c", &estado1);
    getchar(); // Limpa o buffer após ler um char

    printf("Digite o código da carta: \n");
    scanf("%2s", cod_carta1);
    getchar(); // Limpa o buffer após ler string

    printf("Digite o nome da cidade: \n");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    // Remove o '\n' do final, se existir
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
    printf("Cadastrar carta 02\n");
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

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    printf("\n");
   
    printf("Comparação das cartas:\n");
    printf("\n");
    printf("Escolha um atributo: \n");
    printf("1: População\n");
    printf("2: Área\n");
    printf("3: PIB\n");
    printf("4: Pontos turísticos\n");
    printf("5: Densidade populacional\n");
    printf("6: PIB per capita\n");
    printf("7: Super poder\n");
    scanf("%d", &menu);

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    switch (menu)
    {
    case 1:
        printf("Você escolheu o atributo População\n");
        if (populacao1 > populacao2) {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
        } else {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
        }
        break;
    case 2:
        printf("Você escolheu o atributo Área\n");
        if (area1 > area2) {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
        } else {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
        }
        break;
    case 3:
        printf("Você escolheu o atributo PIB\n");
        if (pib1 > pib2) {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
        } else {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
        }
        break;
    case 4:
        printf("Você escolheu o atributo Pontos turísticos\n");
        if (ponto_turistico1 > ponto_turistico2) {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
        } else {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
        }
        break;
    case 5:
        printf("Você escolheu o atributo Densidade populacional\n");
        if (dens_populacional1 < dens_populacional2) {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
        } else {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
        }
        break;
    case 6:
        printf("Você escolheu o atributo PIB per capita\n");
        if (pib_percapito1 > pib_percapito2) {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
        } else {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
        }
        break;
    case 7:
        printf("Você escolheu o atributo Super poder\n");
        if (superPoder1 > superPoder2) {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
        } else {
            printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
        }
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}
