#include <stdio.h>
#include <string.h>
int main(void) {
    char nombre[10][40], pila[10][40];
    int i, tope = 0;
    for (i = 0; i < 10; i++) {
        scanf("%39s", nombre[i]);
        if (strcmp(nombre[i], "Santiago") != 0 &&
            strcmp(nombre[i], "Pedro") != 0 &&
            strcmp(nombre[i], "Ariadna") != 0 &&
            strcmp(nombre[i], "Marco") != 0 &&
            strcmp(nombre[i], "Juan") != 0 &&
            strcmp(nombre[i], "Angel") != 0) {
            strcpy(pila[tope++], nombre[i]);
        }
    }
    printf("%d\n", tope);
    while (tope > 0) {
        puts(pila[--tope]);
    }
    return 0;
}
