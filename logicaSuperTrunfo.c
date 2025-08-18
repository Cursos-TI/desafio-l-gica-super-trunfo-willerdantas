#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2, cod_carta1[3], cod_carta2[3], nome_cidade1[30], nome_cidade2[30];
    int populacao1, populacao2, ponto_turistico1, ponto_turistico2;
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

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);

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

    printf("Digite o código da carta: \n");
    scanf("%s", cod_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

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

    printf("Comparação das cartas:\n");

    printf("População: \n");
    printf("Carta 1 - %s: %d\n", nome_cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", nome_cidade2, populacao2);
    if (populacao1 > populacao2){
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
    }else{
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
    }

    printf("Área\n");
    printf("Carta 1 - %s: %f\n", nome_cidade1, area1);
    printf("Carta 2 - %s: %f\n", nome_cidade2, area2);
    if (area1 > area2){
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
    }else{
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
    }

    printf("PIB\n");
    printf("Carta 1 - %s: %f\n", nome_cidade1, pib1);
    printf("Carta 2 - %s: %f\n", nome_cidade2, pib2);
    if (pib1 > pib2){
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
    }else{
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
    }

    printf("Pontos turísticos\n");
    printf("Carta 1 - %s: %d\n", nome_cidade1, ponto_turistico1);
    printf("Carta 2 - %s: %d\n", nome_cidade2, ponto_turistico2);
    if (ponto_turistico1 > ponto_turistico2){
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
    }else{
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
    }

    printf("Densidade populacional\n");
    printf("Carta 1 - %s: %f\n", nome_cidade1, dens_populacional1);
    printf("Carta 2 - %s: %f\n", nome_cidade2, dens_populacional2);
    if (dens_populacional1 < dens_populacional2){
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
    }else{
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
    }

    printf("PIB per capita\n");
    printf("Carta 1 - %s: %f\n", nome_cidade1, pib_percapito1);
    printf("Carta 2 - %s: %f\n", nome_cidade2, pib_percapito2);
    if (pib_percapito1 > pib_percapito2){
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
    }else{
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
    }

    printf("Super poder\n");
    printf("Carta 1 - %s: %f\n", nome_cidade1, superPoder1);
    printf("Carta 2 - %s: %f\n", nome_cidade2, superPoder2);
    if (superPoder1 > superPoder2){
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta1, nome_cidade1);
    }else{
        printf("A carta %s - Cidade: %s ganhou\n", cod_carta2, nome_cidade2);
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
