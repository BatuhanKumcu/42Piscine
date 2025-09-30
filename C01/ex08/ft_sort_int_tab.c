/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batu <batu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:58:07 by batu              #+#    #+#             */
/*   Updated: 2025/09/30 21:56:11 by batu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;	
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	b = 0;
	while (b < size - 1)
	{
		a = 0;
		while (a < size - 1) // iki kere kontrol sebebi a her seferinde diziyi baştan
		{						// kontrol etmek zorunda çünkü en sağdaki sayı küçükse sola çekilmeli
			if (tab[a] > tab[a + 1])
			{
				ft_swap(&tab[a], &tab[a + 1]); // sağdaki sayı daha küçükse sol ile swapla
			}
			a++;
		}
		b++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {1,2,41,46,23,51,4,3};
	int	size = 8;
	ft_sort_int_tab(tab,size);
	int	i;
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]); //arrayi yazdırmanın en kolay yolu bütün farklı değerleri berbaer yazdıramayız normalde
		i++;
	}
}