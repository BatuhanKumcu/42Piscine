/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batu <batu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:46:08 by batu              #+#    #+#             */
/*   Updated: 2025/08/31 19:15:10 by batu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int	i;
	int	a;
	int	nb;

	nb = 0;
	a = 1;
	i = 0;
	while (str[i] != 0 && (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'))
		i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				a *= -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			nb = (str[i] - '0') + (nb * 10);
			i++;
		}
	return (nb * a);
}

#include <stdio.h>

int	main (void)
{
	char	str[] = "---+- \\t-+1234ab567";
	printf("%d", ft_atoi(str));
}


/* olay sayı dizisinden önce gelen herhangi bir + ve - işaretçilerini toplar ve buradaki eksi sayısının tek veya çift olmasına göre
bizim alacağımız sayı dizisinin başına bir işaret verir. sonrasında gelen herhangi sayıları yazdırmaya başlarız ve her bir karakterde
rakam harici bir karakter ile karşılaştığımıza bakarız. eğer herhangi bir karakter ile karşılaşılırsa return verilir. string rakam ile 
biterse normal return verilir. return olarak int vericez yani - ve +nın carpılabiliyor olması lazım. str olarak değil toplam modifiye
edilemez bir integer olarak düşünülmeli. yani biz bunu "-+--23" olarak verdiğiimiz elimize gerçek bir -23 sayısı geçmeli
atoide olay strnin bir integera dönüştürülmesidir yani print cekmemize gerek yok bir değişime maruz kalmayacak göndereceğimiz dizin.
fonksiyon kendi başına integer oluşturup onu bize geri yollamalı.*/