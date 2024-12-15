#include <stdio.h>

int main()
{
    int arr[10],sum=0;

    printf("Enter the ten numbers : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }

    printf("Sum is = %d\n", sum);
    printf("Avg is = %d", sum /10);
    
}