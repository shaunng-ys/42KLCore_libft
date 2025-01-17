/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:24:31 by shaun             #+#    #+#             */
/*   Updated: 2025/01/15 14:24:33 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	nbr = -5637843;
	//int	wtf = open("./test.c", O_RDWR);
	ft_putnbr_fd(nbr, 1);
	return (0);
}
/*
//Without recursion method (too long though)
void ft_putnbr_fd(int n, int fd)
{
	int	i;
	int	placeholder;
	int	nbr_of_places;
	char	string_of_int[12];

	placeholder = n;
	nbr_of_places = 0;
	if (n < 0)
		placeholder = placeholder * -1;
	while (placeholder >= 10)
	{
		placeholder = placeholder / 10;
		nbr_of_places++;
	}
	placeholder = n;
	if (n < 0)
	{
		placeholder = placeholder * -1;
		nbr_of_places++;
		string_of_int[0] = '-';
	}
	string_of_int[nbr_of_places + 1] = '\0';
	while (placeholder >= 10)
	{
		string_of_int[nbr_of_places] = (placeholder % 10) + 48;
		placeholder = placeholder / 10;
		nbr_of_places--;
	}
	string_of_int[nbr_of_places] = placeholder + 48;
	i = 0;
	while (string_of_int[i] != '\0')
	{
		write (fd, &string_of_int[i], 1);
		i++;
	}
}
*/

void ft_putnbr_fd(int n, int fd)
{
	char	temp;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 12);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	temp = n % 10 + '0';
	write(fd, &temp, 1);
}