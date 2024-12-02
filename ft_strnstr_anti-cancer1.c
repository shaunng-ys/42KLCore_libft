/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_anti-cancer1.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:45:00 by shaun             #+#    #+#             */
/*   Updated: 2024/11/27 23:45:02 by shaun             ###   ########kl       */
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



int main(void)
{
       //Example from manual
       const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "Baz";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 50);
       printf("%s", ptr);
       return (0);
}

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
       int    i;
       int    counter;
       int    tracer;

       i = 0;
       counter = 0;
       tracer = 0;
       while (little[i++])
              counter++;
       if (!counter)
              return ((char *)big);
       i = 0;
       while (len && big[i])
       {
              while (big[tracer + i] == little[tracer])
              {
                     if (!little[tracer])
                            return ((char *)big + i);
                     tracer++;   
              }
              i++;
              tracer = 0;
              counter++;
              len--;
       }
       return (0);
}

