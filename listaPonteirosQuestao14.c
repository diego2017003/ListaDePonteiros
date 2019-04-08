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
