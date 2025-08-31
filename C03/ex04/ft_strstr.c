/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:35:18 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/30 12:59:46 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/* olay strde bir dizi vericeksin sonra to find o diziyi tarayacak ve ilk bulduğu konumdan itibaren
kendini yazdırmaya başlayacak*/

#include <stdio.h>

int	main (void)
{
	char	str[20] = "selam";
	char	to_find[20] = "lam Calisiyor";
	printf("%s\n", str);
}
