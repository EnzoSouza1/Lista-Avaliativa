#include <stdio.h>

int main() {
   int num, soma = 0;
   float media;

   printf("Digite 10 numeros inteiros:\n");

   for(int i = 0; i < 10; i++) {
      scanf("%d", &num);
      soma += num;
   }

   media = (float)soma / 10;

   printf("A media eh: %.2f\n", media);

   return 0;
}

