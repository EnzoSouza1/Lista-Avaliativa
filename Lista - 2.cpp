#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    printf("Digite o valor de x1: ");
    scanf("%f", &x1);
    printf("Digite o valor de y1: ");
    scanf("%f", &y1);
    printf("Digite o valor de x2: ");
    scanf("%f", &x2);
    printf("Digite o valor de y2: ");
    scanf("%f", &y2);

    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) �: %.4f\n", x1, y1, x2, y2, distancia);
    return 0;
}

