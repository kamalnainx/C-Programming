// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int w=0;
//     while (w>-20)
//     {
//         printf("%d\n",--w);
//         // w++;
//     }

//     return 0;
// }





































// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int w=0;
//     while (w<100)
//     {
//         if (w%7==0 || w%9==0)
//         {
//             printf("%d\t",w);
//         }
//         w++;
//     }

//     return 0;
// }



































#include<stdio.h>
int main(int argc, char const *argv[])
{
    int w=0;
    while (w<100)
    {
        w++;
        if (w%7==0 && w%9==0)
        {
            printf("\n%d",w);
            break;
        }
        if (w%7==0 || w%9==0)
        {
            printf("%d\t",w);
            continue;
        }
        
    }

    return 0;
}
