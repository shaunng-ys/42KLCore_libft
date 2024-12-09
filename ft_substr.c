/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 03:36:55 by shaun             #+#    #+#             */
/*   Updated: 2024/12/03 03:36:56 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    char const *string = "This is the string";
    unsigned int starting_char = 2;
    size_t max = 40;
    printf("%s", ft_substr(string, starting_char, max));
    return (0);
}

/*
Function name: ft_substr
Prototype: char *ft_substr(char const *s, unsigned int start, size_t len);
Turn in files: -
Parameters: 
s: The string from which to create the substring.
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring.
Return value: The substring. NULL if the allocation fails.
External functs.: malloc
Description: Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    int counter;
    char    *ptr0;
    void    *ptr1;
    size_t  str_len = ft_strlen(s);
    
    i = 0;
    /*
    DESCRIPTION
       The  memchr()  function scans the initial n bytes of the memory area pointed to by s for the first instance of
       c.  Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.
    RETURN VALUE
       The  memchr()  and memrchr() functions return a pointer to the matching byte or NULL if the character does not
       occur in the given memory area.

    void    *ft_memchr(const void *s, int c, size_t n);
    */
    //Need to guard against user input if no start character in s
    /*
    ptr0 = ft_memchr((char *)s, start, str_len);
    */
    ptr0 = s + start - 1;
    
    while (((char *)ptr0)[i])
    {
        counter++;
        i++;
    }
    i = 0;
    if (counter <= len)
        ptr1 = malloc(counter);
    else
        ptr1 = malloc(len);
    if (ptr1 == NULL)
        return (NULL);
    else
        while((len != 0) || (((char *)ptr0)[i] != 0))
        {
            ((char *)ptr1)[i] = ((char *)ptr0)[i];
            i++;
            len--;
        }
    return (ptr1);
}
