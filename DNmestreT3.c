#include <stdio.h>

int main() {
    // Atributos carta 1 (Brasil).
    float area1 = 5.510;
    float pop1 = 212;
    float pib1 = 2.169;
    float turismo1 = 4000;
    float dens1 = pop1 / area1;

    // Atributos carta 2 (China).
    float area2 = 9.597;
    float pop2 = 1409;
    float pib2 = 18.749;
    float turismo2 = 3400;
    float dens2 = pop2 / area2;

    // Variáveis
    int menu, pais, escolha1, escolha2;
    int resultado1, resultado2;
    float valorA1, valorA2, valorB1, valorB2;
    char *atributoNome1, *atributoNome2;

    // Menu Principal.
    printf("### SUPER TRUNFO ###\n");
    printf("1 - Jogar\n2 - Regras\n3 - Sair\n");
    scanf("%d", &menu);
        if (menu < 1 || menu > 3) {
        printf("Escolha Inválida:\nReinicie o Jogo!\n");
        return 0;}

    // Regras do jogo
    if (menu == 2) {
        printf ("\nAs Regras são:\n");
        printf ("- Cada jogador escolhe 2 atributos.\n");
        printf ("- Será comparado atributo x atributo.\n");
        printf ("- O maior valor de cada atributo vence (exceto Densidade, vence o menor).\n");
        printf ("- Depois será feita a soma dos dois atributos.\n");
        printf ("- O único caso em que pode dar EMPATE é na soma final.\n");
        printf ("- Vence quem obter a maior soma dos dois atributos..\n");
        return 0;

    // Sair do jogo.
    } else if (menu == 3) {
        printf("Saindo...\n");
        return 0;
    }

    // Escolha do país
    printf("\nAgora escolha o seu país:\n1 - Brasil\n2 - China\n");
    scanf("%d", &pais);
                if (pais < 1 || pais > 2) {
        printf("Escolha Inválida:\nReinicie o Jogo!\n");
        return 0;}

    // Escolha do 1º atributo
    printf("\nEscolha o seu 1º atributo:\n");
    printf("1 - Área\n2 - População\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    scanf("%d", &escolha1);
                if (escolha1 < 1 || escolha1 > 5) {
        printf("Escolha Inválida:\nReinicie o Jogo!\n"); 
        return 0; }

    // Comparação da primeira escolha
    switch (escolha1) {
        case 1:
            atributoNome1 = "Área";
            valorA1 = area1;
            valorB1 = area2;
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 2:
            atributoNome1 = "População";
            valorA1 = pop1;
            valorB1 = pop2;
            resultado1 = pop1 > pop2 ? 1 : 0;
            break;
        case 3:
            atributoNome1 = "PIB";
            valorA1 = pib1;
            valorB1 = pib2;
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            atributoNome1 = "Pontos Turísticos";
            valorA1 = turismo1;
            valorB1 = turismo2;
            resultado1 = turismo1 > turismo2 ? 1 : 0;
            break;
        case 5:
            atributoNome1 = "Densidade Demográfica";
            valorA1 = dens1;
            valorB1 = dens2;
            resultado1 = dens1 < dens2 ? 1 : 0;
            break;
        default:
            printf ("Escolha Inválida:\nReinicie o Jogo!\n"); 
            return 0;
    }

    // Segunda escolha removendo o atributo escolhido na primeira escolha.
    printf("\nEscolha o 2º atributo:\n");
    if (escolha1 != 1) printf("1 - Área\n");
    if (escolha1 != 2) printf("2 - População\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Pontos Turísticos\n");
    if (escolha1 != 5) printf("5 - Densidade Demográfica\n");
    scanf("%d", &escolha2);
               if (escolha2 == escolha1 || escolha2 < 1 || escolha2 > 5) {
        printf("Escolha Inválida:\nReinicie o Jogo!\n"); 
        return 0;}

    // Comparação segunda escolha.
    switch (escolha2) {
        case 1:
            atributoNome2 = "Área";
            valorA2 = area1;
            valorB2 = area2;
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 2:
            atributoNome2 = "População";
            valorA2 = pop1;
            valorB2 = pop2;
            resultado2 = pop1 > pop2 ? 1 : 0;
            break;
        case 3:
            atributoNome2 = "PIB";
            valorA2 = pib1;
            valorB2 = pib2;
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            atributoNome2 = "Pontos Turísticos";
            valorA2 = turismo1;
            valorB2 = turismo2;
            resultado2 = turismo1 > turismo2 ? 1 : 0;
            break;
        case 5:
            atributoNome2 = "Densidade Demográfica";
            valorA2 = dens1;
            valorB2 = dens2;
            resultado2 = dens1 < dens2 ? 1 : 0;
            break;
        default:
            printf ("Escolha Inválida:\nReinicie o Jogo!\n"); 
            return 0;
    }

    // Resultado da primeira comparação
    printf("\n### PRIMEIRA COMPARAÇÃO ###\n");
    printf("Brasil (%s): %.2f x China (%s): %.2f\n", atributoNome1, valorA1, atributoNome1, valorB1);
    if (resultado1 == 1) {
        printf("Brasil venceu no atributo %s!\n", atributoNome1);
    }
    else { 
        printf("China venceu no atributo %s!\n", atributoNome1);
    }

    // Resultado da comparação da segunda escolha.
    printf("\n### SEGUNDA COMPARAÇÃO ###\n");
    printf("Brasil (%s): %.2f x China (%s): %.2f\n", atributoNome2, valorA2, atributoNome2, valorB2);
    if (resultado2 == 1) {
        printf("Brasil venceu no atributo %s!\n", atributoNome2);
    }
    else {
        printf("China venceu no atributo %s!\n", atributoNome2);
    }

    //Soma dos dois atributos contendo a opção de empate utilizando o operador ternário.
    float somaBrasil = valorA1 + valorA2;
    float somaChina = valorB1 + valorB2;
    int resultadoFinal = (somaBrasil > somaChina) ? 1 : (somaBrasil < somaChina ? 2 : 0);

    //Resultado da soma dos dois atributos contendo o printe em caso de empate.
    printf("\n### RESULTADO SOMA DOS 2 ATRIBUTOS ###\n");
    printf("Brasil (soma): %.2f | China (soma): %.2f\n", somaBrasil, somaChina);
    if (resultadoFinal == 1) {
        printf("Brasil venceu no total!\n\n");
    }
    else if (resultadoFinal == 2) {
        printf("China venceu no total!\n\n");
    }
    else {
        printf("Empate!\n\n");
    }

    // PRINT FINAL
    printf("Países: Brasil x China\n");
    printf("Atributos usados: %s e %s\n", atributoNome1, atributoNome2);
    printf("Brasil -> %s: %.2f, %s: %.2f, Soma: %.2f\n", atributoNome1, valorA1, atributoNome2, valorA2, somaBrasil);
    printf("China  -> %s: %.2f, %s: %.2f, Soma: %.2f\n\n", atributoNome1, valorB1, atributoNome2, valorB2, somaChina);

    // Print final do vencedor.
    if (resultadoFinal == 1) {
        printf(">>> Brasil venceu a rodada!\n");
    }
    else if (resultadoFinal == 2) {
        printf(">>> China venceu a rodada!\n");
    }
    else {
        printf(">>> Empate!\n");
    }
    return 0;
}


