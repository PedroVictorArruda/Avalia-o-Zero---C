#include <stdio.h>

int main() {
    int numero, i, ehPrimo = 1;  

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        ehPrimo = 0;
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {  
                ehPrimo = 0;
                break; 
            }
        }
    }

    if (ehPrimo == 1) {
        printf("%d é primo.\n", numero);
    } else {
        printf("%d não é primo.\n", numero);
    }

    return 0;
}
