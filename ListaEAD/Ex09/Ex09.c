#include <stdio.h>
int main (){
    int  i;
    printf("=====================================\n");
    printf("===== PANIFICADORA P�O DE ONTEM =====\n");
    printf("=====================================\n");
    for(i = 0;i<= 50;i++){
        printf("\n%d - R$ %.2f", i, 0.19 * i);
    }

return 0;
}
