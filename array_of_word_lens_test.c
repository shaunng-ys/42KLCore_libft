#include <stdlib.h>
#include <stdio.h>

int	word_count(char *string, char separator);
int	*array_of_word_lens(char *string, char delimiter, int nbr_of_words);

int	main(void)
{
	char	*string1 = "This is a string that I'm using for the test.";
	char	s = ' ';
	int	*sequence;
	int	i;
	int	nbr_of_words;

	i = 0;
	nbr_of_words = word_count(string1, s);
	sequence = array_of_word_lens(string1, s, nbr_of_words);	
	printf("This is the number of words after separation: %d\n", nbr_of_words);
	while (sequence[i] != -1)
	{
		printf("%d, ", sequence[i]);
		i++;
	}
	printf("\n");
	return (0);
}

int    word_count(char *string, char separator)
{
    int    i;
    int    counter;
    int    toggle;

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

int	*array_of_word_lens(char *string, char delimiter, int nbr_of_words)
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
