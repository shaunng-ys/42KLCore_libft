/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:21:35 by shaun             #+#    #+#             */
/*   Updated: 2025/01/13 21:21:41 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int main(void)
{
    int nbr;

    nbr = -4567876;
    printf("\nThis is the number that was inputed: %s", ft_itoa(nbr));
    return (0);
}
*/

char *ft_itoa(int n)
{
    int placeholder;
    int nbr_of_places;
    int sign;
    char *string;

    placeholder = n;
    nbr_of_places = 0;
    if (placeholder < 0)
    {
        nbr_of_places++;
        placeholder = placeholder * -1;
    }
    while (placeholder >= 10)
    {
        placeholder = placeholder / 10;
        nbr_of_places++;
    }
    //printf("This is the number of places after going through the loop dividing placeholder by 10 each iteration: %d\nAnd this is the current value of placeholder: %d\n", nbr_of_places, placeholder);
    string = (char*)malloc((nbr_of_places + 2)*sizeof(char));
    if (string == 0)
        return (0);
    string[nbr_of_places +1] = '\0';
    placeholder = n;
    if (placeholder < 0)
        placeholder = placeholder * -1;
    while (placeholder >= 10)
    {
        string[nbr_of_places] = (placeholder % 10) + 48;
		//printf("\nThis is the current value of placeholder: %d\nThis is the current value of nbr_of_places: %d\n", placeholder, nbr_of_places);
        placeholder = placeholder / 10;
        nbr_of_places--;
    }
    string[nbr_of_places] = placeholder + 48;
    if (n < 0)
        string[0] = '-';
    return (string);
}
