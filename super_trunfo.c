//Definindo as variáveis.
#include <stdio.h>
int main(){  
    char estado[20], estado2[20]; 
    char codigo[20], codigo2[20];
    char cidade[20], cidade2[20];
    int população, população2;
    float areakm, areakm2;
    float pib, pib2;
    int pontosT, pontosT2;
//Colhendo as informações da carta do usuário.
printf("Escolha uma letra que represente um dos 8 estados \n");
printf("Góias, Bahia, São Paulo, Pará, Amazonas, Mato grosso, Tocantins, Rio de janeiro. \n");
printf("Digite seu estado:  \n");
scanf("%s", &estado);
printf("O código da carta deve ser definido pela primeira letra do estado, junto com um número de '01' a '03', Ex:G01 \n");
printf("Digite o código da carta: \n");
scanf("%s", &codigo);

printf("Digite o nome da cidade: \n");
scanf("%s", &cidade);

printf("Digite a população da cidade: \n");
scanf("%d", &população);

printf("Digite a área em km² da sua cidade: \n");
scanf("%f", &areakm);

printf("Digite o PIB da sua cidade: \n");
scanf("%f", &pib);

printf("Digite a quantidade de pontos turísticos da cidade: \n");
scanf("%d", &pontosT);


//Colhendo as informações da segunda carta do usuário.
printf("Escolha as estatísticas da segunda carta. \n");
printf("Digite seu estado:  \n");
scanf("%s", &estado2);

printf("Digite o código da carta: \n");
scanf("%s", &codigo2);

printf("Digite o nome da cidade: \n");
scanf("%s", &cidade2);

printf("Digite a população da cidade: \n");
scanf("%d", &população2);

printf("Digite a área em km² da sua cidade: \n");
scanf("%f", &areakm2);

printf("Digite o PIB da sua cidade: \n");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turísticos da cidade: \n");
scanf("%d", &pontosT2);

printf("Carta 1 \n");
printf("Estado: %s \nCódigo: %s \nNome da cidade: %s \nPopulação: %d \nÁrea por km²: %f \nPIB: %f \nPontos turísticos: %d \n",
 estado, codigo, cidade, população, areakm, pib, pontosT);

printf("carta 2 \n");
printf("Estado: %s \nCódigo: %s \nNome da cidade: %s \nPopulação: %d \nÁrea por km²: %f \nPIB: %f \nPontos turísticos: %d",
 estado2, codigo2, cidade2, população2, areakm2, pib2, pontosT2);

return 0;
}



