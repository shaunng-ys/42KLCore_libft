#include <stdio.h>
#include <string.h>

/*
//This is the demo for strlcpy
int main(void)
{
    char    dest[100] = "This is a space";
    const char  src[100] = "This is what I want";
    size_t  nbr = 10;
    size_t placeholder;

    printf("Old source string: %s\n", src);
    printf("Old destination string: %s\n", dest);
    placeholder = strlcpy(dest, dest+6, nbr);
    printf("New destination string: %s\n", dest);
    printf("%zu", placeholder);
    return (0);
}
*/

int main(void)
{
    char    first_str[30] = "This is the first line";
    char    *second_str = "This is the second line";
    size_t  nbr;
    size_t  placeholder;

    nbr = 20;
    printf("This is the first_str (og): %s\n", first_str);
    printf("This is the second_str (og): %s\n", second_str);
    placeholder = strlcat(first_str, second_str, nbr);
    printf("This is the first_str (post function pass): %s\n", first_str);
    printf("%zu\n", placeholder);
    return (0);
}