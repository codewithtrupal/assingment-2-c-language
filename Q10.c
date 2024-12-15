#include<stdio.h>

int main()
{
    int x[3][3],y[3][3],z[3][3];

    printf("Enter the value of x metric : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value : ");
            scanf("%d", &x[i][j]);
        }
        
    }
    
    printf("Enter the value of y metric : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value : ");
            scanf("%d", &y[i][j]);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            z[i][j] = x[i][j] + y[i][j];
        }
        
    }

    printf(" the value of x metric : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", x[i][j]);
        }
        printf("\n");
    }

    printf(" the value of y metric : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", y[i][j]);
        }
        printf("\n");
    }

    printf(" the value of z metric : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", z[i][j]);
        }
        printf("\n");
    }


    return 0;
}