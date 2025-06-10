#include <stdio.h>

int main (){
    float distancia, tempo, velocidade;

 printf("===== Calculo de velocidade de um objeto =====\n" );
 printf("Digite a distancia em km (Digite apenas numeros)" );
 scanf("%f", &distancia);
 printf("Digite o tempo em horas(Digite apenas numeros)" );
 scanf("%f",&tempo);
 velocidade = distancia / tempo;
 printf("Velocidade do objeto: %f", velocidade);
    return 0;
}