#include <stdlib.h> // Biblioteca de: malloc, calloc, free
int main ()
{
	int *Vet1, *Vet2; //Declara��o dos ponteiros
	Vet1 = (int*) malloc (100*sizeof(int)); //Aloca��o de mem�ria
	Vet2 = (int*) calloc (100, sizeof(int)); //Aloca��o de mem�ria
	printf("%p", Vet1)
	printf("%p", Vet2)
	free (Vet1); //Desaloca��o de mem�ria
	free (Vet2); //Desaloca��o de mem�ria
	return 0;
}

