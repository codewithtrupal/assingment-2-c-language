#include <stdio.h>

int main()
{
    int num, cnt = 1;

    printf("Enter the number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", cnt + 64);
            cnt++;
        }
        printf("\n");
    }
    return 0;
}