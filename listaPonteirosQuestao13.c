#include<stdio.h>
int soma(int a,int b){
return (a+b);
}
int main(){
int (*p)(),s,a=2,b=4;//(*p)() � um ponteiro para uma fun��o
p=soma;//atribui ao ponteiro p a fun��o soma
s=p(a,b);
printf("%d",s);
return 0;
}
