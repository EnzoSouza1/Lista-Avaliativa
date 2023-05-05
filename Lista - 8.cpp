#include <stdio.h>

int main() {
    int num, maior = 0, menor = 0, primeiro = 1;

    while (1) {
        printf("Digite um numero inteiro (negativo para sair): ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        if (primeiro) {
            maior = num;
            menor = num;
            primeiro = 0;
        } else {
            if (num > maior) {
                maior = num;
            }

            if (num < menor) {
                menor = num;
            }
        }
    }

    printf("Maior numero lido: %d\n", maior);
    printf("Menor numero lido: %d\n", menor);

    return 0;
}

