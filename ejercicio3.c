#include <stdio.h>
#include <string.h>
int main(void) {
    char s[1001], pila[1001];
    int i, tope = 0, valido = 1;
    scanf("%1000s", s);
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            pila[tope++] = '(';
        } else if (s[i] == ')') {
            if (tope == 0) {
                valido = 0;
                break;
            }
            tope--;
        }
    }
    if (valido && tope == 0)
        puts("BALANCEADO");
    else
        puts("NO BALANCEADO");
    return 0;
}
