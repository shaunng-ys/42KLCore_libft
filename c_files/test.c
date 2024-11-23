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
/*
//This is the demo for strlcat
int main(void)
{
    char    first_str[100] = "This is the first line";
    char    *second_str = "Can't it get there soon";
    size_t  nbr;
    size_t  placeholder;

    nbr = 24;
    printf("\n1st String (OG Dest): %s; Its length is: %zu\n\n", first_str, strlen(first_str));
    printf("2nd String(OG Source): %s; Its length is: %zu\n\n", second_str, strlen(second_str));
    printf("3rd Argument (Size of expected concatenated string): %zu\n\n", nbr);
    placeholder = strlcat(first_str, second_str, nbr);
    printf("1st String (Dest post-function pass): %s\n  \n", first_str);
    printf("Length the string that the function tried to create: %zu\n\n", placeholder);
    return (0);
} 
*/

int main(void)
{
    int nbr_arr0[] = {0, 1, 2, 3, 65535};
    int nbr_arr1[] = {0, 1, 2, 3, 255};
    size_t limiter = 20 * sizeof(int);

    printf("%d", memcmp(((void *)nbr_arr0), ((void *)nbr_arr1), limiter));

    /*
    const char  *str1 = "This is string 142";
    const char  *str2 = "This is string 253";
    const int   nbr_array2[100] = {0, 1, 2, 3, 2055};
    const int   nbr_array3[100] = {0, 1, 2, 3, 6686};
    size_t limiter1 = sizeof(char) * 25;

    printf("%d\n", memcmp(str1, str2, limiter1));
    printf("%d\n", memcmp(nbr_array2, nbr_array3, limiter1));
    */
    return (0);
}
