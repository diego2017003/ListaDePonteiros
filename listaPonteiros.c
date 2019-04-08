//----------------------------Questao 1
/*O estudo de ponteiros � importante para que haja uma compreens�o maior
a respeito de como lidar com blocos de mem�ria, j� que o ponteiro � um tipo
de vari�vel que aponta para um espa�o de memoria.*/
//----------------------------Questao 2
/*
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
*/
//----------------------------Questao 3
/*#include<stdlib.h>
#include<stdio.h>

int main(){
int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);//p=endere�o de i; *p+2=(valor no endere�o de i) + 2;
//**&p= valor armazenado no endere�o que esta armazenado em p,logo: **&p=i; 3**p=3*(*p)|*p=i => 3*i;
//**&p +4 = i + 4;
//se i est� no endereco 4094 o comando mostra: 4094 7 5 15 9
    return 0;

}*/
//----------------------------Questao 4
/*#include<stdlib.h>
#include<stdio.h>

int main(){
int i=5,j=4,*p,*q;
//p = i;//Ruim: p fica com um valor inteiro de i e n�o o endereco de i
q = &j;//OK: Q recebe o endereco de j
p = &*&i;//OK: p recebe o endereco de i
//i = (*&)j;//Ruim: a sintaxe n�o funciona com o parenteses
//i = *&j;//OK: i recebe o valor de j
//i = *&*&j;//OK: i recebe o valor de j
//q = *p;//Ruim: q fica com um valor inteiro armazenado em p e n�o o endereco de p;
i = (*p)++ + *q;//Ruim:Resulta em um inteiro entretanto o operador ++ n�o tem funcionalidade no caso
printf("%d %d",q,i);
    return 0;
}*/
//----------------------------Questao 5
/*
#include<stdlib.h>
#include<stdio.h>

int main(){
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  // (a)
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);
//esperado 20
  // (b)
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);
//esperado 29.0
  // (c)
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);
//esperado P
  // (d)
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);
//esperado e
  // (e)
  p3 = nome;
  printf("%c \n", *p3);
//esperado p
  // (f)
  p3 = p3 + 4;
  printf("%c \n", *p3);
//esperado e
  // (g)
  p3--;
  printf("%c \n", *p3);
//esperado t
  // (h)
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);
//esperado 31
  // (i)
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);
//esperado 45
  // (j)
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade);
//esperado 27
  // (l)
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);
//esperado 31
  // (m)
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);
//esperado 45
  // (n)
  p5++;
  printf("%d \n", *p5);
  //esperado 27
  return(0);
}
*/
//----------------------------Questao 6
/*
#include<stdlib.h>
#include<stdio.h>

int main(){
   float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d",i);//0 1 2 3 4
    printf("vet[%d] = %.1f",i, vet[i]);//vet[0] = 1.1 vet[1] = 2.2 vet[2] = 3.3 vet[3] = 4.4 vet[4] = 5.5
    printf("*(f + %d) = %.1f",i, *(f+i));//*(f+0) = 1.1  *(f+1) = 2.2  *(f+2) = 3.3  *(f+3) = 4.4 *(f+4) = 5.5
    printf("&vet[%d] = %X",i, &vet[i]);//&vet[0] = &v &vet[1] = &(v+1) &vet[2] = &(v+2) &vet[3] = &(v+3) &vet[4] = &(v+4)
    printf("(f + %d) = %X",i, f+i);//(f+0)=&v (f+1)=&(v+1) (f+2)=&(v+2) (f+3)=&(v+3) (f+4)=&(v+4)
  }
  /*
    0 vet[0] = 1.1 *(f+0) = 1.1 &vet[0] = &v     (f+0)=&v
    1 vet[1] = 2.2 *(f+1) = 2.2 &vet[1] = &(v+1) (f+1)=&(v+1)
    2 vet[2] = 3.3 *(f+2) = 3.3 &vet[2] = &(v+2) (f+2)=&(v+2)
    3 vet[3] = 4.4 *(f+3) = 4.4 &vet[3] = &(v+3) (f+3)=&(v+3)
    4 vet[4] = 5.5 *(f+4) = 5.5 &vet[4] = &(v+4) (f+4)=&(v+4)
    */
