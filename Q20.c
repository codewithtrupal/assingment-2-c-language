#include<stdio.h>

int digit(int n, int k);

int main()
{
    int number = 254693;
    int position = 2;
    int result = digit(number,position);

    if (result == -1)
    {
        printf("Invalid position");
    }
    else 
    {
        printf("\nthe %dth number from rigth is = %d",position,result);
    }
    
    
}

int digit(int n,int k)
{
    if (k<=0)
    {
        return -1;
    }

    for (int i = 1; i < k; i++)
    {
        n /= 10;
    }
    
    return n % 10;
}