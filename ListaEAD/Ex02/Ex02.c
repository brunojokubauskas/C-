#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    float hora, hrmes, salariobruto;
    float ir, inss, sindicato, sal;

    //Entrada de Dados
    printf("Insira a quantidade de horas trabalhadas: ");
    scanf("%f", &hora);
    printf("Insira a quantidade de horas trabalhadas no mês: ");
    scanf("%f", &hrmes);
    //Efetuando o salario bruto....
    salariobruto = hora * hrmes;
    //Saída para salário bruto:
    printf("Seu salário bruto é: R$%.2f\n", salariobruto);
    //Prossando os outros dados...

    ir = salariobruto - (salariobruto * 11/100);
    inss = salariobruto - (salariobruto * 8/100);
    sindicato = salariobruto  - (salariobruto * 5/100);
    sal = salariobruto - (ir + inss + sindicato);

printf("O IR a ser pago é: R$%.2f \n", ir);
printf("O INSS a ser pago é: R$%.2f\n", inss);
printf("Para pagar para o sindicato é: R$%.2f\n", sindicato);
printf("O seu salário liquído é R$.%4f\n", sal);

return 0;
}
