/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:54:15 by shaun             #+#    #+#             */
/*   Updated: 2024/11/18 16:54:19 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void    *ft_memmove(void *dest, const void *src, size_t n);

int main(void)
{
    unsigned int    nbr = 9;
    const char    *source_string = "Immovable";
    char    destination_string[100] = "_________ Faith";
    printf("This is the source string: %s\n", source_string);
    printf("This is the destination string: %s\n", destination_string);
    ft_memmove(destination_string, source_string, nbr);
    printf("This is the destination string: %s\n", destination_string);
    return (0);
}
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned int	nbr;
	void			*temp;

	i = 0;
	nbr = n;
	temp = (char *) malloc(n * sizeof(char));
	while (nbr)
	{
		((char *)temp)[i] = ((char *)src)[i];
		i++;
		nbr--;
	}
	i = 0;
	while (n)
	{
		((char *)dest)[i] = ((char *)temp)[i];
		i++;
		n--;
	}
	return (dest);
}
