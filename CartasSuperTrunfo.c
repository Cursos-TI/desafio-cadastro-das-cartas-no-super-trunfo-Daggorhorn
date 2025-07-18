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

    printf("Código da Carta: %s\n", Carta);
    printf("Nome do Estado: %s\n", Estado);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %.0f\n", População);
    printf("Área(km²): %.1f\n", Área);
    printf("PIB: %.0f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Pontos);

    printf("\n");

    printf("Código da Carta: %s\n", Carta2);
    printf("Nome do Estado: %s\n", Estado2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %.0f\n", População2);
    printf("Área(km²): %.1f\n", Área2);
    printf("PIB: %.0f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pontos2);
    
    return 0;
}