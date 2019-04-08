#include<stdlib.h>
#include<stdio.h>

int main(){
int i=5,j=4,*p,*q;
//p = i;//Ruim: p fica com um valor inteiro de i e não o endereco de i
q = &j;//OK: Q recebe o endereco de j
p = &*&i;//OK: p recebe o endereco de i
//i = (*&)j;//Ruim: a sintaxe não funciona com o parenteses
//i = *&j;//OK: i recebe o valor de j
//i = *&*&j;//OK: i recebe o valor de j
//q = *p;//Ruim: q fica com um valor inteiro armazenado em p e não o endereco de p;
i = (*p)++ + *q;//Ruim:Resulta em um inteiro entretanto o operador ++ não tem funcionalidade no caso
printf("%d %d",q,i);
    return 0;
}
