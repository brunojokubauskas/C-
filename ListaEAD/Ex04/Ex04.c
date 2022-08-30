#include<stdio.h>
int main (){
    float salario, novosalario;
    printf("---------------------------\n");
    printf("-------- REAJUSTE ---------\n");
    printf("---------------------------\n");

    printf("Insira o seu salario atual: ");
    scanf("%f", &salario);

    if(salario <=  280.00){
        novosalario = salario + (salario * 20/100);
        printf("---------------------------------\n");
        printf("Seu antigo salario era R$%.2f\n",salario);
        printf("Voce teve um aumento de 20%%. Seu novo salario eh R$%.2f", novosalario);
    } else{
        if(salario <= 280.00 || salario <= 700.00){
                novosalario = salario +(salario*15/100);
                printf("---------------------------------\n");
                printf("Seu antigo salario era R$%.2f\n",salario);
                printf("Voce teve um aumento de 15%%. Seu novo salario eh R$%.2f", novosalario);


        }else{
            if(salario <= 700.00 || salario <= 1500.00){
                novosalario = salario +(salario*10/100);
                printf("---------------------------------\n");
                printf("Seu antigo salario era R$%.2f\n",salario);
                printf("Voce teve um aumento de 10%%. Seu novo salario eh R$%.2f", novosalario);

            }else{
                if(salario > 1500.00){
                novosalario = salario +(salario*5/100);
                printf("---------------------------------\n");
                printf("Seu antigo salario era R$%.2f\n",salario);
                printf("Voce teve um aumento de 5%%. Seu novo salario eh R$%.2f", novosalario);

                }

            }

        }

    }

return 0;
}
