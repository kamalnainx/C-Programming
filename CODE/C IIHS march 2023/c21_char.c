#include <stdio.h>
int main()
{
    // char char1='kamal';
    // printf("%c",char1);

    char name[20]="hello world";
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}