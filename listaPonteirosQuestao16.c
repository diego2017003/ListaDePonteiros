#include<stdio.h>
#include<stdlib.h>
int compara(int *a,int *b) //� uma fun��o que compara dois valores retornando um inteiro
{
    return *a-*b;//essa funcao faz parte da chamada da fun�ao qsort da stdlib
}
void ordenaVetor(int *vet,int qtdE,int (*comparacao)(int *a,int *b)) //fun��o de ordena��o que recebe um endere�o do vetor,
{
    //a quantidade de elementos e um ponteiro para fun��o;
    int aux,i,j;
    for(i=0; i<qtdE; i++)
    {
        for(j=0; j<qtdE; j++)
        {
            if(comparacao(vet+i,vet+j)<0) //utiliza a fu��o de compara��o para ver se o elemento em v+i � menor do que o
            {
                //elemento em v+j
                aux = *(vet+i);//utiliza a vari�vel auxiliar para auxiliar na troca des valores;
                *(vet+i)=*(vet+j);
                *(vet+j)=aux;
            }
        }
    }

}
int main()
{
    int *v,n,i,(*comp)();//dando nome �s vari�veis que ser�o utilizadas
    comp=compara;//comp � o ponteiro para a fun�ao de compara��o
    scanf("%d",&n);//pedindo ao usuario o tamanho do vetor
    v = (int *)malloc(n*sizeof(int));//reservando espa�o para o vetor v com aloca��o din�mica
    for(i=0; i<n; i++)
    {
        *(v+i)=(n-i);//scanf("%d",(v+i));//inserindo elementos no vetor em ordem decrescente
    }
    ordenaVetor(v,n,comp); //chamada da fun��o ordenaVetor usando um ponteiro para a fun�ao de compara��o
    for(i=0; i<n; i++)
    {
        printf("%d\n",*(v+i));//mostrando elementos ordenados pela fun��o ordenaVetor;
    }
    free(v);//liberando o espa�o oculpado pelo vetor;
    return 0;
}
