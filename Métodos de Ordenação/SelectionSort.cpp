#include <stdio.h>
#include <stdlib.h>

void selecao(int Vet[], int n){
	
	int Menor, aux;
	
	for (int i=0;i<n-1;i++){
		Menor=i;
		for (int j=i+1;j<n;j++){ // Como não precisa comparar um valor que já está ordenado, 
		//pula pra proxima posiçao usando i+1
			if(Vet[Menor]>Vet[j])
				Menor=j;
			}
			if(i!=Menor){
				aux=Vet[i];
				Vet[i] = Vet[Menor];
				Vet[Menor]=aux;
		}
	}
}

int main(){
	
	int n=9;
	int Vetor[9] = {3,6,5,1,2,8,7,9,4};
	
	selecao(Vetor,n);
	
	printf("\n\n");
	
	for(int i=0; i<n;i++){
		printf("%d - ", Vetor[i]);
	}
	
	printf("\n\n\n");
	
	system("pause");
	return 0;
}
