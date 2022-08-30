#include <stdio.h>
#include<locale.h>
#include<stdbool.h>

int main (){
printf("=============================\n");
printf("====== LOJAS TABAJARA =======\n");
printf("=============================\n");

float total = 0, dinheiro, valor = 0;
int produto = 0;

while (true){
  produto++;
  printf("Produto %d: R$ ", produto);
  scanf("%f", &valor);
  if(valor == 0){
    break;
  }
  total += valor;
}

    printf("Total: R$ %.2f", total);
    printf("Dinheiro: R$ ");
    scanf("%f", &dinheiro);
    printf("Troco: %.2f", dinheiro - total);

return 0;
}
