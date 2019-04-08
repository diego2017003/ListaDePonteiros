#include<stdio.h>
int main(){
int mat[4] = {1,2,3,4},*p,x;
p = mat + 1;
//p = mat++;//invalida
//p = ++mat;//invalida
x = (*mat)++;//invalida
printf("%d %d", *p, x);
return 0;
}
