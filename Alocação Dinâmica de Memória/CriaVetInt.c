#include <stdio.h>
#include <stdlib.h>


int* CriaVetInt(int n){
	
	int* v = (int *) malloc(n * sizeof(int));
	return v;
}

	int main(){
		int n = 50;
		int *v = CriaVetInt(n);
		if(v){
			printf("%d", v);
	}
	}
