/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batu <batu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:09:31 by batu              #+#    #+#             */
/*   Updated: 2025/08/18 17:50:14 by batu             ###   ########.fr       */
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
	while (start < size / 2)
	{
		ft_swap(&tab[start], &tab[end]);
		start++;
		end--;
	}
}

#include <stdio.h>

void	putarr(int arr[], int size)
{
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("%d\n", arr[size - 1]);
}

int	main(void)
{
	int	s;
	int	t[]= {1, 2, 3, 4, 5};
	int	i;

	i = 0;
	s = 5;

	printf("Original Array = ");

	while (i <= (s - 1))
	{
		printf("%d", t[i]);
		i++;
	}

	printf("\nReversed Array = ");
	ft_rev_int_tab(t, s);
	putarr(t, s);
	return (0);
}
