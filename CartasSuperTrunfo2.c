#include <stdio.h>

int main() {
    char estado, codigocarta[3], cidade[20];
    int populacao, pturisticos;
    int count, i;
    float area, PIB, densidadep, pibcapita;

    count = 2; // numero de cartas que o programa vai ler

    for (i = 0; i < count; i++) // contador de cartas
    {
        printf("Digite o estado da carta (de 'A' a 'H'): \n");
        scanf(" %c", &estado); // sempre adicionar um espaço antes do %c para evitar erros de leitura.

        printf("Digite o codigo da carta sendo ele uma letra e dois numeros (ex: A01): \n");
        scanf("%s", codigocarta);

        printf("Digite o nome de uma cidade: \n");
        scanf(" %[^\n]", cidade); //ler o nome da cidade com espaços. lembre sempre de colocar um espaço antes do "%" para evitar que overflow

        printf("Digite o numero de habitantes: \n");
        scanf("%d", &populacao);

        printf("Digite a area da cidade em km quadrados: \n");
        scanf("%f", &area);

        printf("Digite o PIB da cidade: \n");
        scanf("%f", &PIB);

        printf("Digite o numero de pontos turisticos: \n");
        scanf("%d", &pturisticos);

        printf("Carta %d\n", i + 1); // incrementa o contador de cartas
        printf("Estado: %c\n", estado);
        printf("Codigo: %s\n", codigocarta);
        printf("Cidade: %s\n", cidade);
        printf("Populacao: %d\n", populacao);
        printf("Area: %.2f km2\n", area);
        printf("PIB: %.2f\n", PIB);
        printf("Numero de pontos Turisticos: %d\n", pturisticos);

        densidadep = (float)(populacao / area); // calcula a densidade populacional

        printf("Densidade populacional: %.2f hab/km2\n", densidadep);

        pibcapita = (float)(PIB / populacao); // calcula o PIB per capita

        printf("PIB per capita: %.2f reais\n", pibcapita);


    }

    return 0;
}
