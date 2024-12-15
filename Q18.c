#include <stdio.h>

int main()
{
    char str[100], str1[100];
    int i = 0,same=1;

    printf("enter the fist string :");
    scanf("%s", str);

    printf("enter the second string :");
    scanf("%s", str1);

    while (str[i] != '\0' && str1[i] != '\0')
    {
       if (str[i]!=str1[i])
       {
            same = 0;
            break;
       }
       i++;
    }

    if (str[i] != '\0' || str1[i] != '\0')
    {
       same = 0;
    }


    if (same)
    {
        printf("string are same");
    }
    else
    {
        printf("string are not same");
    }
    
    return 0;
}