#include<stdio.h>
#include<stdlib.h>
int compara(const void *a,const void *b){//� uma fun��o que compara dois valores retornando um inteiro
return *(int*)a-*(int*)b;//essa funcao faz parte da chamada da fun�ao qsort da stdlib
}
int main(){
int *v,n,i,(*comp)();//dando nome �s vari�veis que ser�o utilizadas
comp=compara;//comp � o ponteiro para a fun�ao de compara��o
scanf("%d",&n);//pedindo ao usuario o tamanho do vetor
v = (int *)malloc(n*sizeof(int));//reservando espa�o para o vetor v com aloca��o din�mica
for(i=0;i<n;i++){
   //scanf("%d",(v+i));//inserindo elementos no vetor
    *(v+i)=n-i;
}
qsort(v,n,sizeof(int),comp);//chamada da fun��o qsort usando um ponteiro para a fun�ao de compara��o
for(i=0;i<n;i++){
   printf("%d \n",*(v+i));//mostrando elementos ordenados pela fun��o qsort;
}
free(v);//liberando o espa�o oculpado pelo vetor;
return 0;
}
