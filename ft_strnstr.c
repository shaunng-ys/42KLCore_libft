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
/*
#include <string.h>
char *strnstr(const char *big,	const char *little, size_t len);

DESCRIPTION
       The strnstr() function locates the first	occurrence of the  null-termi-
       nated  string little in the string big, where not more than len charac-
       ters are	searched.  Characters that appear after	a '\0'	character  are
       not  searched.  Since the strnstr() function is a FreeBSD specific API,
       it should only be used when portability is not a	concern.

RETURN VALUES
       If little is an empty string, big is returned; if little occurs nowhere
       in big, NULL is returned; otherwise a pointer to	the first character of
       the first occurrence of little is returned.

EXAMPLES
       The  following  sets  the pointer ptr to	NULL, because only the first 4
       characters of largestring are searched:

	     const char	*largestring = "Foo Bar Baz";
	     const char	*smallstring = "Bar";
	     char *ptr;

	     ptr = strnstr(largestring,	smallstring, 4);

//char    *ft_strnstr(const char *big, const char *little, size_t len);
*/


/*
int main(void)
{
       //Example from manual
       const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "r";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 50);
       printf("%s", ptr);
       return (0);
}
*/

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
       int    i;
       int    counter;
       int    tracer;
       int    placeholder;

       i = 0;
       //I tried to change counter to one instead of adding one to tracer in the if else conditional but for some reason it doesn't yield the same result.
       counter = 0;
       placeholder = 0;
       while (little[i] != 0)
       {
              counter++;
              i++;
       }
       printf("%d", counter);
       i = 0;
       if (little[i] == 0)
              return ((char *)big);
       while (len != 0 && big[i] != 0)
       {
              tracer = 0;
              while (big[placeholder] == little[tracer])
              {
                     if ((tracer + 1 == counter))
                     {
                            big = big + i;
                            return ((char *)big);
                     }
                     placeholder++;
                     tracer++;
                     printf("%d", tracer);
              }
              i++;
              placeholder = i;
              len--;
       }
       return (0);
}
