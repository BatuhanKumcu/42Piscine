/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batu <batu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:09:31 by batu              #+#    #+#             */
/*   Updated: 2025/09/30 21:54:10 by batu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start <= size / 2) // sizeın yarısından küçük olacağı kadar swap yapılır cünkü o kadar yeterli
	{
		ft_swap(&tab[start], &tab[end]);
		start++; //başı sona doğru getiriyoruz
		end--; //sonu başa doğru
	}
}

#include <stdio.h>


int	main(void)
{
	int	s;
	int	t[]= {1, 2, 3, 4, 5, 6};
	int	i;

	i = 0;
	s = 6;

	printf("Original Array = ");

	while (i <= (s - 1))
	{
		printf("%d", t[i]);
		i++;
	}

	printf("\nReversed Array = ");
	ft_rev_int_tab(t, s);
	i = 0;
	while (i < s)
	{
		printf("%d, ", t[i]);
		i++;
	}
	return (0);
}
