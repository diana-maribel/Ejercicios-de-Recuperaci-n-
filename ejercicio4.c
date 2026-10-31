#include <stdio.h>
#include <string.h>
int main(void) {
    int a[205], ini = 100, fin = 100, n, x, i, j;
    char op[20];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%19s", op);
        if (strcmp(op, "PUSH_TOP") == 0) {
            scanf("%d", &x); a[--ini] = x;
        } else if (strcmp(op, "PUSH_BOTTOM") == 0) {
            scanf("%d", &x); a[fin++] = x;
        } else if (strcmp(op, "POP_TOP") == 0) {
            if (ini < fin) ini++;
        } else if (strcmp(op, "POP_BOTTOM") == 0) {
            if (ini < fin) fin--;
        }
    }
    if (ini == fin) puts("BAUL VACIO");
    else {
        for (j = ini; j < fin; j++) printf("%d ", a[j]);
        printf("\n");
    }
    return 0;
}
