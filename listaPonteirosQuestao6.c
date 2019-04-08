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
return(0);
}
