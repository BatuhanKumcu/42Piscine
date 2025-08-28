/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:33:07 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/28 12:47:45 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
    {
        while (str[i] > 122 && str[i] < 97 || str[i] > 90 && str[i] < 65)
        {
            if (str[i] <= 122 && str[i] >= 97)
                str[i] = str[i] - 32;
            i++;
        }
        i++;
    }
    return (str);
}

#include <stdio.h>

int main(void)
{
    char    str[] = "selma arkdas 1 2 lers";
    
    printf("%s", ft_strcapitalize(str));
}