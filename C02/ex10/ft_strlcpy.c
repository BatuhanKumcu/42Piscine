/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 13:45:18 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/30 16:52:09 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int sayi;
    unsigned int kontrol;
    
    sayi = 0;
    kontrol = 0;
    while (src[sayi] != 0)
        sayi++;
    if (size != 0)
    {
        while (src[kontrol] != 0 && kontrol < (size - 1))
        {
            dest[kontrol] = src[kontrol];
            kontrol++;
        }
        dest[kontrol] = 0;
    }
    return (sayi);
}

#include <stdio.h>

int main(void)
{
    char    str[] = "selma";
    char    str1[] = "ME123Rhaba";
    int i = '4';
    
    int sonuc = ft_strlcpy(str, str1, sonuc);
    printf("%s", str1);
}