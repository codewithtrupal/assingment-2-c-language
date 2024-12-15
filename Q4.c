#include<stdio.h>

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
           printf("%c" ,j + 64);
            
        }
        for (int k = i-1; k >= 1; k--)
        {
            printf("%c", k + 64);
            
        }
        
        printf("\n");
    }
    return 0;
}