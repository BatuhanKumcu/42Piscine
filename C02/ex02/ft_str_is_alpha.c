/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:04:20 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/27 13:49:37 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
            return (0);
        i++;
    }
    return (1);
}

/* karakter alfabetik bir karakterin dısında ise, 0 cıktısını ver. eğer
karakterin sonuna gelene kadar alfabetik ise 1 cıktısını ver*/

#include <stdio.h>

int main(void)
{
    char    str[] = "abcdef";
    char    str1[] = "12312asdas";
    ft_str_is_alpha(str);
    ft_str_is_alpha(str1);
    printf("%d\n", ft_str_is_alpha(str));
    printf("%d", ft_str_is_alpha(str1));
}

