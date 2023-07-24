#include <stdio.h>
#include <stdlib.h>

float* CriarVetFloat(float n){
	
	float* v = (float*) malloc(n * sizeof(float));
	return v;
}

 	int main(){
		float n = 50;
		float *v = CriarVetFloat(n);
		if(v){
			printf("%d", v);
	}
}
