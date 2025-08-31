/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:14:14 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/29 12:38:38 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != 0 || s2[i] != 0)
    {
        i++;   
    }
    return (s1[i] - s2[i]);
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_strcmp("merha1111", "merha111"));
}