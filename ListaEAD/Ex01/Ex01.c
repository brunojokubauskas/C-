#include<stdio.h>
int main (){
    float quilos, multa, valor;
    multa = 4.00;
    printf("Insira a quantidade de quilos de peixe que vc pegou:(Kg) ");
    scanf("%f", &quilos);
    if(quilos > 50.00){
        valor = quilos * multa;
        printf("Voce ultrapassou o valor permitido, ira pagar: R$%.2f", valor);
    }else{
        printf("Muito bem, voce nao passou do excesso permitido pelo estado!\n");
    }



return 0;
}
