/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:50:04 by shaun             #+#    #+#             */
/*   Updated: 2024/12/19 16:50:07 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Parameters:
s1: The string to be trimmed.
set: The reference set of characters to trim.

Return value:
The trimmed string.
NULL if the allocation fails.

External functs.:
malloc

Description:
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/

// int main(void)
// {
//     char const  *base_string = "Unnecessarily-pink-nun";
//     char const  *remove_this = "";
//     // printf("testing");
//     printf("%s\n", ft_strtrim(base_string, remove_this));
//     return (0);
// }

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *start;
    char    *end;
    char    *end_reference;
    char    *new_string;
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    start = (char *)s1;
    end = (char *)s1;
    while (s1[i++] != '\0')
        end++;
    end--;
    end_reference = end;
    i = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] == set[j])
        {
            start++;
            i++;
            j = 0;
        }
        else if (s1[i] != set[j])
        {
            while (s1[i] != set[j] && set[j])
                j++;
            if (s1[i] != set[j] || set[j] == 0)
                i = 10000;
        }
        if (i == 10000)
            break;
    }
    i = 0;
    j = 0;
    k = end_reference - s1;
    while (k > 0)
    {
        if (s1[k] == set[j])
        {
            end--;
            k--;
            j = 0;
        }
        else if (s1[k] != set[j])
        {
            while (s1[k] != set[j] && set[j])
                j++;
            if (s1[k] != set[j] || set[j] == '\0')
                k = 10000;
        }
        if (k == 10000)
            break;
    }
    new_string = (char *)malloc((end - start + 2) * sizeof(char));
    if (new_string == 0)
        return (0);
    new_string[end - start + 1] = '\0';
    k = end - start + 1;
    while (k-- > 0)
    {
        new_string[i] = start[i];
        i++;
    }
    return (new_string);
}
