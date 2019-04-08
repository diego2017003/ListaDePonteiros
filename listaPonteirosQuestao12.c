#include<stdio.h>

int main(){
float aloha[10], coisas[10][5], *pf, value = 2.2;
aloha[2] = value;//ok
scanf("%f", &aloha);//ok
//aloha = value;//Errado, float* != float
printf("%f", aloha);//ok
coisas[4][4] = aloha[3];//ok
//coisas[5] = *aloha;//errado, não se pode utilizar essa atribuição
//pf = value;//Errado, float* != float
pf = aloha;//OK já que aloha é um vetor e repassa seu endereço nessa atribuição
printf("%f",*(pf+1));
return 0;
}
