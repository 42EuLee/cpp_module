#include <stdio.h>
#include <string.h>

int main(void)
{
    char    *str = "abcde";

    printf("%c\n", str[1]);
    printf("%c\n", *(str + 1));
    printf("%c\n", *(1 + str));
    printf("%c\n", 1[str + 1]);
    printf("%c\n", 2[str]);
    printf("%c\n", 3[str]);
    printf("%c\n", 4[str]);
}