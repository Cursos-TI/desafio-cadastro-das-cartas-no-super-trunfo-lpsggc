#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    int pturisticos; //pontos turísticos
    char codcidade[15];  //código da cidade
    char nome[15];
    float area;
    int pib;
    int populacao;
    float expectativida;   //expectativa de vida

    printf("\nEntre com o código da cidade: ");
    scanf("%s", &codcidade);
    printf("\nQual o nome dessa cidade: ");
    scanf("%s", &nome);
    printf("\nQuantos pontos turísticos tem essa cidade? ");
    scanf("%d", &pturisticos);
    printf("\nQual a área dessa cidade? ");
    scanf("%f", &area);
    printf("\nQual é o PIB dessa cidade? ");
    scanf("%d", &pib);
    printf("\nQual a população dessa cidade? ");
    scanf("%d", &populacao);
    printf("\nQual a expectativa de vida dessa cidade? ");
    scanf("%f", &expectativida);


    printf("Obrigado!\n");
    printf("Código da sua cidade: %s\n Nome dessa cidade: %s\n Pontos turísticos nessa cidade: %d\n Área da cidade: %f\n PIB da cidade: %d\n População dessa cidade: %d\n Expectativa de vida nessa cidade: %f",  codcidade, nome, pturisticos, area, pib, populacao, expectativida);
    


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
