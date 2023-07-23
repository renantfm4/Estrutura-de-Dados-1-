#include <stdio.h>

int buscaBinaria(int *V, int n, int chave) {
    int p, inicio, final, meio;
    inicio = 0;
    final = n - 1;
    while (inicio <= final) {
        meio = (final - inicio) / 2;
        if (chave == V[meio])
            return meio;
        if (chave < V[meio])
            meio = meio +1; // busca nos valores menores
        else
        	meio = meio -1; // busca nos valores maiores
    }
    return -1; // chave não encontrada
}

int main() {
    int vetor[] = {8, 12, 20, 32};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int chave = 20;

    int indice = buscaBinaria(vetor, tamanho, chave);

    if (indice != -1)
        printf("Chave encontrada no índice %d\n", indice);
    else
        printf("Chave não encontrada no vetor\n");

    return 0;
}
