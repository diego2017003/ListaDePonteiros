# ListaDePonteiros
lista de ponteiros
Esse repositório é destinado à resolução das questões da lista de ponteiros 
da Turma de programação avançada t01 do semestre 2019.1 da UFRN campus NATAL.
Este arquivo de texto tem por objetivo responder de forma escrita as questões que exigem explicação
enquanto demosntra os trechos de código utilizados para chegar Às explicações.

## Questão 01
### Qual a Utilidade dos ponteiros para engenharia?
*Resp:* O estudo de ponteiros é importante para que haja uma compreensão maior
a respeito de como lidar com blocos de memória, já que o ponteiro é um tipo
de variável que aponta para um espaço de memória. além de contribuir diretamente 
na dinâmica com a qual os progamas são construidos, e sua otimização.

## Questão 02
### Valores das expressões

```c 
p == &i;//tq:(int *p;p=&i|int i=3|int *q;q=&j|int j=5);
*p - *q;
**&p;
3 - *p/(*q) + 7;
```
*Resp:* valor de:p==&i deve retornar 1; valor de:*p - *q = (int)i - (int)j= 3 - 5 = -2
valor de:**&p = *(p) = i = 3; valor de:3 - *p/(*q) + 7 = 3 - (int)3/(int)5 + 7= 3 + 7 = 10
## Questão 03
### O que será impresso
```c
int i=5, *p;
p = &i;
printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
```
*Resp:* respectivamente: endereço de i em hexadecimal=4094(de acordo com o enunciado), 
(5+2) =>7, 5 , 3*(5)=>15 , 5+4=>9 

## Questão 04
### atribuições ilegais para i e j inteiros e p e q ponteiros
```c
p = i;
q = &j;
p = &*&i;
i = (*&)j;
i = *&j;
i = *&*&j;
q = *p;
i = (*p)++ + *q;
```
*resp:* 
```c
//p = i;//Ruim: p fica com um valor inteiro de i e não o endereco de i
q = &j;//OK: Q recebe o endereco de j
p = &*&i;//OK: p recebe o endereco de i
//i = (*&)j;//Ruim: a sintaxe não funciona com o parenteses
i = *&j;//OK: i recebe o valor de j
i = *&*&j;//OK: i recebe o valor de j
//q = *p;//Ruim: q fica com um valor inteiro armazenado em p e não o endereco de p;
//i = (*p)++ + *q;//Ruim:Resulta em um inteiro entretanto o operador ++ não tem funcionalidade no caso
```
## Questão 05
### o que será mostrado pelo programa
```c
int main() {
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

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);

  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);

  /* (e) */
  p3 = nome;
  printf("%c \n", *p3);

  /* (f) */
  p3 = p3 + 4;
  printf("%c \n", *p3);

  /* (g) */
  p3--;
  printf("%c \n", *p3);

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);

  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade);

  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);

  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);

  /* (n) */
  p5++;
  printf("%d \n", *p5);
  return(0);
}
```
*resp:* (a)=20;(b)=29.0;(c)=p;(d)=e;(e)=p;(f)=e;(g)=t;(h)=31;(i)=45;(j)=27;(l)=31;(m)=45;(n)=27;
## questão 06
### o que se espera que o programa mostre
```c
int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d",i);
    printf("vet[%d] = %.1f",i, vet[i]);
    printf("*(f + %d) = %.1f",i, *(f+i));
    printf("&vet[%d] = %X",i, &vet[i]);
    printf("(f + %d) = %X",i, f+i);
  }
}
```
*resp:* é esperado que o programe mostre as cinco linhas seguintes de acordo com os endereços de v
e dos valores armazenados neles
   i=0 vet[0] = 1.1 *(f+0) = 1.1 &vet[0] = &v     (f+0)=&v
   i=1 vet[1] = 2.2 *(f+1) = 2.2 &vet[1] = &(v+1) (f+1)=&(v+1)
   i=2 vet[2] = 3.3 *(f+2) = 3.3 &vet[2] = &(v+2) (f+2)=&(v+2)
   i=3 vet[3] = 4.4 *(f+3) = 4.4 &vet[3] = &(v+3) (f+3)=&(v+3)
   i=4 vet[4] = 5.5 *(f+4) = 5.5 &vet[4] = &(v+4) (f+4)=&(v+4)
  e o resultado é exatamente o que se esperava, sendo os endereços em hexadecimal; 
 ## questão 07
