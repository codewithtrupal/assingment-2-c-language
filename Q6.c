#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="CPROGRAMMING";
    int length = strlen(str);

    for (int i = 1; i <= length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    
     for (int i = length - 1 ; i > 0 ; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    

}