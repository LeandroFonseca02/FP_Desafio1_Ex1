/*
Ismat - Engenheiria Informática 1º Ano
Fundamentos de Programação - Prof. Fracisco Pereira
Leandro Fonseca
17/11/2020 - 20:52
Resumo: Calcular soma e produto dos 10 primeiros numeros naturais
Inputs:
Outputs:
 */
#include <stdio.h>

int main() {

    int intSoma = 0;
    int intProd = 1;
    int i;

    for (int i = 1; i < 11; ++i) {
        intSoma += i;
        intProd *= i;
    }
    printf("A soma dos 10 primeiros numeros naturais: %d", intSoma);
    printf("\nO produto dos 10 primeiros numeros naturais: %d", intProd);
    return 0;
}