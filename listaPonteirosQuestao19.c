#include<stdio.h>
#include<stdlib.h>
void MultiplicaMatriz(int *r,int *a,int *b,int nca,int nla,int ncb){
    for(int i=0;i<nla;i++){//sinaliza a linha da matriz r
        for(int j=0;j<ncb;j++){//sinaliza a coluna da matriz r
        *(r+j+i*ncb)=0;//inicializa o elemento da matriz r como 0 para possibilitar futura soma de valores
            for(int k=0;k<nca;k++){//possibilita se movimentar na matriz com a coluna e linha estáticas
                *(r+j+i*ncb)+=(*(a+k+i*nca))*(*(b+k*ncb+j));//a multiplcação dos termos e a soma das multi´licações
            }
        }
    }
}
int main(){
int nca=3,nla=5,ncb=2;
int *a,*b,*c;
a=(int *)malloc(nla*nca*(sizeof(int)));//reserva espaço na memoria para a matriz a
b=(int *)malloc(ncb*nca*(sizeof(int)));//reserva espaço na memoria para a matriz b
c=(int *)malloc(ncb*nla*(sizeof(int)));//reserva espaço na memoria para a matriz c
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
MultiplicaMatriz(c,a,b,nca,nla,ncb);//chama a função de multiplicar matrizes, multipicando a matriz a pela matriz b
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
