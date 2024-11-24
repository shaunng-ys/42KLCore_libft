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
       If little is an empty string, big is returned; if little	occurs nowhere
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

int main(void)
{
       //Example from manual
       const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "Baz";
	char *ptr;

	ptr = strnstr(largestring,	smallstring, 50);
       printf("%s", ptr);
    return (0);
}

char    *ft_strnstr(const char *big, const char *little, size_t len)
{

}
*/