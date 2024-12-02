/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_anti-cancer.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:06:10 by shaun             #+#    #+#             */
/*   Updated: 2024/11/24 22:06:15 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */


char    *ft_strnstr(const char *big, const char *little, size_t len)
{
       int    i;
       int    counter;
       int    tracer;

       i = 0;
       counter = 0;
       while (little[counter])
              counter++;
       if (!little[i])
              return (big);
       while (len && big[i])
       {
              tracer = 0;
              while (big[i] == little[tracer])
              {
                     if ((tracer == counter - 1) && (little[tracer + 1] == 0))
                            return (&big[i - tracer]);
                     tracer++;
                     i++;
              }
              i++;
              len--;
       }
       return (0);
}
