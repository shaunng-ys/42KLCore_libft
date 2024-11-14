/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:38:46 by shaun             #+#    #+#             */
/*   Updated: 2024/11/14 05:44:48 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n);

int	main(void)
{
	char	string[] = "Try again later";
	int	arr[] = {0, 1, 2, 3, 4};
	void *ptr1 = string;
	void *ptr2 = arr;
	
	ft_memset(ptr1, '_', 3);
	ft_memset(ptr2, 9, 2);
	printf("%s", string);
	return (0);
}

void ft_ascii(char *arr)
{
	arr++;
}

void	*ft_memset(void *str, int c, size_t n)
{
	int	i;
		
	i = 0;	
	while (n)
	{
		((int *)str)[i] = c;
		i++;
		n--;
	}
	return (str);
}
