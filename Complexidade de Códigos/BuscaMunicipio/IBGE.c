#include <stdio.h>
#include <string.h>

#define MAX_LINE_SIZE 1000

typedef struct {
    char ConcatUFMun[50];
    char IBGE[10];
    char IBGE7[10];
    char UF[10];
    char Municipio[100];
    char Regiao[50];
    char Populacao2010[20];
    char Porte[20];
    char Capital[10];
} Municipio;

Municipio lerMunicipio(FILE *arq) {
    Municipio municipio;
    fscanf(arq, "%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^;];%[^\n]\n",
           municipio.ConcatUFMun, municipio.IBGE, municipio.IBGE7,
           municipio.UF, municipio.Municipio, municipio.Regiao,
           municipio.Populacao2010, municipio.Porte, municipio.Capital);
    return municipio;
}

void mostrarInformacoes(Municipio municipio) {
    printf("Município: %s\n", municipio.Municipio);
    printf("UF: %s\n", municipio.UF);
    printf("Região: %s\n", municipio.Regiao);
    printf("População em 2010: %s\n", municipio.Populacao2010);
    printf("Porte: %s\n", municipio.Porte);
}

int main() {
    FILE *arq;
    char codigoMunicipio[10];
    Municipio municipio;
    
    arq = fopen("ListaMunicipios.csv", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    printf("Digite o codigo do municipio: ");
    scanf("%s", codigoMunicipio);
    
    while (!feof(arq)) {
        municipio = lerMunicipio(arq);
        
        if (strcmp(municipio.IBGE, codigoMunicipio) == 0) {
            mostrarInformacoes(municipio);
            break;
        }
    }
    
    if (feof(arq)) {
        printf("Município não encontrado.\n");
    }
    
    fclose(arq);
    
    return 0;
}


