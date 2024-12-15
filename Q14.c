#include <stdio.h>

int fact(int n);

int main()
{
    int num,fac;

    printf("Enter the number : ");
    scanf("%d", &num);

    fac = fact(num);

    printf("this is fact = %d",fac);

return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    
    int numn = fact(n-1);
    int Numf = numn * n;
    return Numf;
}