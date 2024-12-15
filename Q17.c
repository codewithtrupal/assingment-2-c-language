#include<stdio.h>

int main()
{
    char x[100];
    int i=0;

    printf("Enter the Lower case string : ");
    scanf("%s", x);

    while (x != '\0')
    {
        x[i] = x[i] -32;
        i++;
    }

    printf("Upper case string %s", x);
}