/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:30:27 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/28 12:31:43 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        if (str[i] <= 'Z' && str[i] >= 'A')
            str[i] = str[i] + 32;
        i++;
    }
    return(str);
}

#include <stdio.h>

int main(void)
{
    char    str[] = "sel123123xwma";
    char    str1[] = "SELam";

    ft_strlowcase(str);
    ft_strlowcase(str1);
    printf("%s\n", ft_strlowcase(str));
    printf("%s", ft_strlowcase(str1));
}