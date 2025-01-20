#include <stdio.h>

int    word_count(char *string, char c);

int    main(void)
{
    char    *norm_string = "      This  is  a  normal    string     ";
	char	*origin_string = " This is a string that is the original string and I'm supposed to be able to use this ft_split function to split the string into smaller strings and fit them into an array.";
    char    delimiter = ' ';

    printf("This is the word count of the inputed string: %d\n", word_count(origin_string, delimiter));
    return (0);
}

int    word_count(char *string, char c)
{
    int    i;
    int    counter;
    int    toggle;

    i = 0;
    counter = 0;
    toggle = 0;
    while (string[i] != 0)
    {
        while (string[i] == c)
        {
            if (string[i + 1] != c && string[i + 1])
            {
                //i++;
                toggle = 1;
            }
            if (toggle == 1)
            {
                counter++;
                toggle = 0; 
            }
            i++;
        }
        while (string[i] != c && string[i])
        {
            i++;
        }
    }
    return (counter);
}