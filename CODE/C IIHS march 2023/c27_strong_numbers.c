#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k,l;
    int start=0 , stop=9;
    int strong,count=1;
    int result[stop][stop][stop][stop];
    int value=0;
    printf("enter any strong number password");
    scanf("%d",&strong);

    for (i = start; i < stop; i++)
    {
        for ( j = start; j < stop; j++)
        {
            for (k = start; k < stop; k++)
            {
                for ( l = start; l < stop; l++)
                {
                    
                    if (i == j || i == k|| i ==l || j == k || j == l||k == l)
                    {
                        continue;
                    }
                    else{
                        count = i*1000+j*100+k*10+l;
                        result[i][j][k][l]=count;
                    }
                    if(strong==result[i][j][k][l])
                    {
                        value = result[i][j][k][l];
                    }
                }
            }
        }
    }
    if (value>0)
    {
        printf("true value is %d",value);
    }
    else{
        printf("the value is false %d",value);
    }
    
    printf("");

    return 0;
}
