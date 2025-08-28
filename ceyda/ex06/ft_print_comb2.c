/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 18:12:59 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/26 18:32:37 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
    char    a;
    char    b;
    char    x;
    char    y;

    a = '0';
    b = '0';
    x = '0';
    while (a <= '9')
    {
        while (b <= '9')
        {
            while (x <= '9')
            {
                y = x + 1;
                while (y <= '9')
                {
                    if (b == '9')
                    {
                        b = '0';
                        a++;
                    }
                    if (x == '9' || y == '9')
                        b++;
                    write(1, &a, 1);
                    write(1, &b, 1);
                    write(1, &x, 1);
                    write(1, &y, 1);
                    y++;
                }
                x++;
            }
        }
    }
}

int main(void)
{
    ft_print_comb2();
}