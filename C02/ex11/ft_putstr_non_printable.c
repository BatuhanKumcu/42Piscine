/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:26:34 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/28 16:36:50 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
    int    i;

    i = 0;
    while (str[i] != 0)
    {
        if(str[i] >= 32 && str[i] <= 126)
            ft_putchar(str[i]);
        else
        {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[str[i] / 16]);
            ft_putchar("0123456789abcdef"[str[i] % 16]);
        }
        i++;
    }
}

int main(void)
{
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
