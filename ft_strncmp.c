/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:27:19 by shaun             #+#    #+#             */
/*   Updated: 2024/11/20 12:27:21 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int strncmp(const char s1[.n], const char s2[.n], size_t n);

DESCRIPTION
       The strcmp() function compares the two strings s1 and s2.  The
       locale  is not taken into account (for a locale-aware compari‐
       son, see strcoll(3)).  The comparison is done  using  unsigned
       characters.

       strcmp()  returns an integer indicating the result of the com‐
       parison, as follows:

       •  0, if the s1 and s2 are equal;

       •  a negative value if s1 is less than s2;

       •  a positive value if s1 is greater than s2.

       The strncmp() function is similar, except it compares only the
       first (at most) n bytes of s1 and s2.

RETURN VALUE
       The strcmp() and strncmp() functions return  an  integer  less
       than,  equal  to,  or  greater than zero if s1 (or the first n
       bytes thereof) is found, respectively, to  be  less  than,  to
       match, or be greater than s2.

int ft_strncmp(const char *s0, const char *s1, size_t n);

int main(void)
{
    char    *str0 = "This is string A";
    char    *str1 = "This is string A";
    size_t limiter = 50;

    printf("%d", ft_strncmp(str0, str1, limiter));
    return (0);
}
*/
int ft_strncmp(const char *s0, const char *s1, size_t n)
{
    int i;

    i = 0;
    while((s0[i] == s1[i]) && n && s0[i] && s1[i])
    {
        i++;
        n--;
    }
    return (s0[i] - s1[i]);
}
