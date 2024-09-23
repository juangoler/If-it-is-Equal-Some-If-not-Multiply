#include <stdio.h>

int main()
{
int A, B, C;

printf("Digite o valor de A: ");
scanf("%d", &A);

printf("Digite o valor de B: ");
scanf("%d", &B);

if (A == B){
    C = A + B;
    printf("Os valores de A e B são iguais, nesse caso foi feito a soma.\nResultado: %.2d", C);
} else {
    C = A * B;
    printf("Os valores de A e B NÃO são iguais, nesse caso foi feito a multiplicação.\nResultado: %.2d", C);
}

    return 0;
}