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
