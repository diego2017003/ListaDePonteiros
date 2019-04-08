#include<stdio.h>
#include<stdlib.h>
int compara(int *a,int *b) //é uma função que compara dois valores retornando um inteiro
{
    return *a-*b;//essa funcao faz parte da chamada da funçao qsort da stdlib
}
void ordenaVetor(int *vet,int qtdE,int (*comparacao)(int *a,int *b)) //função de ordenação que recebe um endereço do vetor,
{
    //a quantidade de elementos e um ponteiro para função;
    int aux,i,j;
    for(i=0; i<qtdE; i++)
    {
        for(j=0; j<qtdE; j++)
        {
            if(comparacao(vet+i,vet+j)<0) //utiliza a fução de comparação para ver se o elemento em v+i é menor do que o
            {
                //elemento em v+j
                aux = *(vet+i);//utiliza a variável auxiliar para auxiliar na troca des valores;
                *(vet+i)=*(vet+j);
                *(vet+j)=aux;
            }
        }
    }

}
int main()
{
    int *v,n,i,(*comp)();//dando nome às variáveis que serão utilizadas
    comp=compara;//comp é o ponteiro para a funçao de comparação
    scanf("%d",&n);//pedindo ao usuario o tamanho do vetor
    v = (int *)malloc(n*sizeof(int));//reservando espaço para o vetor v com alocação dinâmica
    for(i=0; i<n; i++)
    {
        *(v+i)=(n-i);//scanf("%d",(v+i));//inserindo elementos no vetor em ordem decrescente
    }
    ordenaVetor(v,n,comp); //chamada da função ordenaVetor usando um ponteiro para a funçao de comparação
    for(i=0; i<n; i++)
    {
        printf("%d\n",*(v+i));//mostrando elementos ordenados pela função ordenaVetor;
    }
    free(v);//liberando o espaço oculpado pelo vetor;
    return 0;
}
