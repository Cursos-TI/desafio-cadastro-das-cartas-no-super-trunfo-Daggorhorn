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
    float DensidadePopulacional = População / Área; // Cálculo da densidade populacional.
    float PIBPerCapita = PIB / População; // Cálculo do PIB per capita.
    float DPI = 1.0 / DensidadePopulacional ; // Cálculo do DPI (Densidade Populacional Inversa).
    float SuperPoder = População + Área + PIB + Pontos; // Super poder da primeira carta.

// 2ª Carta
    char Estado2[20] = "Ceará"; // Nome do estado.
    char Carta2[4] = "B02"; // Código da carta, utilizando a inicial B para definir o país.
    char Cidade2[20] = "Fortaleza"; // Nome da cidade.
    double População2 = 2627000; // População de 2 milhões e 627 mil habitantes.
    float Área2 = 313.8; // Área em km².
    double PIB2 = 73000000000; // PIB de 73 bilhões de reais.
    int Pontos2 = 28; // Número de pontos turísticos.
    float DensidadePopulacional2 = População2 / Área2; // Cálculo da densidade populacional.
    float PIBPerCapita2 = PIB2 / População2; // Cálculo do PIB per capita
    float DPI2 = 1.0f / DensidadePopulacional2; // Cálculo do DPI (Densidade Populacional Inversa) da segunda carta.
    float SuperPoder2 = População2 + Área2 + PIB2 + Pontos2; // Super poder da segunda carta.

    printf("Código da Carta: %s\n", Carta); // Exibe o código da carta.(função %s para formatar a string).
    printf("Nome do Estado: %s\n", Estado); // Exibe o nome do estado. (função %s para formatar a string).
    printf("Nome da Cidade: %s\n", Cidade); // Exibe o nome da cidade. (função %s para formatar a string).
    printf("População: %.0f\n", População); // Exibe a população. (função %.0f para formatar o número com zero casas decimais).
    printf("Área(km²): %.1f\n", Área); // Exibe a área em km². (função %.1f para formatar o número com uma casa decimal).
    printf("PIB: %.0f\n", PIB); // Exibe o PIB. (função %.0f para formatar o número com zero casas decimais).
    printf("Número de Pontos Turísticos: %d\n", Pontos); // Exibe o número de pontos turísticos. (função %d para formatar o número inteiro).
    printf("Densidade Populacional: %.2f habitantes/km²\n", DensidadePopulacional); // Exibe a densidade populacional com duas casas decimais.
    printf("PIB Per Capita: %.2f reais\n", PIBPerCapita); // Exibe o PIB per capita com duas casas decimais.
    printf("DPI: %.2f\n", DPI); // Exibe o DPI (Densidade Populacional Inversa) da carta.
    printf("Super Poder: %.2f\n", SuperPoder); // Exibe o super poder da carta com duas casas decimais.

    printf("\n"); // Linha em branco para separar as cartas.

    printf("Código da Carta: %s\n", Carta2); // Exibe o código da segunda carta. 
    printf("Nome do Estado: %s\n", Estado2); // Exibe o nome do estado da segunda carta.
    printf("Nome da Cidade: %s\n", Cidade2); // Exibe o nome da cidade da segunda carta.
    printf("População: %.0f\n", População2); // Exibe a população da segunda carta.
    printf("Área(km²): %.1f\n", Área2); // Exibe a área em km² da segunda carta.
    printf("PIB: %.0f\n", PIB2); // Exibe o PIB da segunda carta.
    printf("Número de Pontos Turísticos: %d\n", Pontos2); // Exibe o número de pontos turísticos da segunda carta.
    printf("Densidade Populacional: %.3f habitantes/km²\n", DensidadePopulacional2); // Exibe a densidade populacional da segunda carta.
    printf("PIB Per Capita: %.3f reais\n", PIBPerCapita2); // Exibe o PIB per capita da segunda carta.
    printf("DPI: %.2f\n", DPI2); // Exibe o DPI (Densidade Populacional Inversa) da segunda carta.
    printf("Super Poder: %.2f\n", SuperPoder2); // Exibe o super poder da segunda carta.

    printf("\n");

    // Comparação das cartas
    printf("População da carta 1 (%.0f) é maior que a da carta 2 (%.0f) = %d\n", População, População2, (População > População2)); // Compara as populações. Se a população da carta 1 for maior que a da carta 2, retorna 1 (verdadeiro), retorna 0 (falso).
    printf("Área da carta 1 (%.1f) é maior que a da carta 2 (%.1f) = %d\n", Área, Área2, (Área > Área2)); // Compara as áreas. Se a área da carta 1 for maior que a da carta 2, retorna 1 (verdadeiro), retorna 0 (falso).
    printf("PIB da carta 1 (%.0f) é maior que o da carta 2 (%.0f) = %d\n", PIB, PIB2, (PIB > PIB2)); // Compara os PIBs. Se o PIB da carta 1 for maior que o da carta 2, retorna 1 (verdadeiro), retorna 0 (falso).
    printf("Número de Pontos Turísticos da carta 1 (%d) é maior que o da carta 2 (%d) = %d\n", Pontos, Pontos2, (Pontos > Pontos2)); // Compara os pontos turísticos. Se o número de pontos turísticos da carta 1 for maior que o da carta 2, retorna 1 (verdadeiro), retorna 0 (falso).
    printf("Densidade Populacional da carta 1 (%.2f) é maior que a da carta 2 (%.3f) = %d\n", DensidadePopulacional, DensidadePopulacional2, (DensidadePopulacional > DensidadePopulacional2)); // Compara as densidades populacionais. Se a densidade populacional da carta 1 for maior que a da carta 2, retorna 1 (verdadeiro), retorna 0 (falso).
    printf("PIB Per Capita da carta 1 (%.2f) é maior que o da carta 2 (%.3f) = %d\n", PIBPerCapita, PIBPerCapita2, (PIBPerCapita > PIBPerCapita2)); // Compara os PIBs per capita. Se o PIB per capita da carta 1 for maior que o da carta 2, retorna 1 (verdadeiro), retorna 0 (falso).
    printf("Super Poder da carta 1 (%.2f) é maior que o da carta 2 (%.2f) = %d\n", SuperPoder, SuperPoder2, (SuperPoder > SuperPoder2)); // Compara os super poderes. Se o super poder da carta 1 for maior que o da carta 2, retorna 1 (verdadeiro), retorna 0 (falso).

    return 0;
}