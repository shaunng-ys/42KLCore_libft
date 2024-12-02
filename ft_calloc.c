/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:13:26 by shaun             #+#    #+#             */
/*   Updated: 2024/11/30 17:13:27 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
In order to implement the calloc function, you will use malloc():

void    *malloc(size_t size);

The  malloc()  function allocates size bytes and returns a pointer to the allocated memory.
The memory is not initialized.  If size is 0, then malloc() returns a unique pointer value that can later be successfully passed
to free(). (See "Nonportable behavior" for portability issues.)

Depending on your current operating system, the calloc man page and the function’s behaviour may differ.
The following instructions supersedes what you can find in the man page: 
If nmemb or size is 0, then calloc() returns a unique pointer value that can later be successfully passed to free().
*/


int main(void)
{
    void *memspace_ptr;
    int counter = 1000;
    int i = 0;

    memspace_ptr = ft_calloc(8, sizeof(char));
    printf("%p\n", memspace_ptr);
    while (counter)
    {
        printf("%d", ((char *)memspace_ptr)[i]);
        i++;
        counter--;
    }
    return (0);
}

/*
NAME
malloc, free, calloc, realloc, reallocarray - allocate and free dynamic memory

LIBRARY
Standard C library (libc, -lc)

SYNOPSIS
#include <stdlib.h>

void *malloc(size_t size);
void free(void *_Nullable ptr);
void *calloc(size_t nmemb, size_t size);

Feature Test Macro Requirements for glibc (see feature_test_macros(7)):

reallocarray():
Since glibc 2.29:
_DEFAULT_SOURCE
glibc 2.28 and earlier:
_GNU_SOURCE

DESCRIPTION
malloc()
The  malloc()  function allocates size bytes and returns a pointer to the allocated memory.  The memory is not
initialized.  If size is 0, then malloc() returns a unique pointer value that can later be successfully passed
to free().  (See "Nonportable behavior" for portability issues.)

free()
The free() function frees the memory space pointed to by ptr, which must have been returned by a previous call
to malloc() or related functions.  Otherwise, or if ptr has already been freed, undefined behavior occurs.  If
ptr is NULL, no operation is performed.

calloc()
The calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer
to the allocated memory.  The memory is set to zero.  If nmemb or size is 0, then calloc()  returns  a  unique
pointer value that can later be successfully passed to free().

If  the multiplication of nmemb and size would result in integer overflow, then calloc() returns an error.  By
contrast, an integer overflow would not be detected in the following call to malloc(), with the result that an
incorrectly sized block of memory would be allocated:

malloc(nmemb * size);

RETURN VALUE
The  malloc(),  calloc(),  realloc(),  and  reallocarray() functions return a pointer to the allocated memory,
which is suitably aligned for any type that fits into the requested size or less.  On error,  these  functions
return  NULL  and set errno.  Attempting to allocate more than PTRDIFF_MAX bytes is considered an error, as an
object that large could cause later pointer subtraction to overflow.

The free() function returns no value, and preserves errno.

ERRORS
calloc(), malloc(), realloc(), and reallocarray() can fail with the following error:

ENOMEM Out  of  memory.   Possibly,  the application hit the RLIMIT_AS or RLIMIT_DATA limit described in get
limit(2).  Another reason could be that the number of mappings created by the caller  process  exceeded
the limit specified by /proc/sys/vm/max_map_count.
*/
void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    int i;
    size_t  counter;
    size_t  store;
    


    i = 0;
    store =  (nmemb * size);
    //counter = nmemb;
    if (nmemb == 0 || size == 0)
        return (malloc(0));
    if (size == ((size_t) - 1) / nmemb)
        return (NULL);
    ptr = (malloc(nmemb * size));
    //use bzero || use while loop to decrement size_t * nmemb until it's zero 
    
    /*
    while (counter)
    {
        if (size == 1)
            ((char *)ptr)[i] = 0;
        else if (size == 4)
            ((int *)ptr)[i] = 0;
        else
            ((double *)ptr)[i] = 0;
        i++;
        counter--;
    }
    */
   while (store)
   {
        ((char *)ptr)[i] = 0;
        store--;
   }
    return (ptr);
}