/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:41:46 by shaun             #+#    #+#             */
/*   Updated: 2025/01/16 19:41:50 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	main(void)
{
	char const	*origin_string = "This is a string that is the original string and I'm supposed to be able to use this ft_split function to split the string into smaller strings and fit them into an array.";
	char		**double_ptr;
	char		delimiter = ' ';
	int			i = 0;
	int			counter = 1;

	double_ptr = ft_split(origin_string, delimiter);
	while(double_ptr[i] != NULL)
	{
		printf("This is string no.%d: %s\n", counter, double_ptr[i]);
		i++;
		counter++;
	}
	return (0);
}
*/
static int	word_count(char const *string, char separator)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (string[i] != 0)
	{
		if (string[i] != separator && string[i])
			counter++;
		while (string[i] != separator && string[i])
			i++;
		while (string[i] == separator)
			i++;
	}
	return (counter);
}

static int	*array_of_word_lens(char const *string, char delimiter, int nbr_of_words)
{
	int	i;
	int	j;
	int	counter;
	int	*sequence_of_numbers;

	i = 0;
	j = 0;
	counter = 0;
	sequence_of_numbers = malloc(nbr_of_words + 1 * sizeof(int));
	while (string[i])
	{
		while (string[i] != delimiter && string[i])
		{
			counter++;
			i++;
		}
		sequence_of_numbers[j++] = counter;
		counter = 0;
		while (string[i] != delimiter && string[i])
			i++;
		while (string[i] == delimiter)
			i++;
	}
	sequence_of_numbers[j] = -1;
	return (sequence_of_numbers);
}

static char	*string_transplanter(char const *s, int ind, int string_length, char c)
{
	char	*temp_string;
	int		i;

	i = 0;
	temp_string = malloc((string_length + 1) * (sizeof(char)));
	while (s[ind] != c && s[ind])
	{
		temp_string[i] = s[ind];
		i++;
		ind++;
	}
	temp_string[i] = 0;
	return (temp_string);
}

/*The immediate code below was an attempt at a function to fill allocated memory spaces with substrings*/
// char	**string_transplanter(char **double_array, char const *s, int *string_lengths, char c)
// {
// 	char	*temp_string;
// 	int	i;
// 	int	j;
// 	int	k;
// 	int	l;
// 	int	counter;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	l = 0;
// 	counter = 0;
// 	while (s[i] != c && s[i])
// 	{
// 		if (s[i] != c && s[i])
// 		{
// 			while (s[j] != c && s[j])
// 			{
// 				counter++;
// 				j++;
// 			}
// 			j = i;
// 			temp_string = malloc((counter + 1) * sizeof(char));
// 			temp_string[counter] = 0;
// 			while (k < counter)
// 			{
// 				temp_string[k] = s[i];
// 				k++;
// 				i++;
// 			}
// 			k = 0;
// 			counter = 0;
// 			double_array[l] = temp_string;
// 			l++;
// 			free(temp_string);
// 		}
// 		while (s[i] == c)
// 			i++;
// 	}
// 	return (double_array);
// }
char	**ft_split(char const *s, char c)
{
	char	**two_d_array;
	int		i;
	int		j;
	int		k;
	int		*len_of_string;

	i = 0;
	len_of_string = array_of_word_lens(s, c, word_count(s, c));
	two_d_array = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (two_d_array == 0)
		return (0);
	two_d_array[word_count(s, c)] = malloc(1 * sizeof(char));
	two_d_array[word_count(s, c)] = NULL;
	while (i < word_count(s, c))
	{
		two_d_array[i] = malloc((len_of_string[i] + 1) * sizeof(char));
		i++;
	}
	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			two_d_array[k++] = string_transplanter(s, i, len_of_string[j++], c);
			while (s[i] != c && s[i])
				i++;
		}
		while (s[i] == c)
			i++;
	}
	return (two_d_array);
}
