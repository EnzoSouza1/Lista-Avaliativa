#include <stdio.h>

int main() {
    int opcao, quantidade, continuar;
    float total = 0.0;
    
    do {
    
        printf("MENU DE FRUTAS:\n");
        printf("1 - ABACAXI - 5.00 a unidade\n");
        printf("2 - MACA - 1.00 a unidade\n");
        printf("3 - PERA - 4.00 a unidade\n");
        
        
        printf("\nDigite o numero da fruta desejada: ");
        scanf("%d", &opcao);
        
        
        switch(opcao) {
            case 1:
                printf("Voce escolheu ABACAXI. Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                total += quantidade * 5.0;
                break;
            case 2:
                printf("Voce escolheu MACA. Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                total += quantidade * 1.0;
                break;
            case 3:
                printf("Voce escolheu PERA. Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                total += quantidade * 4.0;
                break;
            default:
                printf("Opcao invalida!\n");
        }
        
        
        printf("\nDeseja continuar comprando? (1 - sim / 0 - nao): ");
        scanf("%d", &continuar);
        
    } while (continuar == 1);
    
    
    printf("\nTotal da compra: R$ %.2f\n", total);
    
    return 0;
}

