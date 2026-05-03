#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// No nível Aventureiro: Deve criar o calculo de densidade populacional e pib per capita. Depois exibir junto aos dados das cartas.
// No nível Mestre eu devo criar a variavel super poder que soma as variaveis e depois fazer comparações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado_1[50], codigo_1[50], nomecidade_1[50];
    unsigned long int populacao_1;
    // Modifiquei para unsigned long int
    int npontoturistico_1;
    float areakm_1, pib_1;
    float densidadepopulacional_1, pibpercapita_1, superpoder_1;
  
    char estado_2[50], codigo_2[50], nomecidade_2[50];
    unsigned long int populacao_2;
    // Modifiquei para unsigned long int
    int npontoturistico_2;
    float areakm_2, pib_2;
    float densidadepopulacional_2, pibpercapita_2, superpoder_2;

  // Área para entrada de dados
  //Cadastro Primeira carta:
  printf("Vamos cadastrar as cartas do jogo Super Trunfo \n");
  printf("Qual o estado da 1º carta?\n");
  scanf("%s", estado_1);

  printf("Qual o código da carta?\n");
  scanf("%s", codigo_1);

  printf("Qual o nome da cidade?\n");
  scanf(" %[^\n]", nomecidade_1);
// %[^\n] significa leia tudo o que o usuário digitar até que ele aperte Enter
// o espaço antes do % serve pra limpar qualquer enter da memoria.

  printf("Qual a população total dessa cidade?\n");
  scanf("%lu", &populacao_1);
  // %lu é o especificador para unsigned long int

  printf("Qual a área em km² da cidade?\n");
  scanf("%f", &areakm_1);

  printf("Qual o PIB da cidade?\n");
  scanf("%f", &pib_1);

  printf("Qual o número de pontos turisticos nessa cidade?\n");
  scanf("%d", &npontoturistico_1);

  // Cálculos da Carta 1
    densidadepopulacional_1 = (float) populacao_1 / areakm_1;
    pibpercapita_1 = (float) pib_1 / populacao_1;
  // O Super Poder soma todos os atributos, convertendo os inteiros para float e usando o inverso da densidade
    superpoder_1 = (float)populacao_1 + areakm_1 + pib_1 + (float)npontoturistico_1 + pibpercapita_1 + (1.0f / densidadepopulacional_1);

  //Cadastro da Segunda Carta:
  printf("Vamos cadastrar a segunda carta!\n");
  printf("Qual o estado da 2º carta?\n");
  scanf("%s", estado_2);

  printf("Qual o código da carta?\n");
  scanf("%s", codigo_2);

  printf("Qual o nome da cidade?\n");
  scanf(" %[^\n]", nomecidade_2);

  printf("Qual a população total dessa cidade?\n");
  scanf("%lu", &populacao_2);
  // %lu é o especificador para unsigned long int

  printf("Qual a área em km² da cidade?\n");
  scanf("%f", &areakm_2);

  printf("Qual o PIB da cidade?\n");
  scanf("%f", &pib_2);

  printf("Qual o número de pontos turisticos nessa cidade?\n");
  scanf("%d", &npontoturistico_2);

  // Cálculos da Carta 2
    densidadepopulacional_2 = (float) populacao_2 / areakm_2;
    pibpercapita_2 = (float) pib_2 / populacao_2;
    superpoder_2 = (float)populacao_2 + areakm_2 + pib_2 + (float)npontoturistico_2 + pibpercapita_2 + (1.0f / densidadepopulacional_2);

  // Área para exibição dos dados da cidade
printf("Carta 001 \n"
         "Estado: %s \n"
         "Código: %s \n"
         "Nome da Cidade: %s \n"
         "População: %d \n"
         "Área em KM²: %.2f \n"
         "PIB: %.2f \n"
         "Número de Pontos Turísticos: %d \n", 
         estado_1, codigo_1, nomecidade_1, populacao_1, areakm_1, pib_1, npontoturistico_1);
  
densidadepopulacional_1 = (float) populacao_1 / areakm_1;
  printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional_1);
  
pibpercapita_1 = (float) pib_1 / populacao_1;
  printf("PIB per capita: %.2f reais\n", pibpercapita_1);

printf("-------------------------------\n");
  
printf("Carta 002 \n"
         "Estado: %s \n"
         "Código: %s \n"
         "Nome da Cidade: %s \n"
         "População: %d \n"
         "Área: %.2f km² \n"
         "PIB: %.2f \n"
         "Número de Pontos Turísticos: %d \n", 
         estado_2, codigo_2, nomecidade_2, populacao_2, areakm_2, pib_2, npontoturistico_2); 
         
densidadepopulacional_2 = (float) populacao_2 / areakm_2;
  printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional_2);
  
pibpercapita_2 = (float) pib_2 / populacao_2;
  printf("PIB per capita: %.2f reais\n", pibpercapita_2);

printf("\n-------------------------------\n");

// Variáveis para armazenar o resultado booleano (1 ou 0) das comparações
    int res_populacao = populacao_1 > populacao_2;
    int res_area = areakm_1 > areakm_2;
    int res_pib = pib_1 > pib_2;
    int res_pontos = npontoturistico_1 > npontoturistico_2;
    // Para densidade populacional, a carta com o menor valor vence (inversão da regra)
    int res_densidade = densidadepopulacional_1 < densidadepopulacional_2; 
    int res_pibcapita = pibpercapita_1 > pibpercapita_2;
    int res_superpoder = superpoder_1 > superpoder_2;

    // Área para exibição dos resultados das comparações
    printf("Comparação de Cartas:\n");
    
  /*
    A conta (2 - resultado) transforma o booleano na carta vencedora dinamicamente.
    Se res_populacao for 1 (Carta 1 vence): 2 - 1 = 1. Vai imprimir "Carta 1 venceu (1)"
    Se res_populacao for 0 (Carta 2 vence): 2 - 0 = 2. Vai imprimir "Carta 2 venceu (0)"
  */
    printf("População: Carta %d venceu (%d)\n", 2 - res_populacao, res_populacao);
    printf("Área: Carta %d venceu (%d)\n", 2 - res_area, res_area);
    printf("PIB: Carta %d venceu (%d)\n", 2 - res_pib, res_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - res_pontos, res_pontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - res_densidade, res_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - res_pibcapita, res_pibcapita);
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - res_superpoder, res_superpoder);

    return 0;
} 

//APRENDIZADOS:
// Não precisa de & quando a variavel for uma string.
//Eu pesquisei, pra escolher casas decimais do float, pode-se fazer assim %.2f (sendo 2 o numero de casas decimais).
// Usar um printf só, porém bem estruturado, é melhor do que vários printf. (Fiz essa melhoria de estrutura no código)
