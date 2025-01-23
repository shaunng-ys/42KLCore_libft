/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 03:36:55 by shaun             #+#    #+#             */
/*   Updated: 2024/12/03 03:36:56 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
//     char const *string = "lorem ipsum dolor sit amet";
//     unsigned int starting_char = 400;
//     size_t max = 20;
//     printf("%s", ft_substr(string, starting_char, max));
//     return (0);
// }

/*
Function name: ft_substr
Prototype: char *ft_substr(char const *s, unsigned int start, size_t len);
Turn in files: -
Parameters: 
s: The string from which to create the substring.
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring.
Return value: The substring. NULL if the allocation fails.
External functs.: malloc
Description: Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				i;
	unsigned int	counter;
	char			*ptr0;
	void			*ptr1;

	i = 0;
	counter = ft_strlen(s);
	if (start > counter)
		return (ft_calloc(1, 1));
	ptr0 = (char *)s + start;
	i = 0;
	if (counter <= len)
		ptr1 = ft_calloc((counter + 1), sizeof(char));
	else
		ptr1 = ft_calloc((len + 1), sizeof(char));
	if (ptr1 == NULL)
		return (NULL);
	while (len-- != 0 && counter-- != 0)
	{
		((char *)ptr1)[i] = ((char *)ptr0)[i];
		i++;
	}
	return (ptr1);
}
