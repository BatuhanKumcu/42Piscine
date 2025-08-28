/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:05:45 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/27 14:09:09 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        if (str[i] < 'A' || str[i] > 'Z')
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    char    str[] = "SELAM";
    char    str1[] = "selaAAm";

    ft_str_is_uppercase(str);
    ft_str_is_uppercase(str1);
    printf("%d\n", ft_str_is_uppercase(str));
    printf("%d", ft_str_is_uppercase(str1));
}
