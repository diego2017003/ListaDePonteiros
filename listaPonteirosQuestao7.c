#include<stdio.h>
int main(){
int pulo[6] = {1,2,3,4,5,6};
printf("%d\n",*(pulo + 2));
printf("%d\n",*(pulo + 4));
printf("%d\n",pulo + 4);
printf("%d\n",pulo + 2);
return 0;
}
