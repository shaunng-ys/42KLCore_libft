#include <stdio.h>

int    word_count(char *string, char c);

int    main(void)
{
    char    *norm_string = "      This  is  a  normal    string     ";
	char	*origin_string = " This is a string that is the original string and I'm supposed to be able to use this ft_split function to split the string into smaller strings and fit them into an array.";
    char    delimiter = ' ';

    printf("This is the word count of the inputed string: %d\n", word_count(norm_string, delimiter));
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