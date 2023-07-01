#include <stdio.h>
#include <stdlib.h>

int main() {
    char cadena[50];
    char caracter;

    printf("Introduce una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    printf("Introduce un caracter: ");
    caracter = getchar();

    int i = 0;
    int pos = -1;

    while (cadena[i] != '\0') {
        if (cadena[i] == caracter) {
            pos = i;
            break;
        }
        i++;
    }

    if (pos != -1) {
        printf("El caracter '%c' se encuentra en la posición %d de la cadena.\n", caracter, pos);
    } else {
        printf("El caracter '%c' no se encuentra en la cadena.\n", caracter);
    }

    
}
