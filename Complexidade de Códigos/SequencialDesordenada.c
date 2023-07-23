#include <stdio.h>

int buscaSequencialDesordenada(int *V, int n, int chave) {
    int p, posic = -1;
    for(p = 0; p < n; p++) {
        if(chave == V[p]) {
            posic = p;
       break; }
    }
    return posic;
}

int main() {
    int vetor[4] = {20, 3, 8, 8};
    int chave = 8;
    int posicao = buscaSequencialDesordenada(vetor, 4, chave);
    
    if (posicao != -1)
        printf("Chave encontrada na posição %d\n", posicao);
    else
        printf("Chave não encontrada no vetor\n");
    
    return 0;
}

