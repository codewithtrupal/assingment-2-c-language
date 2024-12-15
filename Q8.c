#include <stdio.h>
#define MAX 5

int main()
{
    int num[MAX], tem;

    printf("Enter the elements : \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("Before sorting \n");
    for (int i = 0; i < MAX; i++)
    {
    printf("%d \n", num[i]);
    }
    

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX - i; j++)
        {
            if (num[j + 1] < num[j])
            {
                tem = num[j + 1];
                num[j + 1] = num[j];
                num[j] = tem;
            }
        }
    }

    printf("After sorting \n");
      
    for (int i = 0; i < MAX; i++)
    {
    printf("%d \n", num[i]);
    }
}