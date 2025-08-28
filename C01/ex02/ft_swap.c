/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:30:14 by batu              #+#    #+#             */
/*   Updated: 2025/08/28 13:00:26 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	a = 42;
	b = 21;
	ft_swap(&a, &b);
	printf("before a = 42 / after a = %d\n", a);
	printf("before b = 21 / after b = %d\n", b);
}