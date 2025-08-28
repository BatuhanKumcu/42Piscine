/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 13:50:21 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/27 13:59:44 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] < '0') || (str[i] > '9'))
            return (0);
        i++;
    }
    return (1);
}

#include <stdio.h>

int main(void)
{
    char    str[] = "123";
    char    str1[] = "abc";
    printf("%d\n", ft_str_is_numeric(str));
    printf("%d", ft_str_is_numeric(str1));
}
