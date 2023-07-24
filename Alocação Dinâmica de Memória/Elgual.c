#include <stdio.h>
#include <stdlib.h>

int Elgual(int pveta[], int pvetb[], int ptama, int ptamb){
	
	if(pveta == pvetb){
		return 0;
	}
	
	for(int i = 0; i < ptama; i++){
		if(pveta[i] != pvetb[i]){
			return 0;
		}
	}
	return 1;
}

int main(){
	int pveta[5] = {1,2,3,4,5};
	int pvetb[5] = {1,2,3,4,5};
	int ptama = 5;
	int ptamb = 5;
	
	if(Elgual(pveta, pvetb, ptama, ptamb)){
		printf("Os vetores sao iguais");
	}else{
		printf("Os vetores sao diferentes");
	}

}
