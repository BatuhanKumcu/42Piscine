/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:15:59 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/28 12:32:37 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        if (str[i] <= 'z' && str[i] >= 'a')
            str[i] = str[i] - 32;
        i++;
    }
    return(str);
}

#include <stdio.h>

int main(void)
{
    char    str[] = "selma";
    char    str1[] = "SELam";

    ft_strupcase(str);
    ft_strupcase(str1);
    printf("%s\n", ft_strupcase(str));
    printf("%s", ft_strupcase(str1));
}
