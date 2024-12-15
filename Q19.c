#include <stdio.h>

int main()
{
    char c[100];
    int lng = 0;

    printf("Enter the Lower case string : ");
    scanf("%s", c);

    while (c[lng] != '\0')
    {
        lng++;
    }

    for (int i = 0; c[i] != '\0'; i++)
    {
        c[i] = c[i] - 32;
    }

    printf("Length is = %d\n", lng);
    printf("Upper case string is = %s", c);
}