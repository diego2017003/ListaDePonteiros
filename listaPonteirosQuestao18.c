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
