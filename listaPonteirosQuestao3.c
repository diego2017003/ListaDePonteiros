#include<stdlib.h>
#include<stdio.h>

int main(){
int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);//p=endere�o de i; *p+2=(valor no endere�o de i) + 2;
//**&p= valor armazenado no endere�o que esta armazenado em p,logo: **&p=i; 3**p=3*(*p)|*p=i => 3*i;
//**&p +4 = i + 4;
//se i est� no endereco 4094 o comando mostra: 4094 7 5 15 9
    return 0;

}

