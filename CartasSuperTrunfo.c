#include <stdio.h>

// apaguei as informoções do desafio daqui pois  estava dando erro!


int main() {
    char codigo[4]; 
    char nome[50];
    int populacao;
    double area, pib;
    int pontosTuristicos;

   
    printf("Digite o nome da cidade: ");
    scanf("%s", nome); // não permite espaços entre os nomes 
   
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%3s", codigo); //só lê 3 codigos ex A01

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao); 
    printf("Digite a área da cidade (em km²): ");
    scanf("%lf", &area); 

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib); 

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos); 

    
    printf("\n Dados da Cidade \n");
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2lf km²\n", area);
    printf("PIB: %.2lf\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}
