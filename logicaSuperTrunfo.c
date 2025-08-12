#include <stdio.h>
#include <string.h>

int main () {

    // Variáveis que recebem os valores da primeira carta

    char estado[3];
    char codigo[20];
    char cidade[50];
    unsigned long int populacao = 0;
    float area = 0;
    float pib = 0;
    int pontosturisticos = 0;
    float densidade, pibPerCapita;
    float superpoder = 0;

    // Variáveis que recebem os valores da segunda carta

    char estado2[3];
    char codigo2[20];
    char cidade2[50];
    unsigned long int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int pontosturisticos2 = 0;
    float densidade2, pibPerCapita2;
    float superpoder2 = 0;

    int populacaoresult, arearesult, pibresult, turisticosresult, 
    densidaderesult, pibperresult, poderresult, resultado, carta = 2, erro = 1;  
    
    int atributo = 0, atributo2 = 0;

    float valor, valor2;

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

    // Calculo da densidade e Pib Per Capita e Super Poder da carta 1

    if (area == 0) {
        area = 10;
    }

    if (populacao == 0) {
        populacao = 10;
    } 

    if (pib == 0) {
        pib = 10;
    }

        densidade = (float)populacao / area;

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
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n ");
    scanf("%f", &area2);

    printf("Digite o pib(Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos que existe na cidade: \n");
    scanf("%d", &pontosturisticos2); 

    // Calculo da densidade e Pib Per Capita e Super Poder da carta 2

    if (area2 == 0) {
        area2 = 10;
    }

    if (populacao2 == 0) {
        populacao2 = 10;
    } 

    if (pib2 == 0) {
        pib2 = 10;
    }

        densidade2 = (float)populacao2 / area2;

        pibPerCapita2 = (pib2 * 1000000000.0F) / populacao2;

        superpoder2 = (float)populacao2 + area2 + pib2 +
        (float)pontosturisticos2 + pibPerCapita2 + (1.0/densidade2); 


    printf("Escolha o número do atributo que deseja usar para comparar as cartas: \n");

    printf("1- População. \n 2 - Área. \n 3 - PIB. \n 4 - Número de pontos turísticos. \n 5 - Densidade demográfica \n");
    scanf("%d", &atributo);

    // Primeiro menu para escolha de atributos

    switch (atributo) {

    case 1:
            printf("Carta 1 - Nome: %s (%s), Atributo: População. quantidade %ld. \n", cidade, estado, populacao);
            printf("Carta 2 - Nome: %s (%s), Atributo: População. quantidade %ld. \n", cidade2, estado2, populacao2);
        if (populacaoresult = populacao > populacao2) {
            printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
        } else if (populacaoresult = populacao < populacao2) {
            printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
        } else {
            printf("Houve empate!");
        }
            valor = populacao;
            valor2 = populacao2;
    break;
    case 2:
            printf("Carta 1 - Nome: %s (%s), Atributo: Área. valor: %.2f km² \n", cidade, estado, area);
            printf("Carta 2 - Nome: %s (%s), Atributo: Área. valor: %.2f km² \n", cidade2, estado2, area2);
        if (arearesult = area > area2) {
            printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
        } else if (arearesult = area < area2) {
            printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
        } else {
            printf("Houve empate!\n");
        }
            valor = area;
            valor2 = area2;
    break;
    case 3:
            printf("Carta 1 - Nome: %s (%s), Atributo: PIB. valor: R$ %.2f Bilhões \n", cidade, estado, pib);
            printf("Carta 2 - Nome: %s (%s), Atributo: PIB. valor: R$ %.2f Bilhões \n", cidade2, estado2, pib2);
        if (pibresult = pib > pib2) {
            printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
        } else if (pibresult = pib < pib2) {
            printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
        } else {
            printf("Houve empate!\n");
        }        
            valor = pib;
            valor2 = pib2;
    break;
    case 4:
            printf("Carta 1 - Nome: %s (%s), Atributo: Pontos Turísticos. quantidade %d \n", cidade, estado, pontosturisticos);
            printf("Carta 2 - Nome: %s (%s), Atributo: Pontos Turísticos. quantidade %d \n", cidade2, estado2, pontosturisticos2);
        if (turisticosresult = pontosturisticos > pontosturisticos2) {
            printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
        } else if (turisticosresult = pontosturisticos < pontosturisticos2) {
            printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
        } else {
            printf("Houve empate!\n");
        }        
            valor = pontosturisticos;
            valor2 = pontosturisticos2;
    break;
    case 5:
            printf("Carta 1 - Nome: %s (%s), Atributo: Densidade populacional %.2f hab/km² \n", cidade, estado, densidade);
            printf("Carta 2 - Nome: %s (%s), Atributo: Densidade populacional %.2f hab/km² \n", cidade2, estado2, densidade2);
        if (densidaderesult = densidade < densidade2) {
            printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
        } else if (densidaderesult = densidade > densidade2) {
            printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
        } else {
            printf("Houve empate!\n");
        }        
            valor = densidade;
            valor2 = densidade2;
    break;
    default:
        printf("Número inserido inválido!\n");
        erro = valor != 0? 1 : 0;

    break;
    }

    // if criado para não deixar que o usuário escolha o número do próximo atributo, caso tenha escolhido um número inválido.

    if (erro == 1) {
    
        printf("Escolha o número do atributo que deseja usar para comparar as cartas: \n");

        printf("1- População. \n 2 - Área. \n 3 - PIB. \n 4 - Número de pontos turísticos. \n 5 - Densidade demográfica \n");
        scanf("%d", &atributo2);

        resultado = atributo != atributo2 ? 1 : 0;

    // if criado para impedir que o usuário escolha o mesmo atributo duas vezes.    

        if (resultado == 1) {

            switch (atributo2) {

            case 1:
                printf("Carta 1 - Nome: %s (%s), Atributo: População. quantidade %ld. \n", cidade, estado, populacao);
                printf("Carta 2 - Nome: %s (%s), Atributo: População. quantidade %ld. \n", cidade2, estado2, populacao2);
            if (populacaoresult = populacao > populacao2) {
                printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
            } else if (populacaoresult = populacao < populacao2) {
                printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
            } else {
                printf("Houve empate!\n");
            }        
                valor += populacao;
                valor2 += populacao2; 

            break;
            case 2:
                printf("Carta 1 - Nome: %s (%s), Atributo: Área. valor: %.2f km² \n", cidade, estado, area);
                printf("Carta 2 - Nome: %s (%s), Atributo: Área. valor: %.2f km² \n", cidade2, estado2, area2);
            if (arearesult = area > area2) {
                printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
            } else if (arearesult = area < area2) {
                printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
            } else {
                printf("Houve empate!\n");
            }        
                valor += area;
                valor2 += area2;

            break;
            case 3:
                printf("Carta 1 - Nome: %s (%s), Atributo: PIB. valor: R$ %.2f Bilhões \n", cidade, estado, pib);
                printf("Carta 2 - Nome: %s (%s), Atributo: PIB. valor: R$ %.2f Bilhões \n", cidade2, estado2, pib2);
            if (pibresult = pib > pib2) {
                printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
            } else if (pibresult = pib < pib2) {
                printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
            } else {
                printf("Houve empate!\n");
            }        
                valor += pib;
                valor2 += pib2;

            break;
            case 4:
                printf("Carta 1 - Nome: %s (%s), Atributo: Pontos Turísticos. quantidade %d \n", cidade, estado, pontosturisticos);
                printf("Carta 2 - Nome: %s (%s), Atributo: Pontos Turísticos. quantidade %d \n", cidade2, estado2, pontosturisticos2);
            if (turisticosresult = pontosturisticos > pontosturisticos2) {
                printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
            } else if (turisticosresult = pontosturisticos < pontosturisticos2) {
                printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
            } else {
                printf("Houve empate!\n");
            }        
                valor += pontosturisticos;
                valor2 += pontosturisticos2;

            break;
            case 5:
                printf("Carta 1 - Nome: %s (%s), Atributo: Densidade populacional %.2f hab/km² \n", cidade, estado, densidade);
                printf("Carta 2 - Nome: %s (%s), Atributo: Densidade populacional %.2f hab/km² \n", cidade2, estado2, densidade2);
            if (densidaderesult = densidade < densidade2) {
                printf("Resultado: Carta 1 (%s) Venceu! \n", cidade);
            } else if (densidaderesult = densidade > densidade2) {
                printf("Resultado: Carta 2 (%s) Venceu! \n", cidade2);
            } else {
                printf("Houve empate!\n");
            }        
                valor += densidade;
                valor2 += densidade2;

            break;
            default:
                printf("Número inserido inválido!\n");
                erro = 0;
            break;
            }   
            
            // if criado para impedir que os resultados sejam mostrados caso o segundo atributo seja inválido.

            if (erro == 1) {

            printf("A soma dos atributos da Carta 1 é %.2f \n", valor);
            printf("A soma dos atributos da Carta 2 é %2.f \n", valor2);

            if (valor > valor2) {
                printf("Resultado: Carta 1 (%s) Venceu a rodada! \n", cidade);
            }   else if (valor < valor2) {
                printf("Resultado: Carta 2 (%s) Venceu a rodada! \n", cidade2);
            }   else {
                printf("Houve um empate!");
            }

            } else {
                printf("Tente novamente inserindo valores válidos!");
            }


        } else {
            printf("Escolha um atributo diferente!\n");
        }


    } else {
        printf("Tente novamente inserindo valores válidos!");
    }
}
