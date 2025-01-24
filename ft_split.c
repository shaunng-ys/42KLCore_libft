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

int	main(void)
{
	char const	*origin_string = "Tripoulli";
	char		**double_ptr;
	char		delimiter = 0;
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

static int	*lens_array(char const *string, char delimiter, int nbr_of_words)
{
	int	i;
	int	j;
	int	counter;
	int	*sequence_of_numbers;

	i = 0;
	j = 0;
	counter = 0;
	sequence_of_numbers = malloc((nbr_of_words + 1) * sizeof(int));
	if (sequence_of_numbers == 0)
		return (NULL);
	while (string[i])
	{
		while (string[i] != delimiter && string[i++])
			counter++;
		sequence_of_numbers[j++] = counter;
		counter = 0;
		while (string[i] != delimiter && string[i++])
			;
		while (string[i++] == delimiter)
			;
	}
	sequence_of_numbers[j] = -1;
	return (sequence_of_numbers);
}

static char	*string_move(char const *s, int ind, int string_length, char c)
{
	char	*temp_string;
	int		i;

	i = 0;
	temp_string = malloc((string_length + 1) * (sizeof(char)));
	if (temp_string == 0)
		return (NULL);
	while (s[ind] != c && s[ind])
	{
		temp_string[i++] = s[ind];
		ind++;
	}
	temp_string[i] = 0;
	return (temp_string);
}

static char	**dou_arr(int nbr_of_words, int *string_lengths)
{
	char	**double_array;
	int		i;

	i = 0;
	double_array = malloc((nbr_of_words + 1) * sizeof(char *));
	if (double_array == 0)
		return (0);
	double_array[nbr_of_words] = malloc(1 * sizeof(char));
	double_array[nbr_of_words] = NULL;
	while (i < nbr_of_words)
	{
		double_array[i] = malloc((string_lengths[i] + 1) * sizeof(char));
		if (double_array[i] == 0)
		{
			while (i--)
				free(double_array[i]);
			free(double_array);
			return (0);
		}
		i++;
	}
	return (double_array);
}

char	**ft_split(char const *s, char c)
{
	char	**two_d_array;
	int		i;
	int		j;
	int		k;
	int		*len_of_string;

	i = 0;
	len_of_string = lens_array(s, c, word_count(s, c));
	two_d_array = dou_arr(word_count(s, c), len_of_string);
	printf("len_of_string:%d", len_of_string[0]);
	printf("yes");
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			two_d_array[k++] = string_move(s, i, len_of_string[j++], c);
			while (s[i] != c && s[i++])
				;
		}
		while (s[i] == c)
			i++;
	}
	return (two_d_array);
}
