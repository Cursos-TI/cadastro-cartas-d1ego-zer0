#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado_1[50], codigo_1[50], nomecidade_1[50];
  int populacao_1, npontoturistico_1;
  float areakm_1, pib_1;
  char estado_2[50], codigo_2[50], nomecidade_2[50];
  int populacao_2, npontoturistico_2;
  float areakm_2, pib_2;

  // Área para entrada de dados
  //Cadastro Primeira carta:
  printf("Vamos cadastrar as cartas do jogo Super Trunfo \n");
  printf("Qual o estado da 1º carta?\n");
  scanf("%s", &estado_1);

  printf("Qual o código da carta?\n");
  scanf("%s", &codigo_1);

  printf("Qual o nome da cidade?\n");
  scanf("%s", &nomecidade_1);

  printf("Qual a população total dessa cidade?\n");
  scanf("%d", &populacao_1);

  printf("Qual a área em km² da cidade?\n");
  scanf("%f", &areakm_1);

  printf("Qual o PIB da cidade?\n");
  scanf("%f", &pib_1);

  printf("Qual o número de pontos turisticos nessa cidade?\n");
  scanf("%d", &npontoturistico_1);

  //Cadastro da Segunda Carta:
  printf("Vamos cadastrar a segunda carta!\n");
  printf("Qual o estado da 2º carta?\n");
  scanf("%s", &estado_2);

  printf("Qual o código da carta?\n");
  scanf("%s", &codigo_2);

  printf("Qual o nome da cidade?\n");
  scanf("%s", &nomecidade_2);

  printf("Qual a população total dessa cidade?\n");
  scanf("%d", &populacao_2);

  printf("Qual a área em km² da cidade?\n");
  scanf("%f", &areakm_2);

  printf("Qual o PIB da cidade?\n");
  scanf("%f", &pib_2);

  printf("Qual o número de pontos turisticos nessa cidade?\n");
  scanf("%d", &npontoturistico_2);

  // Área para exibição dos dados da cidade
  printf("Carta 001 \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área em KM²: %f \n PIB: %f \n Número de Pontos Turísticos: %d \n", estado_1, codigo_1, nomecidade_1, populacao_1, areakm_1, pib_1, npontoturistico_1);

    printf("-------------------------------\n");
  
  printf("Carta 002 \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área em KM²: %f \n PIB: %f \n Número de Pontos Turísticos: %d \n", estado_2, codigo_2, nomecidade_2, populacao_2, areakm_2, pib_2, npontoturistico_2);
    
  /* Analisar se usar vários printf pode deixar o programa mais lento.
    Porém assim fica bem mais organizado.
  printf("Carta 001\n");
  printf("Estado: %s\n", estado_1);
  printf("Código: %s\n", codigo_1);
  printf("Nome da Cidade: %s\n", nomecidade_1);
  printf("População: %d\n", populacao_1);
  printf("Área em KM²: %f\n", areakm_1);
  printf("PIB: %f\n", pib_1);
  printf("Número de Pontos Turísticos: %d\n", npontoturistico_1);

  Exemplo do retorno do código:
  Carta 001 
 Estado: Amazonas 
 Código: A01 
 Nome da Cidade: Manaus 
 População: 2000000 
 Área em KM²: 123456.000000 
 PIB: 999999.000000 
 Número de Pontos Turísticos: 500
 
Eu pesquisei, pra escolher casas decimais do float, pode-se fazer assim %.2f (sendo 2 o numero de casas decimais).
*/
return 0;
} 
