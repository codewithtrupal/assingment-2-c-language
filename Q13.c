#include<stdio.h>

int sum(int a, int b);
float avg(int a, int b);

int main()
{
    int n1,n2;

    printf("Enter the number : ");
    scanf("%d", &n1);

    printf("Enter the number : ");
    scanf("%d", &n2);

    sum(n1,n2);
    avg(n1,n2);

 return 0;
}

   int sum(int a, int b)
    {
       int sum;
        sum = a + b;
        printf("This is sum = %d\n",sum);
    }

    float avg(int a, int b)
    {
        float avg;
        avg = (a+b)/2.0;
        printf("This is sum = %.2f",avg);
    }
