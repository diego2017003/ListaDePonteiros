#include<stdio.h>

int main(){
char a[4]={'a','d','f','c'};
int x[4]={1,2,3,4};
float y[4]={1.1,1.2,1.4,3.4};
double z[4]={1,2,3,4};
for(int i=0;i<4;i++){
printf("%x %x %x %x \n", (a+i),(x+i),(y+i),(z+i));
}
return 0;
}
