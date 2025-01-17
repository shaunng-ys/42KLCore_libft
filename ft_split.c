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
	char	*origin_string = "This is a string that is the original string and I'm supposed to be able to use this ft_split function to split the string into smaller strings and fit them into an array.";
	char	**double_ptr;
	char	delimiter = ' ';
	int	i = 0;
	int	counter = 0;

	double_ptr = ft_split(origin_string, delimiter);
	while(double_ptr[i])
	{
		printf("This is string no.%d: %s", counter, double_ptr[i]);
		i++;
		counter++;
	}
	return (0);
}

int	word_count(char *string, char c)
{
	int	i;

	i = 0;
	while (string[i] != c && string[i] != 0)
	{
		i++;
		if (string[i] == c)
			c++;
	}
	return (c);
}

int	*array_of_word_lens(char *string, char delimiter)
{
	int	i;
	int	nbr_of_words;
	
	i = 0;
	nbr_of_words = word_count(string, delimiter);
	while (string[i] != delimiter && string[i] != 0)
	{
		if (string[0] != delimiter)

		i++;
		if (string[i] == delimiter)
			c++;
	}
	return (c);
}

char **ft_split(char const *s, char c)
{
	int	nbr_of_words;
	int	i;

	i = 0;
	nbr_of_words = word_count(s, c);
	char	**double_array = (char **)malloc((nbr_of_words + 1) * sizeof(char*));
	while(i < nbr_of_words)
	{
		double_array[i] = (char*)malloc()
	}


}


/*
char **ft_split(char const *s, char c)
{   	
	char	**double_array;
	int	nbr_of_words;
	int	i;

	i = 0;
	nbr_of_words = word_count(s, c);
	/* allocate an array big enough to hold all the words in s */
	/* loop over the string and find the start of the word */
    /* find the end of the word */
    /* copy the world at the first free index in our words array */
	/* return our words array */
	while (s[i])
	{

	}

	double_array = (char**)malloc((nbr_of_words + 1) * sizeof(char *));
    double_array[nbr_of_words] = 0;
	while (double_array[i])
	{
		double_array[i] = (char *)malloc(word_size * sizeof(char));
		i++;
	}

}

int	word_count(char *string, char c)
{
	int	i;

	i = 0;
	while (string[i] != c && string[i] != 0)
	{
		i++;
		if (string[i] == c)
			c++;
	}
}

char	*fill_word(char *ptr, int i, char d)
{
	char	*word;
	int	j;
	/* allocate enough room for the word */
	word = (char *)malloc(i + 1 * sizeof(char));
	j = 0;
	/* copy the word into the memory you allocated above */
	while (ptr[j] != d)
	{
		word[j] = ptr[j];
		j++;
	}
	word[j] = 0;
	/* return the allocated word */
	return (word);
}
*/

