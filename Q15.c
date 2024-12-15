#include <stdio.h>

int series(int n);

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        printf("%d \n", series(i));
    }

    return 0;
}

int series(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return series(n - 2) + series(n - 1);
}