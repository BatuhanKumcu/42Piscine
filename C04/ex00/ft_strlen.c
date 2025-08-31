/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:35:15 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/30 17:40:29 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] !=0)
		i++;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "selam123";

	printf("%d", ft_strlen(str));
	
}
