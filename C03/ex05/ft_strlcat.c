/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 12:59:59 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/30 13:36:01 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int a;

	i = 0;
	a = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[a] != 0 && a < size)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = 0;
	return (size);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "selam";
	char	str1[] = "selamlar";
	int	i = 2;
	ft_strlcat(str1, str, i);
	
	printf("%s", str1);
}
