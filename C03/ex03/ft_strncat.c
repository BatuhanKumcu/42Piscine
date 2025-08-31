/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 13:28:23 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/29 13:34:41 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	b;
	unsigned int	a;
	
	b = 0;
	a = 0;
	while (dest[b] != 0)
		b++;
	while (a < nb && src[a] != 0)
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = 0;
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "merha";
	char	dest[] = "selam";
	unsigned int	i = 4;

	printf("%s", ft_strncat(src, dest, i));
}