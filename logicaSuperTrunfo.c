#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variaveis para as cartas
    char nome1[50] = "Brasil";
    char nome2[50] = "Argentina";
    int populacao1 = 213000000;
    int populacao2 = 45376763;
    float area1 = 8515767.0;
    float area2 = 2780400.0;
    float pib1 = 1.84;
    float pib2 = 0.45;
    float densidade1 = 25.0;
    float densidade2 = 16.3;

    int escolha1, escolha2;
    int valido = 0;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    float soma_c1, soma_c2;
    char atributo1[30], atributo2[30];

    // menu do primeiro atributo
    do {
        printf("\nEscolha o primeiro atributo para comparar:\n");
        printf("1. Populacao\n2. Area\n3. PIB\n4. Densidade Demografica\n");
        printf("Digite o numero do atributo: ");
        scanf("%d", &escolha1);
        if (escolha1 >= 1 && escolha1 <= 4) {
            valido = 1;
        } else {
            printf("Opcao invalida!\n");
        }
    } while (!valido);

    // menu do segundo atributo
    valido = 0;
    do {
        printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
        for (int i = 1; i <= 4; i++) {
            if (i != escolha1) {
                switch(i) {
                    case 1: printf("1. Populacao\n"); break;
                    case 2: printf("2. Area\n"); break;
                    case 3: printf("3. PIB\n"); break;
                    case 4: printf("4. Densidade Demografica\n"); break;
                }
            }
        }
        printf("Digite o numero do atributo: ");
        scanf("%d", &escolha2);
        if (escolha2 >= 1 && escolha2 <= 4 && escolha2 != escolha1) {
            valido = 1;
        } else {
            printf("Opcao invalida!\n");
        }
    } while (!valido);

    // pega os valores dos atributos
    if (escolha1 == 1) {
        valor1_c1 = populacao1;
        valor1_c2 = populacao2;
        strcpy(atributo1, "Populacao");
    } else if (escolha1 == 2) {
        valor1_c1 = area1;
        valor1_c2 = area2;
        strcpy(atributo1, "Area");
    } else if (escolha1 == 3) {
        valor1_c1 = pib1;
        valor1_c2 = pib2;
        strcpy(atributo1, "PIB");
    } else if (escolha1 == 4) {
        valor1_c1 = densidade1;
        valor1_c2 = densidade2;
        strcpy(atributo1, "Densidade Demografica");
    }

    if (escolha2 == 1) {
        valor2_c1 = populacao1;
        valor2_c2 = populacao2;
        strcpy(atributo2, "Populacao");
    } else if (escolha2 == 2) {
        valor2_c1 = area1;
        valor2_c2 = area2;
        strcpy(atributo2, "Area");
    } else if (escolha2 == 3) {
        valor2_c1 = pib1;
        valor2_c2 = pib2;
        strcpy(atributo2, "PIB");
    } else if (escolha2 == 4) {
        valor2_c1 = densidade1;
        valor2_c2 = densidade2;
        strcpy(atributo2, "Densidade Demografica");
    }

    // Mostra os valores
    printf("\nComparando as cartas:\n");
    printf("%s x %s\n", nome1, nome2);
    printf("Atributo 1: %s\n", atributo1);
    printf("Atributo 2: %s\n", atributo2);
    printf("\nValores:\n");
    printf("%-25s | %-15s | %-15s\n", "Atributo", nome1, nome2);
    printf("%-25s | %-15.2f | %-15.2f\n", atributo1, valor1_c1, valor1_c2);
    printf("%-25s | %-15.2f | %-15.2f\n", atributo2, valor2_c1, valor2_c2);

    // compara os atributos
    int v1, v2;
    if (escolha1 == 4) {
        if (valor1_c1 < valor1_c2) v1 = 1;
        else if (valor1_c1 > valor1_c2) v1 = 2;
        else v1 = 0;
    } else {
        if (valor1_c1 > valor1_c2) v1 = 1;
        else if (valor1_c1 < valor1_c2) v1 = 2;
        else v1 = 0;
    }

    if (escolha2 == 4) {
        if (valor2_c1 < valor2_c2) v2 = 1;
        else if (valor2_c1 > valor2_c2) v2 = 2;
        else v2 = 0;
    } else {
        if (valor2_c1 > valor2_c2) v2 = 1;
        else if (valor2_c1 < valor2_c2) v2 = 2;
        else v2 = 0;
    }

    printf("\nResultado dos atributos:\n");
    if (v1 == 1) printf("%s: %s ganhou\n", atributo1, nome1);
    else if (v1 == 2) printf("%s: %s ganhou\n", atributo1, nome2);
    else printf("%s: Empate\n", atributo1);

    if (v2 == 1) printf("%s: %s ganhou\n", atributo2, nome1);
    else if (v2 == 2) printf("%s: %s ganhou\n", atributo2, nome2);
    else printf("%s: Empate\n", atributo2);

    // soma dos atributos
    soma_c1 = valor1_c1 + valor2_c1;
    soma_c2 = valor1_c2 + valor2_c2;
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma_c1);
    printf("%s: %.2f\n", nome2, soma_c2);

    // resultado final
    printf("\nResultado final: ");
    if (soma_c1 > soma_c2) {
        printf("%s venceu\n", nome1);
    } else if (soma_c2 > soma_c1) {
        printf("%s venceu\n", nome2);
    } else {
        printf("Empate!\n");
    }




    
    return 0;
}