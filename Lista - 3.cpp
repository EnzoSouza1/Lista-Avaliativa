#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    float raio, volume, area;
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);
    volume = (4.0/3) * PI * pow(raio, 3);
    area = 4 * PI * pow(raio, 2);
    printf("A area da superficie da esfera e: %.4f\n", area);
    printf("O volume da esfera e: %.4f\n", volume);
    return 0;
}

