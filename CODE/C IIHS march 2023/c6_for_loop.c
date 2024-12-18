// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=10;
//     for(;i<20;)
//     {
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }






































// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
    
//     for(int i=10;i<20;i++)
//     {
//         printf("%d\n",i);  
//     }
//     return 0;
// }








































// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j;
//     for(i=0;  i<10   ;i++)
//     {
//         printf("%d\t", i);
//         for ( j = 0; j < 10; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }



































// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j;
//     for(i=0;  i<10   ;i++)
//     {
//         printf("* ");
//         for ( j = 0; j < 10; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



































#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=0;  i<10   ;i++)
    {
        printf("%d\t",i);

        for(j=0; j < i; j++)
        {
            printf("%d ",j);
        }
        
        printf("\n");
    }
    return 0;
}














// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j;
//     for(i=0;  i<10   ;i++)
//     {
//         printf("%d ",i);
//         for(j=i; j < 10; j++)
//         {
//             printf("  ");
//         }

//         // printf("  ");

//         for(j=0; j < i; j++)
//         {
//             printf("%d ",j);
//         }
        
//         printf("\n");
//     }
//     return 0;
// }



























// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j;
//     for (i = 0; i < 10; i++)
//     {
        
//         for (j = 0; j < i; j++)
//             printf(" ");
          
//         for (j = i; j < 10; j++)
//             printf("* ");
            
//         printf("\n");
        
//     }
    
//     return 0;
// }
