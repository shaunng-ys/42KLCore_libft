/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:35:31 by shaun             #+#    #+#             */
/*   Updated: 2024/11/23 16:35:33 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(void)
// {
// 	//Example from manual
// 	const char	*largestring = "lorem ipsum dolor sit amet";
// 	const char	*smallstring = "dolor";
// 	char *ptr;

// 	ptr = ft_strnstr(largestring, smallstring, 15);
// 	printf("%s\n", ptr);
// 	printf("%s\n", strnstr(largestring, smallstring, 15));
// 	return (0);
// }

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	tracer;
	size_t	placeholder;
	size_t	len_copy;

	i = 0;
	placeholder = 0;
	len_copy = len;
	if (little[i] == 0)
		return ((char *)big);
	while (len-- != 0 && big[i])
	{
		tracer = 0;
		len_copy = len;
		while (big[placeholder++] == little[tracer] && len_copy-- != 0)
		{
			if ((tracer + 1) == ft_strlen(little))
				return ((char *)big + i);
			tracer++;
		}
		i++;
		placeholder = i;
	}
	return (0);
}
