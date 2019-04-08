#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int compara(int *a,int *b){//� uma fun��o que compara dois valores retornando um inteiro
return *a-*b;//essa funcao faz parte da chamada da fun�ao qsort da stdlib
}
void ordenaVetor(int *vet,int qtdE,int (*comparacao)(int *a,int *b)){//fun��o de ordena��o que recebe um endere�o do vetor,
                                                                        //a quantidade de elementos e um ponteiro para fun��o;
    int aux,i,j;
    for(i=0;i<qtdE;i++){
     for(j=0;j<qtdE;j++){
        if(comparacao(vet+i,vet+j)<0){//utiliza a fu��o de compara��o para ver se o elemento em v+i � menor do que o
                                        //elemento em v+j
            aux = *(vet+i);//utiliza a vari�vel auxiliar para auxiliar na troca des valores;
            *(vet+i)=*(vet+j);
            *(vet+j)=aux;
        }
        }
    }

}
int main(){
clock_t inicioOV,fimOV,inicioQS,fimQS;//tempo de incio e final da fun��o OrdenaVetor(OV) e Qsort(QS) respectivamente
double tempoOV,tempoQS;//tempo gasto por OrdenaVetor e Qsort respectivamente
int *v1,*v2,n,i,(*comp)();//dando nome �s vari�veis que ser�o utilizadas
comp=compara;//comp � o ponteiro para a fun�ao de compara��o
scanf("%d",&n);//pedindo ao usuario o tamanho do vetor
v1 = (int *)malloc(n*sizeof(int));//reservando espa�o para o vetor v com aloca��o din�mica
v2 = (int *)malloc(n*sizeof(int));//reservando espa�o para o vetor v com aloca��o din�mica
for(i=0;i<n;i++){
   *(v1+i)=(n-i);//scanf("%d",(v+i));//inserindo elementos no vetor
   *(v2+i)=(n-i);
}
inicioOV =clock();
ordenaVetor(v1,n,comp); //chamada da fun��o ordenaVetor usando um ponteiro para a fun�ao de compara��o
fimOV =clock()-inicioOV;
inicioQS=clock();
qsort(v2,n,sizeof(int),comp);//chamada da fun��o qsort usando um ponteiro para a fun�ao de compara��o
fimQS =clock()-inicioQS;

tempoOV=(double)(fimOV)/CLOCKS_PER_SEC;
tempoQS=(double)(fimQS)/CLOCKS_PER_SEC;

for(i=0;i<n;i++){
   printf("%d %d\n",*(v1+i),*(v2+i));//mostrando elementos ordenados pelas fun��es ordenaVetor e qsort;
}
printf("Tempo da funcao OrdenaVetor = %lf",tempoOV);
printf("Temo da funcao Qsort = %lf",tempoQS);
free(v1);//liberando o espa�o oculpado pelo vetor;
free(v2);
return 0;
}