//return(0);
//}
//*/
//----------------------------Questao 7
//o unico que referencia � *(pulo + 2);
//----------------------------Questao 8
//o unico que funciona � o p=mat+1; os demais causm um erro no operador ++;
//----------------------------Questao 9
// o primeiro programa retorna os valores inteiros armazenados dentro do vetor vet
//o segundo programa retorna os endere�os de cada elemento dentro do vetor vet em hexadecimal
//----------------------------Questao 10
/*
(a)(char) x+1=4092+1*sizeof(char)=4093 x+2=4092+2*sizeof(char)=4094 x+3=4092+3*sizeof(char)=4095
(b)(int) x+1=4092+1*sizeof(int)=4092+2=4094 x+2=4092+2*sizeof(int)=4096 x+3=4092+3*sizeof(int)=4098
(c)(float) x+1=4092+1*sizeof(float)=4092+4=4096 x+2=4092+2*sizeof(float)=4100 x+3=4092+3*sizeof(float)=4104
(d)(double) x+1=4092+1*sizeof(double)=4092+8=4100 x+2=4092+2*sizeof(double)=4108 x+3=4092+3*sizeof(double)=4116
*/
//----------------------------Questao 11
/*
#include<stdlib.h>
#include<stdio.h>

int main(){
     char vetc[4];
     int veti[4];
     float vetf[4];
     double vetd[4];
  int i;
  for(i=1;i<4;i++){
    printf("%d ",(vetc+i));
    printf("%d ",(veti+i));
    printf("%d ",(vetf+i));
    printf("%d ",(vetd+i));
    printf("\n");
  }
  return(0);
}
//a suposi�ao da questao 10 s� falha para o inteiro cujo tamanho � diferente de 2 BITs
*/
//----------------------------Questao 12
/*#include<stdio.h>

int main(){
float aloha[10], coisas[10][5], *pf, value = 2.2;
//aloha = value;//ok
//scanf("%f", aloha);//ok
//aloha = value;//Errado, float* != float
//printf("%f", aloha);//ok
//coisas[4][4] = aloha[3];//ok
//coisas[5] = *aloha;//errado, n�o se pode utilizar essa atribui��o
//pf = value;//Errado, float* != float
//pf = aloha;//OK j� que aloha � um vetor e repassa seu endere�o nessa atribui��o
printf("%f",*(pf+1));
return 0;
}
*/
//----------------------------Questao 13
//um ponteiro para uma fun��o � um ponteiro que aponta para o endere�o de uma fun��o
//permitindo que as funcionalidades da fun��o possam ser acessadas a partir do ponteiro
/*
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
*/
//----------------------------Questao 14
/*
#include<stdio.h>
#include<stdlib.h>
int main(){
int *v,n,i;
scanf("%d",&n);
v = (int *)malloc(n*sizeof(int));
for(i=0;i<n;i++){
   scanf("%d",(v+i));
}
for(i=0;i<n;i++){
   printf("%d",*(v+i));
}
for(i=0;i<n;i++){
   int aux;
for(int j=0;j<n;j++){
    if(*(v+i)<*(v+j)){
        aux=*(v+i);
        *(v+i)=*(v+j);
        *(v+j)=aux;
    }
}
}
for(i=0;i<n;i++){
   printf("%d",*(v+i));
}
free(v);
return 0;
}
*/
//----------------------------Questao 15
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int compara(const void *a,const void *b){//� uma fun��o que compara dois valores retornando um inteiro
return *(int*)a-*(int*)b;//essa funcao faz parte da chamada da fun�ao qsort da stdlib
}
int main(){
clock_t inicio,fim;
double tempo;
int *v,n,i,(*comp)();//dando nome �s vari�veis que ser�o utilizadas
comp=compara;//comp � o ponteiro para a fun�ao de compara��o
scanf("%d",&n);//pedindo ao usuario o tamanho do vetor
v = (int *)malloc(n*sizeof(int));//reservando espa�o para o vetor v com aloca��o din�mica
for(i=0;i<n;i++){
   //scanf("%d",(v+i));//inserindo elementos no vetor
    *(v+i)=n-i;
}
inicio   =clock();
qsort(v,n,sizeof(int),comp);//chamada da fun��o qsort usando um ponteiro para a fun�ao de compara��o
fim =clock()-inicio;
tempo=(double)(fim)/CLOCKS_PER_SEC;
for(i=0;i<n;i++){
   printf("%d \n",*(v+i));//mostrando elementos ordenados pela fun��o qsort;
}

printf("%lf \n %lf",(double)fim,(double)tempo);
free(v);//liberando o espa�o oculpado pelo vetor;
return 0;
}
*/
//----------------------------Questao 16
/*
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
clock_t inicio,fim;
double tempo;
int *v,n,i,(*comp)();//dando nome �s vari�veis que ser�o utilizadas
comp=compara;//comp � o ponteiro para a fun�ao de compara��o
scanf("%d",&n);//pedindo ao usuario o tamanho do vetor
v = (int *)malloc(n*sizeof(int));//reservando espa�o para o vetor v com aloca��o din�mica
for(i=0;i<n;i++){
   *(v+i)=(n-i);//scanf("%d",(v+i));//inserindo elementos no vetor
}
inicio =clock();
ordenaVetor(v,n,comp); //chamada da fun��o ordenaVetor usando um ponteiro para a fun�ao de compara��o
fim =clock()-inicio;
tempo=(double)(fim)/CLOCKS_PER_SEC;

for(i=0;i<n;i++){
   printf("%d\n",*(v+i));//mostrando elementos ordenados pela fun��o ordenaVetor;
}
printf("%lf",tempo);
free(v);//liberando o espa�o oculpado pelo vetor;
return 0;
}
*/
//----------------------------Questao 17
//usando a fun��o clock() da biblioteca time.h para tirar a diferen�a entre o tempo de inicio das fun��es qsort e ordenaVetor
//foi observado que n�o h� diferen�a siignificativa quando se trata de valores pequenos para ordenar. entretanto, quando s�o utilizados
//valores grandes j� se observa uma diferen�a entre o tempo de execu��o das fun��es: foi testado o pior caso em que o vetor est� em ordem
//decrescente, e para o numero 1234 de elementos a fun��o qsort apresentou um desempeho 10 vezes melhor do que a fun��o ordenaVetor

