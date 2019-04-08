#include<stdlib.h>
#include<stdio.h>

int main(){
    int i=3,j=5;//declarando vari�veis inteiras e lhes atribuindo valores;
    int *p,*q;//declarando ponteiros para inteiros
    p=&i;//atribui a p o endereco da vari�vel inteira i;
    q=&j;//atribui a q 0 endereco da vari�vel inteira j;

    printf("%d \n",p == &i);//comparador, deve retornar 1 j� que o valor de p � igual a &i
    printf("%d \n",(*p - *q));//deve retornar a subtra��o do valor armazenado em &i pelo valor armazenado em &j(i-j=3-5=-2)
    printf("%d \n",**&p);//&p � o endere�o de p na memoria, *&p retorna o valor armazena no enfereco de p que � &i,
                        //logo:**&p=*&i=i=3;
    printf("%d \n",3 - *p/(*q) + 7);//retorna 10, pois: (int)(*p/*q)=(int)(i/j)=(int)(3/5)=0, logo a express�o retorna:
                                    //3-(0)+7=10;

    return 0;
}
