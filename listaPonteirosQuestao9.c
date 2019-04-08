#include<stdio.h>
/*int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));//retorna os valores de inteiros armazenados pelo vetor vet
  }
}*/
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
    printf("%X ",vet+i);//retorna os endereços dos elementos de vet em hexadecimal
  }
}
