/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:08:12 by shaun             #+#    #+#             */
/*   Updated: 2024/11/19 19:08:14 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char    *ft_strrchr(const char *s, int c);

int main(void)
{
    int a;
    char    *str = "This is an example of a string";

    a = 'i';
    printf("%s", ft_strrchr(str, a));
    return (0);
}
*/
char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    if (c == 0)
    {
        while (s[i])
        {
            i++;
        }
        return (char *)(s + i);
    }
    
    else
    {
        while (s[i])
        {
            i++;
        }
        while (i)
        {
            if (s[i] == c)
            {
                return (char *)(s + i);
            }
            i--;
        }
        return (0);
    }
}
