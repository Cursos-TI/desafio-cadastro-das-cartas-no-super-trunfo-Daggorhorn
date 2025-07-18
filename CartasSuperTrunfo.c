#include <stdio.h>

int main() {
    
// 1ª Carta
    char Estado[20] = "Rio Grande do Sul"; // Nome do estado.
    char Carta[4] = "B01"; // Código da carta, utilizando a inicial B para definir o país.
    char Cidade[20] = "Porto Alegre"; // Nome da cidade.
    double População = 1332000; // População de 1 milhão e 332 mil habitantes.
    float Área = 496.8; // Área em km².
    double PIB = 81560000000; // PIB de 81 bilhões e 560 milhões de reais.
    int Pontos = 32; // Número de pontos turísticos.


// 2ª Carta
    char Estado2[10] = "Ceará"; // Nome do estado.
    char Carta2[4] = "B02"; // Código da carta, utilizando a inicial B para definir o país.
    char Cidade2[20] = "Fortaleza"; // Nome da cidade.
    double População2 = 2627000; // População de 2 milhões e 627 mil habitantes.
    float Área2 = 313.8; // Área em km².
    double PIB2 = 73000000000; // PIB de 73 bilhões de reais.
    int Pontos2 = 28; // Número de pontos turísticos.

    printf("Código da Carta: %s\n", Carta); // Exibe o código da carta.(função %s para formatar a string).
    printf("Nome do Estado: %s\n", Estado); // Exibe o nome do estado. (função %s para formatar a string).
    printf("Nome da Cidade: %s\n", Cidade); // Exibe o nome da cidade. (função %s para formatar a string).
    printf("População: %.0f\n", População); // Exibe a população. (função %.0f para formatar o número com zero casas decimais).
    printf("Área(km²): %.1f\n", Área); // Exibe a área em km². (função %.1f para formatar o número com uma casa decimal).
    printf("PIB: %.0f\n", PIB); // Exibe o PIB. (função %.0f para formatar o número com zero casas decimais).
    printf("Número de Pontos Turísticos: %d\n", Pontos); // Exibe o número de pontos turísticos. (função %d para formatar o número inteiro).

    printf("\n"); // Linha em branco para separar as cartas.

    printf("Código da Carta: %s\n", Carta2); // Exibe o código da segunda carta. 
    printf("Nome do Estado: %s\n", Estado2); // Exibe o nome do estado da segunda carta.
    printf("Nome da Cidade: %s\n", Cidade2); // Exibe o nome da cidade da segunda carta.
    printf("População: %.0f\n", População2); // Exibe a população da segunda carta.
    printf("Área(km²): %.1f\n", Área2); // Exibe a área em km² da segunda carta.
    printf("PIB: %.0f\n", PIB2); // Exibe o PIB da segunda carta.
    printf("Número de Pontos Turísticos: %d\n", Pontos2); // Exibe o número de pontos turísticos da segunda carta.

    return 0;
}