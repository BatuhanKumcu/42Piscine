/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batu <batu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:13:24 by batu              #+#    #+#             */
/*   Updated: 2025/08/06 23:27:56 by batu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c ;

	c = 'z';
	while (c => 'z')
	{
		write(1, &c, 1);
		c--;
	}
}

int main(void){
    ft_print_alphabet();
    return(0);
}
