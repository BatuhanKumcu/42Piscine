/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:39:22 by batu              #+#    #+#             */
/*   Updated: 2025/08/28 13:57:18 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int *div = &a;
	int *mod = &b;

	a = 27;
	b = 5;
	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d\n", *mod);
	return (0);
}
