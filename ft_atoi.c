/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:11:35 by shaun             #+#    #+#             */
/*   Updated: 2024/11/28 16:11:38 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    const char  *str_nbr = "       -684909876789098731295abcd";
    printf("%d\n", ft_atoi(str_nbr));
    return (0);
}

int ft_atoi(const char *nptr)
{
    int i;
    int sign_tracker;
    int nbr;
    int counter;
    int str2int;
    int multiplier;
    int tally;
    int nbr2add;

    i = 0;
    sign_tracker = 1;
    multiplier = 1;
    tally = 0;
    //Goes through string as long as the string begins with either space/s, number/s or sign/s
    
    while((nptr[i] == ' ' || (nptr[i] > 8 && nptr[i] < 14)))
        i++;
    while ((nptr[i] > 47 && nptr[i] < 58) || (nptr[i] == '+' || nptr[i] == '-'))
    {
        printf("Where am i?: ?%c\n", nptr[i]);
        if ((nptr[i] == '+' || nptr[i] == '-')) //can remove the sign tracker condition for positive from here by adding a coditional upstairs)
        {
            if ((nptr[i + 1] >= '0' && nptr[i + 1] <= '9') && nptr[i] == '+')
                sign_tracker = 1;
            else if ((nptr[i + 1] >= '0' && nptr[i + 1] <= '9') && nptr[i] == '-')
                sign_tracker = -1;
            else
                return (0);
            i++;
        }
        
        while (nptr[i] >= '0' && nptr[i] <= '9')
        {
            counter++;
            i++;
        }
        printf("%d\n", counter);
        i = i - counter;
        while (--counter) 
            multiplier = multiplier * 10;
        printf("Multiplier: %d\n", multiplier);
        while (nptr[i] >= '0' && nptr[i] <= '9')
        {
            nbr2add = (nptr[i] - 48) * multiplier;
            printf("nbr2add: %d\n", nbr2add);
            multiplier = multiplier / 10;
            tally = tally + nbr2add;
            i++;
            if (multiplier == 1)
                return ((tally + (nptr[i] - 48)) * sign_tracker);
        }
        printf("%d, %d\n", counter, multiplier); 
        i++;
    }
    return (0);
}