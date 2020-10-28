#include <stdio.h>
#include <string.h>

char    *ft_strchr(const char *str, int sym)
{
    while(*str)
    {
        if (*str == (char)sym)
            return ((char *)str);
            str++;
    }
    return (NULL);
    if (sym == '\0')
        return ((char *) str);
}

int main()
{
   printf("%s",strchr("bcdea", ' '));
   printf("\n%s",ft_strchr("bcdea",  ' '));
   

    return 0;
}