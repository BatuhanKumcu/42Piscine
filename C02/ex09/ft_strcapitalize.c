/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankumcu <batuhankumcu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:33:07 by batuhankumc       #+#    #+#             */
/*   Updated: 2025/08/28 13:43:49 by batuhankumc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (str[c] != 0)
	{
		if (i == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] = str[c] - 32;
			i++;
		}
		else if (i > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] = str[c] + 32;
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A') 
                    || (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}

#include <stdio.h>

int main(void)
{
    char    str[] = "selma arkdas 1 2 lers";
    
    printf("%s", ft_strcapitalize(str));
}
