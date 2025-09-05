/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batu <batu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 21:51:52 by batu              #+#    #+#             */
/*   Updated: 2025/09/04 22:21:29 by batu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	ft_strlen(char	*src)
{
	int	i;

	i = 0;
	while (*src++)
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char	*yeni;
	int	i;

	i = 0;
	if (!(yeni = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return NULL;
	while(*src != 0)
		yeni[i++] = *src++;
	yeni[i] = '\0';
	return (yeni);
}

#include <stdio.h>

int	main(int	argc, char	**argv)
{
	char	*orj;
	char	*deneme;

	if (argc == 2)
	{
		deneme = strdup(argv[1]);
		orj = ft_strdup(argv[1]);
		printf(":%s:\n", orj);
		printf(":%s:", deneme);
	}
	return (0);
}
