#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    float hora, hrmes, salariobruto;
    float ir, inss, sindicato, sal;

    //Entrada de Dados
    printf("Insira a quantidade de horas trabalhadas: ");
    scanf("%f", &hora);
    printf("Insira a quantidade de horas trabalhadas no m�s: ");
    scanf("%f", &hrmes);
    //Efetuando o salario bruto....
    salariobruto = hora * hrmes;
    //Sa�da para sal�rio bruto:
    printf("Seu sal�rio bruto �: R$%.2f\n", salariobruto);
    //Prossando os outros dados...

    ir = salariobruto - (salariobruto * 11/100);
    inss = salariobruto - (salariobruto * 8/100);
    sindicato = salariobruto  - (salariobruto * 5/100);
    sal = salariobruto - (ir + inss + sindicato);

printf("O IR a ser pago �: R$%.2f \n", ir);
printf("O INSS a ser pago �: R$%.2f\n", inss);
printf("Para pagar para o sindicato �: R$%.2f\n", sindicato);
printf("O seu sal�rio liqu�do � R$.%4f\n", sal);

return 0;
}
