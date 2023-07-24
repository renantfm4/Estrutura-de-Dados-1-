#include <stdio.h>
#include <string.h>

int main() {
	struct Livros {
		char titulo[50];
		char autor[50];
		char assunto[100];
		int id_livro;
	};
	/* Declarando Livro1 do tipo Livro */
	struct Livros Livro1;
	strcpy(Livro1.titulo, "Titulo generico"); 
	strcpy(Livro1.autor, "Blog Trybe");
	strcpy(Livro1.assunto, "Um livro bem generico");
	Livro1.id_livro = 83357;
	printf("Livro 1 titulo : %s\n", Livro1.titulo);
	printf("Livro 1 autor : %s\n", Livro1.autor);
	printf("Livro 1 assunto : %s\n", Livro1.assunto);
	printf("Livro 1 id_livro : %d\n", Livro1.id_livro);

	return 0;
}

