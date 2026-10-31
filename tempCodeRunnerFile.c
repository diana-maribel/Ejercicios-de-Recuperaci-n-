#include <stdio.h>
int main(void) {
    int n, x, i, ns = 0, eo = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x == 1) {
            ns++;
        } else if (x == 2) {
            eo++;
        }
    }
    printf("%d %d\n", ns, eo);
    return 0;
}