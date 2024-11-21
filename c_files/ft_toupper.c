/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:09:05 by shaun             #+#    #+#             */
/*   Updated: 2024/11/19 16:09:07 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int c);
/*
int main(void)
{
    printf("%c\n", ft_toupper(123));
    return (0);
}
*/

int ft_toupper(int c)
{
    if (c > 96 && c < 123)
    {
        c = c - 32;
    }
    return (c);
}
