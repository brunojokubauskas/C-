#include <stdio.h>
#include <locale.h>

int main (){
    float preco;
    int i = 0;
    setlocale(LC_ALL, "");
    printf("----------------------\n");
    printf("---LOJA QUASE DOIS---\n");
    printf("======================\n");
    for(i = 0; i <= 50;i++){
        printf("\n%d - R$ %.2f", i, 1.99 * i);
    }


return 0;
}
