#include<stdio.h>
void square();
void count();
int main()
{
    int i;
    do
    {
        printf("menu:\n");
        printf("press 1 for square:\n");
        printf("press 2 for count 1 to 10:\n");
        int press;
        scanf("%d",&press);
        switch (press)
        {
        case 1:
            square();
            break;
        case 2:
            count();
            break;
        
        default:
            printf("wrong input");
            break;
        }
        printf("\n press 1 for reprint 0 for stop/exit");
        scanf("%d",&i);
    } while (i==1);
    
    return 0;
}

void square()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

void count()
{
    int count=0;
    for (int i = 0; i < 10; i++)
    {
        count+=i;
    }printf("the total count 1 to 10 is : %d",count);
    
}