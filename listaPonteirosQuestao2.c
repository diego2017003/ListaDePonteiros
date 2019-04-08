#include<stdlib.h>
#include<stdio.h>

int main(){
    int i=3,j=5;//declarando variáveis inteiras e lhes atribuindo valores;
    int *p,*q;//declarando ponteiros para inteiros
    p=&i;//atribui a p o endereco da variável inteira i;
    q=&j;//atribui a q 0 endereco da variável inteira j;

    printf("%d \n",p == &i);//comparador, deve retornar 1 já que o valor de p é igual a &i
    printf("%d \n",(*p - *q));//deve retornar a subtração do valor armazenado em &i pelo valor armazenado em &j(i-j=3-5=-2)
    printf("%d \n",**&p);//&p é o endereço de p na memoria, *&p retorna o valor armazena no enfereco de p que é &i,
                        //logo:**&p=*&i=i=3;
    printf("%d \n",3 - *p/(*q) + 7);//retorna 10, pois: (int)(*p/*q)=(int)(i/j)=(int)(3/5)=0, logo a expressão retorna:
                                    //3-(0)+7=10;

    return 0;
}
