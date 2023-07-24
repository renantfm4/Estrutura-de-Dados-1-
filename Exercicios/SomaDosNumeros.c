#include <stdio.h>

int somaDigitos(int n) {
    if(n < 10) { // caso base
        return n;
    } else {
        return (n % 10) + somaDigitos(n / 10); // chamada recursiva
    }
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    int resultado = somaDigitos(num);
    printf("A soma dos digitos de %d eh: %d", num, resultado);
    return 0;
}