### elemento 2 do vetor pulo
```c
*(pulo + 2);
*(pulo + 4);
pulo + 4;
pulo + 2;
```
*resp:*
```c
printf("%d\n",*(pulo + 2));// é o único que mostra o elemento na posição 2(terceira posição) do vetor pulo
//printf("%d\n",*(pulo + 4));
//printf("%d\n",pulo + 4);
//printf("%d\n",pulo + 2);
```
## Questão 08
### expressões válidas
```c
p = mat + 1;
p = mat++;
p = ++mat;
x = (*mat)++;
```
*resp:*
```c
p = mat + 1;//válida, retorna a posição do segundo elemento de mat 
p = mat++;//o operador ++ é inválido nessa situação
p = ++mat;//o operador ++ é inválido nessa situação
x = (*mat)++;//válida, retorna o valor do primeiro elemento de mat apesar do operador ++ não ter utilidade nesse caso
```
## Questão 09
### O que os programas fazem?
```c
//programa 1
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
}
//programa 2
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);
  }
}

```
*resp:* o primeiro programa retorna os valores inteiros armazenados dentro do vetor vet
enquanto que o segundo programa retorna os endereços de cada elemento dentro do vetor vet em hexadecimal;
## Questão 10
### os endereços de cada elemento de um vetor a depender do tipo
*resp:*
supondo que x está armazenado no endereço 4092 e que o tamanho de int é diferente de float;
(a)(char) x+1=4092+1*sizeof(char)=4093 x+2=4092+2*sizeof(char)=4094 x+3=4092+3*sizeof(char)=4095
(b)(int) x+1=4092+1*sizeof(int)=4092+2=4094 x+2=4092+2*sizeof(int)=4096 x+3=4092+3*sizeof(int)=4098
(c)(float) x+1=4092+1*sizeof(float)=4092+4=4096 x+2=4092+2*sizeof(float)=4100 x+3=4092+3*sizeof(float)=4104
(d)(double) x+1=4092+1*sizeof(double)=4092+8=4100 x+2=4092+2*sizeof(double)=4108 x+3=4092+3*sizeof(double)=4116

## Questão 11
### Implementando a 10
*resp:* a suposição da 10 erra apenas no caso do inteiro que apresenta 4 bytes

## Questão 12
### comandos válidos ou inválidos
```c
aloha[2] = value;
scanf("%f", &aloha);
aloha = value";
printf("%f", aloha);
coisas[4][4] = aloha[3];
coisas[5] = aloha;
pf = value;
pf = aloha;
```

*resp:*
```c
aloha[2] = value;//válido
scanf("%f", &aloha);//válido
//aloha = value;//Errado, float* != float
printf("%f", aloha);//válido
coisas[4][4] = aloha[3];//válido
//coisas[5] = *aloha;//errado, não se pode utilizar essa atribuição
//pf = value;//Errado, float* != float
pf = aloha;//válido já que aloha é um vetor e repassa seu endereço nessa atribuição
printf("%f",*(pf+1));

```
## Questão 13
### ponteiro para uma função
*resp:*
um ponteiro para uma função é um ponteiro que aponta para o endereço de uma função
permitindo que as funcionalidades da função possam ser acessadas a partir do ponteiro
```c
int soma(int a,int b){
return (a+b);
}
int main(){
int (*p)(),s,a=2,b=4;//(*p)() é um ponteiro para uma função
p=soma;//atribui ao ponteiro p a função soma
s=p(a,b);
printf("%d",s);
return 0;
}
```
## Questão 14
### alocação dinâmica de memória e ordenação
*resp:*
```c
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
```
## Questão 15
### utilizando qsort
*resp:*
```c
#include<stdio.h>
#include<stdlib.h>
int compara(const void *a,const void *b){//é uma função que compara dois valores retornando um inteiro
return *(int*)a-*(int*)b;//essa funcao faz parte da chamada da funçao qsort da stdlib
}
int main(){
double tempo;
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
free(v);//liberando o espaço ocupado pelo vetor;
return 0;
}
```
## Questão 16
### criando uma função de ordenação que recebe uma função de comparação por referência
*resp:*
```c
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
    free(v);//liberando o espaço ocupado pelo vetor;
    return 0;
}
```
## Questão 17
### comparando o tempo de resposta da função ordena vetor em relação à função qsort
*resp:*
Usando a função clock() da biblioteca time.h para tirar a diferença entre o tempo de inicio e de termino de execu~ção 
das funções qsort e ordenaVetor foi observado que não há diferença significativa quando se trata de valores pequenos para ordenar. entretanto, quando são utilizados valores grandes já se observa uma diferença entre o tempo de execução das funções: foi testado o pior caso em que o vetor está em ordem decrescente, e para o numero 1234 de elementos a função qsort apresentou um desempeho 10 vezes melhor do que a função ordenaVetor;
```c
inicioOV =clock();//capturando o clock do instante inicial em que a função ordenaVetor é chamada
ordenaVetor(v1,n,comp); //chamada da função ordenaVetor usando um ponteiro para a funçao de comparação
fimOV =clock()-inicioOV;//capturando o clock do instante final em relação ao inicial da função ordenaVetor
inicioQS=clock();//capturando o clock do instante inicial em que a função Qsort é chamada
qsort(v2,n,sizeof(int),comp);//chamada da função qsort usando um ponteiro para a funçao de comparação
fimQS =clock()-inicioQS;//capturando o clock do instante final em relação ao inicial da função qsort
tempoOV=(double)(fimOV)/CLOCKS_PER_SEC;//tempo que a função ordena vetor levou
tempoQS=(double)(fimQS)/CLOCKS_PER_SEC;//tempo que a função Qsort levou
```
## Questão 18
### Somando vetors utilizando ponteiros 
*resp:*
```c
#include<stdio.h>

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
```
