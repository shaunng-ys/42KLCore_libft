/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:20:50 by shaun             #+#    #+#             */
/*   Updated: 2024/11/19 16:20:53 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int ft_tolower(int c);

int main(void)
{
    printf("%c\n", ft_tolower('A' - 1));
    return (0);
}
*/
int ft_tolower(int c)
{
    if (c > 64 && c < 91)
    {
        c = c + 32;
    }
    return (c);
}
