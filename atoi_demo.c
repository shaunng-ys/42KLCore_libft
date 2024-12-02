/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_demo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:08:42 by shaun             #+#    #+#             */
/*   Updated: 2024/11/28 17:08:44 by shaun             ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    const char *nbr_str0 = "fjdklsjfkldj kjdj     +-8899778";
    const char *nbr_str1 = "       +789878923456765432345678 4747hjfoidsifjidojfiojdf    j**)";
    const char *nbr_str2 = "6787787+   7887878";
    const char *nbr_str3 = "!!!!   +787";
    const char *nbr_str4 = "";
    const char *nbr_str5;

    printf("%d\n%d\n%d\n%d\n%d\n%d\n", atoi(nbr_str0), atoi(nbr_str1), atoi(nbr_str2), atoi(nbr_str3), atoi(nbr_str4), atoi(nbr_str5));
    return (0);
}
