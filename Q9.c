#include <stdio.h>
#define MAX 5

int main()
{
    int num[MAX],sh,i;

    printf("Enter the element : \n");

    for ( i = 0; i < MAX; i++)
    {
        scanf("%d", &num[i]);
    }
    
    printf("Enter the serch element : \n");
    scanf("%d", &sh);

    for ( i = 0; i < MAX; i++)
    {
        if (sh == num[i])
        {
            printf("The %d element value found at %d position ", sh, i +1);
            break;
        }
    }
        if (i == MAX)
        {
            printf("The value doesn't exist");
        }
    
    return 0;
}