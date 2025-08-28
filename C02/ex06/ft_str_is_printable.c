/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:01:03 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/28 12:15:30 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 31)
            return (0);
        i++;
    }
    return (1);
}

#include <stdio.h>

int main(void)
{
    char    str[] = "seka12\n3817249812m";
    char    str1[] = "selafasf\n";

    ft_str_is_printable(str);
    ft_str_is_printable(str1);
    printf("%d\n", ft_str_is_printable(str));
    printf("%d", ft_str_is_printable(str1));
}