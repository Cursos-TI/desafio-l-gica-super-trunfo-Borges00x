#include <stdio.h>
#include <string.h>

int main() {

    // Variáveis que recebem os valores da primeira carta

    char estado[2];
    char codigo[20];
    char cidade[20];
    unsigned long int populacao = 0;
    float area = 0;
    float pib = 0;
    int pontosturisticos = 0;
    float densidade, pibPerCapita;
    float superpoder = 0;

    // Variáveis que recebem os valores da segunda carta

    char estado2[2];
    char codigo2[20];
    char cidade2[20];
    unsigned long int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int pontosturisticos2 = 0;
    float densidade2, pibPerCapita2;
    float superpoder2 = 0;

    int populacaoresult, arearesult, pibresult, turisticosresult, 
    densidaderesult, pibperresult, poderresult, carta = 2;

    // Aqui as váriaveis recebem os valores da primeira carta

    printf("Digite as informações de duas cartas:\n");

    printf("Preencha as informações da primeira carta:\n");

    printf("Digite uma letra de 'A' a 'H' que simbolize o nome da Cidade:\n");
    scanf("%s", &estado);

    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%s", codigo);

    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(cidade, 20, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite o número da população da cidade: \n ");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n ");
    scanf("%f", &area);

    printf("Digite o pib(Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos que existe na cidade: \n");
    scanf("%d", &pontosturisticos);

    // Calculo da densidade e Pib Per Capita e Super Poder

    densidade = populacao / area;

    pibPerCapita = (pib * 1000000000.0F) / populacao;

    superpoder = (float)populacao + area + pib +
    (float)pontosturisticos + pibPerCapita + (1.0/densidade);

    // Aqui as váriaveis recebem os valores da segunda carta

    printf("Preencha as informações da segunda carta:\n");

    printf("Digite uma letra de 'A' a 'H' que simbolize o nome da Cidade:\n");
    scanf("%s", &estado2);

    printf("Digite o código da carta de 01 a 04: \n");
    scanf("%s", codigo2);

    getchar();

    printf("Digite o nome da cidade: \n");
    fgets(cidade2, 20, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite o número da população da cidade: \n ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n ");
    scanf("%f", &area2);

    printf("Digite o pib(Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos que existe na cidade: \n");
    scanf("%d", &pontosturisticos2);

    // Calculo da densidade e Pib Per Capita e Super Poder

    densidade2 = populacao2 / area2;

    pibPerCapita2 = (pib2 * 1000000000.0F) / populacao2;

    superpoder2 = (float)populacao2 + area2 + pib2 +
    (float)pontosturisticos2 + pibPerCapita2 + (1.0/densidade2);

    // Comparação entre os atributos das cartas

    populacaoresult = populacao > populacao2;
    arearesult = area > area2;
    pibresult = pib > pib2;
    turisticosresult = pontosturisticos > pontosturisticos2;
    densidaderesult = densidade < densidade2;
    pibperresult = pibPerCapita > pibPerCapita2;
    poderresult = superpoder > superpoder2;

    // Aqui é a comparação dos resultados das cartas

    printf("\n");

    printf("*** Comparação de Cartas (Atributo: PIB) ***\n");

    printf("Carta 1 - %s (%s): R$ %.2f Bilhões \n", cidade, estado, pib);

    printf("Carta 2 - %s (%s): R$ %.2f Bilhões \n", cidade2, estado2, pib2);

    /* aqui é comparação do PIB, caso a primeira carta tenha um PIB maior,
     a mensagem do if será exibida, caso contrário a else erá exibida. */
    if (pib > pib2) {

    printf("Resultado: Carta %d (%s) Venceu! \n", (carta - pibresult), cidade);

    } else {

        printf("Resultado: Carta %d (%s) Venceu! \n", (carta - pibresult), cidade2);
    }

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
