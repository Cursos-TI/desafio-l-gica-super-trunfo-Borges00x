#include <stdio.h>
#include <string.h>

int main () {

    // Variáveis que recebem os valores da primeira carta

    char estado[2];
    char codigo[20];
    char cidade[50];
    unsigned long int populacao = 0;
    float area = 0;
    float pib = 0;
    int pontosturisticos = 0;
    float densidade, pibPerCapita;
    float superpoder = 0;

    // Variáveis que recebem os valores da segunda carta

    char estado2[2];
    char codigo2[20];
    char cidade2[50];
    unsigned long int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int pontosturisticos2 = 0;
    float densidade2, pibPerCapita2;
    float superpoder2 = 0;

    int opcao = 0;

    int populacaoresult, arearesult, pibresult, turisticosresult, 
    densidaderesult, pibperresult, poderresult, carta = 2;

    // Aqui as váriaveis recebem os valores da primeira carta

    printf("Digite as informações de duas cartas:\n");

    printf("Preencha as informações da primeira carta:\n");

    printf("Digite uma letra de 'A' a 'H' que simbolize o nome da Cidade:\n");
    scanf("%s", estado);

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

    if (area == 0) {
        area = 10;
    }

    if (populacao == 0) {
        populacao = 10;
    } 

    if (pib == 0) {
        pib = 10;
    }

        densidade = populacao / area;

        pibPerCapita = (pib * 1000000000.0F) / populacao;

        superpoder = (float)populacao + area + pib +
        (float)pontosturisticos + pibPerCapita + (1.0/densidade); 


    // Aqui as váriaveis recebem os valores da segunda carta

    printf("Preencha as informações da segunda carta:\n");

    printf("Digite uma letra de 'A' a 'H' que simbolize o nome da Cidade:\n");
    scanf("%s", estado2);

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

    if (area2 == 0) {
        area2 = 10;
    }

    if (populacao2 == 0) {
        populacao2 = 10;
    } 

    if (pib2 == 0) {
        pib2 = 10;
    }

        densidade2 = populacao2 / area2;

        pibPerCapita2 = (pib2 * 1000000000.0F) / populacao2;

        superpoder2 = (float)populacao2 + area2 + pib2 +
        (float)pontosturisticos2 + pibPerCapita2 + (1.0/densidade2); 

    // Menu interativo

    printf("Escolha o número do atributo que deseja usar para comparar as cartas: \n");

    printf("1- População. \n 2 - Área. \n 3 - PIB. \n 4 - Número de pontos turísticos. \n 5 - Densidade demográfica \n");
    scanf("%d", &opcao);

    switch (opcao) {

    case 1:
            printf("Carta 1 - Nome: %s (%s), Atributo: População. quantidade %lu. \n", cidade, estado, populacao);
            printf("Carta 2 - Nome: %s (%s), Atributo: População. quantidade %lu. \n", cidade2, estado2, populacao2);
        if (populacaoresult = populacao > populacao2) {
            printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
        } else if (populacaoresult = populacao == populacao2) {
            printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
        } else {
            printf("Houve empate!");
        }
    break;
    case 2:
            printf("Carta 1 - Nome: %s (%s), Atributo: Área. valor: %.2f km² \n", cidade, estado, area);
            printf("Carta 2 - Nome: %s (%s), Atributo: Área. valor: %.2f km² \n", cidade2, estado2, area2);
        if (arearesult = area > area2) {
            printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
        } else if (arearesult = area == area2) {
            printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
        } else {
            printf("Houve empate!");
        }
    break;
    case 3:
            printf("Carta 1 - Nome: %s (%s), Atributo: PIB. valor: R$ %.2f Bilhões \n", cidade, estado, pib);
            printf("Carta 2 - Nome: %s (%s), Atributo: PIB. valor: R$ %.2f Bilhões \n", cidade2, estado2, pib2);
        if (pibresult = pib > pib2) {
            printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
        } else if (pibresult = pib < pib2) {
            printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
        } else {
            printf("Houve empate!");
        }
    break;
    case 4:
            printf("Carta 1 - Nome: %s (%s), Atributo: Pontos Turísticos. quantidade %d \n", cidade, estado, pontosturisticos);
            printf("Carta 2 - Nome: %s (%s), Atributo: Pontos Turísticos. quantidade %d \n", cidade2, estado2, pontosturisticos2);
        if (turisticosresult = pontosturisticos > pontosturisticos2) {
            printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
        } else if (turisticosresult = pontosturisticos < pontosturisticos2) {
            printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
        } else {
            printf("Houve empate!");
        }
    break;
    case 5:
            printf("Carta 1 - Nome: %s (%s), Atributo: Densidade populacional %.2f hab/km² \n", cidade, estado, densidade);
            printf("Carta 2 - Nome: %s (%s), Atributo: Densidade populacional %.2f hab/km² \n", cidade2, estado2, densidade2);
        if (densidaderesult = densidade < densidade2) {
            printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
        } else if (densidaderesult = densidade > densidade2) {
            printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
        } else {
            printf("Houve empate!");
        }
    break;
    default:
        printf("Número inserido inválido!");
    break;

    return 0;
    }    
}
