#include <stdio.h>

int main()
{
    char str[100];
    int leg=0;

    printf("Enter the string : ");
    scanf("%s", str);

    for (int i = 0; str[leg] != '\0'; i++)
    {
       leg++;
    }
    
    printf("Length of string = %d", leg);

return 0;
}