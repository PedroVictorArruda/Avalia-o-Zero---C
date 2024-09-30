#include <stdio.h>

int main() {
    int numeros[5]; 
    int i, soma = 0;  

    for(i = 0; i < 5; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for(i = 0; i < 5; i++) {
        soma += numeros[i];  
    }

    printf("A soma total dos números é: %d\n", soma);

    return 0;
}
