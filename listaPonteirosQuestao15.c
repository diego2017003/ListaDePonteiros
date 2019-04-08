#include<stdio.h>
#include<stdlib.h>
int compara(const void *a,const void *b){//é uma função que compara dois valores retornando um inteiro
return *(int*)a-*(int*)b;//essa funcao faz parte da chamada da funçao qsort da stdlib
}
int main(){
int *v,n,i,(*comp)();//dando nome às variáveis que serão utilizadas
comp=compara;//comp é o ponteiro para a funçao de comparação
scanf("%d",&n);//pedindo ao usuario o tamanho do vetor
v = (int *)malloc(n*sizeof(int));//reservando espaço para o vetor v com alocação dinâmica
for(i=0;i<n;i++){
   //scanf("%d",(v+i));//inserindo elementos no vetor
    *(v+i)=n-i;
}
qsort(v,n,sizeof(int),comp);//chamada da função qsort usando um ponteiro para a funçao de comparação
for(i=0;i<n;i++){
   printf("%d \n",*(v+i));//mostrando elementos ordenados pela função qsort;
}
free(v);//liberando o espaço oculpado pelo vetor;
return 0;
}
