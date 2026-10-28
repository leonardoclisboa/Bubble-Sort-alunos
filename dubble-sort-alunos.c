#include <stdio.h>

int main() {
    float notas[10] = {5.5, 8.9, 7.2, 9.5, 4.0, 6.8, 10.0, 7.5, 8.0, 6.0};
    int tamanho = 10;

    printf("--- SISTEMA DE CLASSIFICACAO DE NOTAS ESCOLARES ---\n\n");
    
    printf("Notas originais (antes da ordenacao):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.1f ", notas[i]);
    }
    printf("\n\n");
    
    return 0;
}