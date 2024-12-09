/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:27:30 by shaun             #+#    #+#             */
/*   Updated: 2024/11/19 13:27:33 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
ft_strlcat(3bsd - from man strlcat)
              Copy and catenate the input string into a destination
              string.  If the destination buffer, limited by its size,
              isn't large enough to hold the copy, the resulting string
              is truncated (but it is guaranteed to be null-terminated).
              They return the length of the total string they tried to
              create.

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
*/

int main(void)
{
    char    memspace4string0[1000] = {'T', 'h', 'i', 's'};
    //char    *dst_string0 = &(memspace4string0[0]);
    const char  source_string0[] = {' ', 'B', 'a', 'l', 'l', 'o', 'o', 'n'};
    //char    *src_string0 = source_string0;
    size_t  destination_size0 = 103;
/*
    char    memspace4string1[1000] = "This is the destination string, and after this is what is appende: ";
    const char  *source_string1 = "Balloon animals fly towards the sun.";
    size_t  destination_size1 = 103;
*/
    strlcat(memspace4string0, source_string0, destination_size0);
    printf("%s", memspace4string0);//, strlcat(memspace4string0, source_string0, destination_size0));
    //printf("%s , %d\n", memspace4string1, strlcat(memspace4string1, source_string1, destination_size1));
    return (0);
}

/*
int main(void)
{
    char    memspace4string[1000] = "This is the destination string, and after this is what is appende: ";
    const char  *source_string = "Balloon animals fly towards the sun.";
    size_t  destination_size = 103;
    printf("%s", ft_strlcat(memspace4string, source_string, destination_size));
    return (0);
}

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    //Check to see if both dst & src are true strings i.e. have nul terminating characters at the end

}
*/