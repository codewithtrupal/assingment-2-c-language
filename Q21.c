#include <stdio.h>

int prime(int n);

int main()
{
    int num, result;

    printf("Enter the number : ");
    scanf("%d", &num);

    result = prime(num);

    if (result == 1)
    {
        printf("this is prime number");
    }
    else
    {
        printf("this isn't prime number");
    }

    return 0;
}

int prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
           return 0;
           break;
        }
        
    }

    return 1;
}