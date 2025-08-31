/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 12:51:41 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/29 13:20:07 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int a;

	i = 0;
	a = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[a] != 0)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = 0;
	return (dest);
}

/*olay : desti ileri ittiricen ki srcnin sonuna ekleme olarak yazılsın */

#include <stdio.h>

int	main(void)
{
	char	src[] = "selma";
	char	dest[] = "merha";
	printf("%s", ft_strcat(src, dest));
}