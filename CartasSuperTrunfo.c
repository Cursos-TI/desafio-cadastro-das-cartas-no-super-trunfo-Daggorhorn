#include <stdio.h>

int main() {
    
// 1ª Carta
    char Carta[3]; //"B01" Código da carta, utilizando a inicial B para definir o país.
    printf("Digite um caractere: ");
    scanf(" %3s", &Carta); // O %3s limita a leitura a 3 caracteres, evitando overflow.
    
    char Estado[20]; //"Rio Grande do Sul" Nome do estado.
    printf("Digite o nome do estado: "); 
    scanf(" %[^\n]", Estado); // %[^\n] permite ler uma string com espaços até encontrar uma nova linha.
    
    char Cidade[20]; //"Porto Alegre" Nome da cidade.
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade); 

    unsigned long int População; //1332000 População de 1 milhão e 332 mil habitantes.
    printf("Digite a população: ");
    scanf("%lu", &População); // %lu para ler um unsigned long int.
    
    float Área; //496.8 Área em km².
    printf("Digite a área (km²): ");
    scanf("%f", &Área); // %f para ler um float.
   
    double PIB; //81560000000.0 PIB em reais.
    printf("Digite o PIB: ");
    scanf("%lf", &PIB); // %lf para ler um double.
    
    int Pontos; //32 Número de pontos turísticos.
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Pontos); // %d para ler um inteiro.
    
    float Densidade_Populacional = População / Área; // Cálculo da densidade populacional.
    printf("Densidade Populacional da primeira carta: %.2f habitantes/km²\n", Densidade_Populacional);

    double PIBPerCapita = PIB / População; // Cálculo do PIB per capita.
    printf("PIB Per Capita da primeira carta: %.2f reais\n", PIBPerCapita);

    double DPI = (1.0 / Densidade_Populacional); // Cálculo do DPI (Densidade Populacional Inversa).
    printf("DPI da primeira carta: %.2f\n", DPI);

    double SuperPoder = População + Área + PIB + Pontos + PIBPerCapita + DPI; // Super poder da primeira carta.
    printf("Super Poder da primeira carta: %.2f\n", SuperPoder);

    printf("\n"); // Linha em branco para separar as cartas.

// 2ª Carta
    char Carta2[3]; //"B02" Código da carta, utilizando a inicial B para definir o país.
    printf("Digite o código da segunda carta: ");
    scanf(" %3s", Carta2); // O %3s limita a leitura a 3 caracteres, evitando overflow.

    char Estado2[20]; //"Ceará" Nome do estado.
    printf("Digite o nome do estado da segunda carta: ");
    scanf(" %[^\n]", Estado2); // %[^\n] permite ler uma string com espaços até encontrar uma nova linha.

    char Cidade2[20]; //"Fortaleza" Nome da cidade.
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]", Cidade2);

    unsigned long int População2; //2627000 População de 2 milhões e 627 mil habitantes.
    printf("Digite a população da segunda carta: ");
    scanf("%lu", &População2); // %lu para ler um unsigned long int.

    float Área2; //313.8 Área em km².
    printf("Digite a área (km²) da segunda carta: ");
    scanf("%f", &Área2); // %f para ler um float.

    double PIB2; //73000000000.0 PIB em reais.
    printf("Digite o PIB da segunda carta: ");
    scanf("%lf", &PIB2); // %lf para ler um double.

    int Pontos2; //28 Número de pontos turísticos.
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &Pontos2); // %d para ler um inteiro.
    
    float Densidade_Populacional2 = População2 / Área2; // Cálculo da densidade populacional.
    printf("Densidade Populacional da segunda carta: %.2f habitantes/km²\n", Densidade_Populacional2);

    double PIBPerCapita2 = PIB2 / População2; // Cálculo do PIB per capita
    printf("PIB Per Capita da segunda carta: %.2f reais\n", PIBPerCapita2);

    double DPI2 = (1.0 / Densidade_Populacional2); // Cálculo do DPI (Densidade Populacional Inversa).
    printf("DPI da segunda carta: %.2f\n", DPI2);

    double SuperPoder2 = População2 + Área2 + PIB2 + Pontos2 + PIBPerCapita2 + DPI2; // Super poder da segunda carta.
    printf("Super Poder da segunda carta: %.2f\n", SuperPoder2);

    printf("\n");

    // Comparação das cartas
    printf("População da carta 1 (%lu) é maior que a da carta 2 (%lu) = %d\n", População, População2, (População > População2));
    printf("Área da carta 1 (%.1f) é maior que a da carta 2 (%.1f) = %d\n", Área, Área2, (Área > Área2));
    printf("PIB da carta 1 (%.0f) é maior que o da carta 2 (%.0f) = %d\n", PIB, PIB2, (PIB > PIB2));
    printf("Pontos Turísticos da carta 1 (%d) é maior que o da carta 2 (%d) = %d\n", Pontos, Pontos2, (Pontos > Pontos2));
    printf("Densidade Populacional da carta 1 (%.2f) é menor que a da carta 2 (%.2f) = %d\n", Densidade_Populacional, Densidade_Populacional2, (Densidade_Populacional < Densidade_Populacional2));
    printf("PIB Per Capita da carta 1 (%.2f) é maior que o da carta 2 (%.2f) = %d\n", PIBPerCapita, PIBPerCapita2, (PIBPerCapita > PIBPerCapita2));
    printf("Super Poder da carta 1 (%.2f) é maior que o da carta 2 (%.2f) = %d\n", SuperPoder, SuperPoder2, (SuperPoder > SuperPoder2));

    return 0;
}