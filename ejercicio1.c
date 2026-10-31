#include <stdio.h>
int main(void) {
    int n, i, suma = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            suma = suma + i;
        }
    }
    printf("%d\n", suma);
    return 0;
}
