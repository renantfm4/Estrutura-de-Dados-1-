#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n=10;
	int Vetor[] = {3,5,8,1,9,2,4,7,0,6};
	
	selecao(Vetor,n);
	
	printf("\n\n");
	
	for(int i=0; i<n;i++){
		printf("%d - ", Vetor[i]);
	}
	
	printf("\n\n\n");
	
	system("pause");
	return 0;
}
