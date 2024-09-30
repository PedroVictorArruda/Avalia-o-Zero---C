#include <stdio.h>

int main() {
    char string[500];  
    int i, contador = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    for(i = 0; string[i] != '\0'; i++) { 
        contador++;
    }

    printf("A string inserida possui %d caracteres.\n", contador - 1);

    return 0;
}
