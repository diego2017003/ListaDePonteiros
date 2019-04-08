# ListaDePonteiros
lista de ponteiros
Esse repositório é destinado à resolução das questões da lista de ponteiros 
da Turma de programação avançada t01 do semestre 2019.1 da UFRN campus NATAL 

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
### O que será impresso
