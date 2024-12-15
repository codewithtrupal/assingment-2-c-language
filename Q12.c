#include <stdio.h>

int main()
{
    char str[10];
    int end, start = 0, is_palindrome = 1;

    printf("Enter the string : ");
    scanf("%s", str);

    for (end = 0; str[end] != '\0'; end++);
    end--;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            is_palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (is_palindrome == 1)
    {
        printf("String is palindromr");
    }
    else
    {
        printf("String isn't palindromr");
    }
    
    

    return 0;
}