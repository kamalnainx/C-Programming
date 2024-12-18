// void function_name()
// {
//     statement1;
//     statement_n;
    
// }
















































// #include<stdio.h>
// void fun1(int,int);
// void fun1(int i, int j)
// {
//     int k;
//     k = i;
//     i = j;
//     j = k;
//     printf("after change %d\t%d\n", i, j);
// }
// int main()
// {
//     int x=10,y=20;
//     printf(" before change %d\t%d\n", x, y);
//     fun1(x, y); 
//     return 0;
// }




























#include<stdio.h>
void display(void (*p)())
{
    for(int i=1;i<5;i++)
    {
        p(i);
    }
}
void print_numbers(int num)
{
    printf("%d\t",num);
}
int main()
{
    void (*p)(int);
    printf("the values is :");
    display(print_numbers);
    return 0;
}



