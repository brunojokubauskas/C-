#include<stdio.h>`
#include<math.h>
int main(){
    double a,b,c,delta, x1, x2;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);



    if(delta<0){
        printf("Impossivel calcular\n");

    }
         delta = (b*b)-(4*a*c);

        if(delta >= 0){
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            printf("R1 = %.5lf\n", x1);
            printf("R2 = %.5lf\n", x2);
    } else {

        printf("Impossivel calcular\n");

    }


return 0;
}
