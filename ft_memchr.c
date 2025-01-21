/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:01:18 by shaun             #+#    #+#             */
/*   Updated: 2024/11/21 18:01:20 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void *memchr(const void s[.n], int c, size_t n);

int main(void)
{
    const char *str = "This is a pasted string";
    int chr = 'T';
    size_t  limiter = 23;
    printf("%s", ((char *)ft_memchr(str, chr, limiter)));
    return (0);
}
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (((char *)s)[i] && n)
	{
		if (((char *)s)[i] == c)
		{
			return ((void *)(s + i));
		}
		i++;
		n--;
	}
	return (0);
}
