/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:13:26 by shaun             #+#    #+#             */
/*   Updated: 2024/11/30 17:13:27 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int main(void)
{
    void *memspace_ptr;
    int counter = 5 * sizeof(char);
    int i = 0;

    memspace_ptr = ft_calloc(5, sizeof(char));
    printf("%p\n", memspace_ptr);
    while (counter)
    {
        printf("%d", ((char *)memspace_ptr)[i]);
        i++;
        counter--;
    }
    return (0);
}
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		i;
	size_t	counter;
	size_t	store;

	i = 0;
	store = (nmemb * size);
	//printf("%zu\n", store);
	//counter = nmemb;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size == ((size_t) - 1) / nmemb)
		return (NULL);
	ptr = (malloc(nmemb * size));
	//use bzero || use while loop to decrement size_t * nmemb until it's zero 
	while (store)
	{
		((char *)ptr)[i] = 0;
		i++;
		store--;
	}
	return (ptr);
}
