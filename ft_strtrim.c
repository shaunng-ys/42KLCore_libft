/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:50:04 by shaun             #+#    #+#             */
/*   Updated: 2024/12/19 16:50:07 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Parameters:
s1: The string to be trimmed.
set: The reference set of characters to trim.

Return value:
The trimmed string.
NULL if the allocation fails.

External functs.:
malloc

Description:
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/

// int main(void)
// {
//     char const  *base_string = "Unnecessarily-pink-nun";
//     char const  *remove_this = "";
//     // printf("testing");
//     printf("%s\n", ft_strtrim(base_string, remove_this));
//     return (0);
// }

char	*start_point(char const *string1, char const *chars)
{
	char	*start;
	int		i;
	size_t	j;
	// int		k;

	i = 0;
	j = 0;
	// k = 0;
	start = (char *)string1;
	while (string1[i] != '\0')
	{
		if (string1[i] == chars[j])
		{
			start++;
			i++;
			j = 0;
		}
		else if (string1[i] != chars[j])
		{
			while (string1[i] != chars[j] && chars[j])
				j++;
			if (string1[i] != chars[j] || chars[j] == 0)
				i = -1;
		}
		if (i == -1)
			break;
	}
	return (start);
}

char	*end_point(char const *string1, char const *chars)
{
	char	*end;
	// int		i;
	size_t	j;
	int		k;
	
	end = (char *)string1;
	// i = 0;
	while (*end++)
		;
	end--;
	k = ft_strlen(string1) - 1;
	// printf("k: %d\n", k);
	j = 0;
	while (k > 0)
	{
		// printf("end: %s\n", end);
		if (string1[k] == chars[j])
		{
			end--;
			k--;
			j = 0;
		}
		else if (string1[k] != chars[j])
		{
			while (string1[k] != chars[j] && chars[j])
				j++;
			if (string1[k] != chars[j] || chars[j] == '\0')
				k = -1;
		}
		if (k == -1)
			break;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*new_string;
	int		i;
	// size_t	j;
	int		k;

	i = 0;
	// j = 0;
	// k = 0;
	start = (char *)s1;
	end = (char *)s1;
	while (s1[i++] != '\0')
		end++;
	end--;
	// i = 0;
	//The immediate below loop is to move the start pointer
	// while (s1[i] != '\0')
	// {
	// 	if (s1[i] == set[j])
	// 	{
	// 		start++;
	// 		i++;
	// 		j = 0;
	// 	}
	// 	else if (s1[i] != set[j])
	// 	{
	// 		while (s1[i] != set[j] && set[j])
	// 			j++;
	// 		if (s1[i] != set[j] || set[j] == 0)
	// 			i = -1;
	// 	}
	// 	if (i == -1)
	// 		break;
	// }
	start = start_point(s1, set);
	// printf("start: %s\n", start);
	if (start[0] == 0)
		return (ft_calloc(1,1));
	// j = 0;
	// k = ft_strlen(s1) - 1;
	//The immediate below loop is to move the end pointer
	// while (k > 0)
	// {
	// 	if (s1[k] == set[j])
	// 	{
	// 		end--;
	// 		k--;
	// 		j = 0;
	// 	}
	// 	else if (s1[k] != set[j])
	// 	{
	// 		while (s1[k] != set[j] && set[j])
	// 			j++;
	// 		if (s1[k] != set[j] || set[j] == '\0')
	// 			k = -1;
	// 	}
	// 	if (k == -1)
	// 		break;
	// }
	end = end_point(s1, set);
	// printf("end: %s\n", end);
	i = 0;
	new_string = (char *)malloc((end - start  + 1) * sizeof(char));
	if (new_string == 0)
		return (0);
	new_string[end - start] = '\0';
	k = end - start + 1;
	while (--k > 0)
	{
		new_string[i] = start[i];
		i++;
	}
	return (new_string);
}

// int main()
// {
// 	printf("%s\n", ft_strtrim("   xxxtripouille   xxx", " x"));
// 	return (0);
// }