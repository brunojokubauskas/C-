/*O programa deve no final emitir uma classificação sobre a participação
da pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve ser
classificada como "Suspeita", entre 3 e 4 como cumplice e 5 como "Assassino."
Perguntas:
a. Telefonou para a vitima?
b. Esteve no local do crime?
c. Mora perto da vitima?
d. Devia para a vitima?
e. Já trabalhou com a vitima? */
#include <stdio.h>
#include <locale.h>
int main (){
    setlocale(LC_ALL,"");
    char resp;
    int positivos = 0;
    //Entrada e o primeira parte do processamento....
    printf("Telefonou para a vitima?\n");
    getchar();
    scanf("%c", &resp);
    if(resp == 's'|| resp == 'S'){
        positivos++;
    }
    printf("Esteve no local do crime?\n");
    getchar();
    scanf("%c", &resp);
    if(resp == 's' || resp == 'S'){
        positivos++;
    }
    printf("Mora perto da vitima?\n");
    getchar();
    scanf("%c", &resp);
    if(resp == 's' || resp == 'S'){
        positivos++;
    }
    printf("Devia para a vitima?\n");
    getchar();
    scanf("%c", &resp);
    if(resp == 's' || resp == 'S' ){
        positivos++;
    }
    printf("Já trabalhou com a vitima?\n");
    getchar();
    scanf("%c", &resp);
    if(resp == 's' || resp == 'S'){
        positivos++;
    }

    //Condição....
    if(positivos == 2){
        printf("Suspeita\n");
    }
return 0;
}
