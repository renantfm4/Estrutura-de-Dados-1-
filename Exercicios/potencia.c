#include <stdio.h>

int elevado(int x, int n){
	if(n == 0){
		return 1;
	}
	else {
		return x * elevado(x, n-1);
	}
}

int main(){
	int x;
	int n;
	
	printf("Escreva o valor de x: ");
	scanf("%d", &x);
	printf("Escreva o valor de y: ");
	scanf("%d", &n);
	int resultado = elevado(x,n);
	printf("O valor de %d elevado a %d eh: %d", x, n, resultado);
	return 0;
}
