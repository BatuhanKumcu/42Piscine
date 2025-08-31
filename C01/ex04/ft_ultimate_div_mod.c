/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 16:28:25 by batu              #+#    #+#             */
/*   Updated: 2025/08/28 14:37:58 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
	int tempdiv;
	int tempmod;
	
	tempdiv = *a / *b;
	tempmod = *a % *b;
	*a = tempdiv;
	*b = tempmod;
}
#include <stdio.h>

int	main(void)
{
	int	a = 26;
	int	b = 3;
	int	*x = &a;
	int	*y = &b;

	ft_ultimate_div_mod(x, y);
	printf("%d\n", *x);
	printf("%d\n", *y);
	return(0);
}