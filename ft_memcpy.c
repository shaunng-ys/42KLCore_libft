/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:20:34 by shaun             #+#    #+#             */
/*   Updated: 2024/11/18 16:20:42 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void    *ft_memcpy(void *dest_str, const void *src_str, size_t n);

int main(void)
{
    const char    source_str[100] = "What about love?";
    char    destination_str[100] = "What about us?";
    size_t nbr;

    nbr = 16 * sizeof(char);
    printf("These are the original values: %s\n", destination_str);
    ft_memcpy(destination_str, source_str, nbr);
    printf("These are the new values: %s\n", destination_str);
    return (0);
}
*/
void    *ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
    unsigned int value_size;
    int i;

    i = 0;
    value_size = sizeof(dest_str[i]);
    while(n)
    {
        ((char *)dest_str)[i] = ((char *)src_str)[i];
        i++;
        n = n - value_size;
    }
    ((char *)dest_str)[i] = 0;
    return (dest_str);
}