//----------------------------Questao 18
/*#include<stdio.h>

void somaVetor(int *r,int *a,int *b,int n){
    for(int i=0;i<n;i++){
        *(r+i)=*(a+i)+*(b+i);
    }
}
int main(){
int a[3]={6,5,6},b[3]={5,3,4},r[3];
somaVetor(r,a,b,3);
for(int i=0;i<3;i++){
        printf("%d\n",*(r+i));
    }
}
*/
//----------------------------Questao 19
/*#include<stdio.h>
#include<stdlib.h>
void MultiplicaMatriz(int *r,int *a,int *b,int nca,int nla,int ncb){
    for(int i=0;i<nla;i++){//sinaliza a linha da matriz r
        for(int j=0;j<ncb;j++){//sinaliza a coluna da matriz r
        *(r+j+i*ncb)=0;//inicializa o elemento da matriz r como 0 para possibilitar futura soma de valores
            for(int k=0;k<nca;k++){//possibilita se movimentar na matriz com a coluna e linha est�ticas
                *(r+j+i*ncb)+=(*(a+k+i*nca))*(*(b+k*ncb+j));//a multiplca��o dos termos e a soma das multi�lica��es
            }
        }
    }
}
int main(){
int nca=3,nla=5,ncb=2;
int *a,*b,*c;
a=(int *)malloc(nla*nca*(sizeof(int)));//reserva espa�o na memoria para a matriz a
b=(int *)malloc(ncb*nca*(sizeof(int)));//reserva espa�o na memoria para a matriz b
c=(int *)malloc(ncb*nla*(sizeof(int)));//reserva espa�o na memoria para a matriz c
for(int i=0;i<nla;i++){
    for(int j=0;j<nca;j++){
        *(a+j+i*nca)=i+j;
    }//inicializa matriz a
}
for(int i=0;i<nca;i++){
    for(int j=0;j<ncb;j++){
        *(b+j+i*ncb)=i+j;
    }//inicializa matriz b
}
MultiplicaMatriz(c,a,b,nca,nla,ncb);//chama a fun��o de multiplicar matrizes, multipicando a matriz a pela matriz b
for(int i=0;i<nla;i++){//exibe matriz a
        printf("\n");
    for(int j=0;j<nca;j++){
        printf("%d",*(a+j+i*nca));
    }
}
for(int i=0;i<nca;i++){//exibe matriz b
        printf("\n");
    for(int j=0;j<ncb;j++){
        printf("%d",*(b+j+i*ncb));
    }
}
for(int i=0;i<nla;i++){//exibe matriz c
        printf("\n");
    for(int j=0;j<ncb;j++){
        printf("%d",*(c+j+i*ncb));
    }
}
return 0;
}
*/
