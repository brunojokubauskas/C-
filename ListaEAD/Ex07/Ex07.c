/*O programa deve no final emitir uma classifica��o sobre a participa��o
da pessoa no crime. Se a pessoa responder positivamente a 2 quest�es ela deve ser
classificada como "Suspeita", entre 3 e 4 como cumplice e 5 como "Assassino."
Perguntas:
a. Telefonou para a vitima?
b. Esteve no local do crime?
c. Mora perto da vitima?
d. Devia para a vitima?
e. J� trabalhou com a vitima? */
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
    printf("J� trabalhou com a vitima?\n");
    getchar();
    scanf("%c", &resp);
    if(resp == 's' || resp == 'S'){
        positivos++;
    }

    //Condi��o....
    if(positivos == 2){
        printf("Suspeita\n");
    }
return 0;
}
