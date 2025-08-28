/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:00:19 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/27 14:04:19 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        if (str[i] < 'a' || str[i] > 'z')
            return (0);
        i++;
    }
    return (1);
}

int main(void)
{
    char    str[] = "selam";
    char    str1[] = "selaAAm";

    ft_str_is_lowercase(str);
    ft_str_is_lowercase(str1);
    printf("%d\n", ft_str_is_lowercase(str));
    printf("%d", ft_str_is_lowercase(str1));
}