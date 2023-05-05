#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            nextTerm = t1;
        } else if (i == 2) {
            nextTerm = t2;
        } else {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
    }

    printf("O %d-esimo termo da sequencia de Fibonacci eh: %d\n", n, nextTerm);

    return 0;
}

