/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:44:44 by shaun             #+#    #+#             */
/*   Updated: 2024/11/19 16:44:46 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strchr(const char *s, int c);

int main(void)
{
    char    *str = "This is a killer application!";
    int nbr;

    nbr = 'k';
    //printf("%p", ft_strchr(str, nbr));
    printf("%s", ft_strchr(str, nbr));
    return (0);
}

char    *ft_strchr(const char *s, int c)
{
    int i;
    char    *ptr_placeholder;

    i = 0;
    if (c == 0)
    {
        while (s[i])
        {
            i++;
        }
        return ((char *)(s + i + 1));
    }

    else
    {
        while (s[i] != c)
        {
            if (s[i] == 0)
            {
                return (0);
            }
            i++;
        }
        return ((char *)(s + i));
    }
}