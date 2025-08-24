/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batu <batu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:02:19 by batu              #+#    #+#             */
/*   Updated: 2025/08/18 16:08:15 by batu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "ceeeyda";
	ft_strlen(str);
	printf("%d\n", ft_strlen(str));
	return (0);
}