#include <stdio.h>

int main(){

    char letra1, letra2, letra3;

     printf("Digite a primeira letra: \n");
     scanf("%c", &letra1);
     printf("Digite a segunda letra: \n");
     scanf("%c", &letra2);
     printf("Digite a terceira letra: \n");
     scanf("%c", &letra3);
     printf("%c-%c-$c",letra3, letra2, letra1);

     return 0;
}