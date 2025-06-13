#include <stdio.h>

int main(){ 
    char estado, estado2;
    char lestado[20], lestado2[20];
    char cidade[20], cidade2[20];
    unsigned long int populacao, populacao2;
    float densidade, densidade2, areakm, areakm2;
    float pib, pib2, pibpc, pibpc2;
    float superpoder, superpoder2;
    int pontosturisticos, pontosturisticos2;
    int opcaojogador, opcaojogador2;
   
    

    printf("Digite a letra do estado(de A a H)\n");
    scanf(" %c", &estado);


    printf("Digite a letra do estado seguido de um codigo(ex:C01, H02):\n");
    scanf(" %s", &lestado);
  

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &cidade);
    

    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%lu", &populacao);
    

    printf("Digite o tamanho da area em KM:\n");
    scanf("%f", &areakm);
    
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib);


    printf("digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosturisticos);
 

    densidade = (float)populacao / areakm;
    pibpc =  pib / (float)populacao; 
    superpoder = (float)populacao + areakm + pib + pontosturisticos + pibpc + (1 / densidade);
    


    printf("agora digite as informações da carta 02\n");

    printf("Digite a letra do estado(de A a H)\n");
    scanf(" %c", &estado2);
    

    printf("Digite a letra do estado seguido de um codigo(ex:C01, H02):\n");
    scanf(" %s", &lestado2);
   

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &cidade2);
    

    printf("Digite o numero de habitantes da cidade:\n");
    scanf("%lu", &populacao2);
   

    printf("Digite o tamanho da area em KM:\n");
    scanf("%f", &areakm2);
    
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    

    printf("digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosturisticos2);
    
    densidade2 = (float)populacao2 / areakm2;
    pibpc2 = pib2 / (float)populacao2;
    superpoder2 = (float)populacao2 + (float)areakm2 + (float)pib2 + (float)pontosturisticos2 + pibpc2 + (1 / densidade2);
    
    printf("escolha dois desses atributos para comparar\n");
    printf("1. densidade populacional\n");
    printf("2. pib\n");
    printf("3. pontos turisticos\n");
    printf("4. pib per capita\n");
    printf("5. superpoder\n");
    

    // tentei utilizar todos os operadores ensinados
    printf("escolha o primeiro atributo para comparar\n");
    scanf("%d", &opcaojogador);
    printf("escolha o segundo atributo para comparar\n");
    scanf("%d", &opcaojogador2);


    if (opcaojogador == opcaojogador2){
        printf("voce escolheu o mesmo atributo\n");
    } else {
    switch (opcaojogador)
    {
    case 1: 
        if(densidade == densidade2){
        printf("valores iguais, empate!\n");
        } else{
        printf("a densidade populacional da carta 01 é: %.2f\n", densidade);
        printf("a densidade populacional é %.2f\n", densidade2);
        densidade < densidade2 ? printf("carta 01 venceu!\n"): printf("carta 02 venceu!\n");}
    break;
    case 2: if(pib == pib2) {
        printf("valores iguais, empate!\n");
        } else{
        printf("o pib da carta 01 é: %.2f\n", pib);
        printf("o pib da carta 02 é: %.2f\n", pib2);
        pib > pib2 ? printf("carta 01 venceu!\n"): printf("carta 02 venceu!\n");}
    break;    
    case 3: if(pontosturisticos == pontosturisticos2) {
        printf("valores iguais, empate!\n");
        } else{
        printf("pontos turisticos da carta 01 é: %d\n", pontosturisticos);
        printf("pontos turisticos da carta 02 é: %d\n", pontosturisticos2);
        pontosturisticos > pontosturisticos2 ? printf("carta 01 venceu!\n"): printf("carta 02 venceu!\n");}
    break;
    case 4:if(pibpc == pibpc2) {
        printf("valores iguais, empate!\n");
        } else{
        printf("o pib per capita da carta 01 é: %.2f\n", pibpc);
        printf("o pib per capita da carta 02 é: %.2f\n", pibpc2);
        pibpc > pibpc2 ? printf("carta 01 venceu!\n"): printf("carta 02 venceu!\n");}
    break;

    case 5:if(superpoder == superpoder2) {
        printf("valores iguais, empate!\n");
        } else{
        printf("o superpoder da carta 01 é: %.2f\n", superpoder);
        printf("o superpoder da carta 02 é: %.2f\n", superpoder2);
        superpoder > superpoder2 ? printf("carta 01 venceu!\n"): printf("carta 02 venceu!\n");}
    break;
    default:
    printf("opção invalida");
        break;
    }}

    if (opcaojogador == opcaojogador2){
        printf("voce escolheu o mesmo atributo\n");
    } else {
    switch (opcaojogador2)
    {
    case 1: 
        if(densidade == densidade2){
        printf("valores iguais, empate!\n");
        } else{
        printf("a densidade populacional da carta 01 é: %.2f\n", densidade);
        printf("a densidade populacional é %.2f\n", densidade2);
        densidade < densidade2 ? printf("carta 01 venceu!\n"): printf("carta 02 venceu!\n");}
    break;
    case 2: if(pib == pib2) {
        printf("valores iguais, empate!\n");
        } else{
        printf("o pib da carta 01 é: %.2f\n", pib);
        printf("o pib da carta 02 é: %.2f\n", pib2);
        pib > pib2 ? printf("carta 01 venceu!\n"): printf("carta 02 venceu!\n");}
    break;    
    case 3: if(pontosturisticos == pontosturisticos2) {
        printf("valores iguais, empate!\n");
        } else{
        printf("pontos turisticos da carta 01 é: %d\n", pontosturisticos);
        printf("pontos turisticos da carta 02 é: %d\n", pontosturisticos2);
        pontosturisticos > pontosturisticos2 ? printf("carta 01 venceu!\n"): printf("carta 02 venceu!\n");}
    break;
    case 4:if(pibpc == pibpc2) {
        printf("valores iguais, empate!\n");
        } else{
        printf("o pib per capita da carta 01 é: %.2f\n", pibpc);
        printf("o pib per capita da carta 02 é: %.2f\n", pibpc2);
        pibpc > pibpc2 ? printf("carta 01 venceu!\n"): printf("carta 02 venceu!\n");}
    break;

    case 5:if(superpoder == superpoder2) {
        printf("valores iguais, empate!\n");
        } else{
        printf("o superpoder da carta 01 é: %.2f\n", superpoder);
        printf("o superpoder da carta 02 é: %.2f\n", superpoder2);
        superpoder > superpoder2 ? printf("carta 01 venceu!\n"): printf("carta 02 venceu!\n");}
    break;
    default:
    printf("opção invalida");
        break;
    }}

   






}