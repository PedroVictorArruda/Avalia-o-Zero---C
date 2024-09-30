#include <stdio.h>

int main() {
    int numero, i;
    unsigned long long fatorial = 1;  

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial não existe para números negativos.\n");
    } else {
        for(i = 1; i <= numero; ++i) {
            fatorial *= i; 
        }

        printf("O fatorial de %d é %llu\n", numero, fatorial);
    }

    return 0;
}
