/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:42:08 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/27 11:03:22 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
        if (src[n] == 0)
            return(dest);
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	dest[] = "selam";
	char	src[] = "Merhaba";
	int	n = 3;

	printf("Before: dest = %s, src = %s\n", dest, src);
	ft_strncpy(dest, src, n);
	printf("After: dest = %s, src = %s", dest, src);
}
