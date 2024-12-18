






















#include<stdio.h>
int main()
{
    int i=10;
    int k=i+1;
    int* j=&i;
    int* j1=&k;
    printf("%d\t%d\n",j,j1);
    printf("%d\t%d\n",*j,*j1);
     
    return 0;
}
