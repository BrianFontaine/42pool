/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 14:44:40 by bfontain          #+#    #+#             */
/*   Updated: 2019/09/02 13:21:29 by bfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	affiche_nb(int nb)
{
	int i;

	if (nb < 10)
		write(1, "0", 1);
	else
	{
		i = nb / 10 + 48;
		write(1, &i, 1);
	}
	i = nb % 10 + 48;
	write(1, &i, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			affiche_nb(a);
			write(1, " ", 1);
			affiche_nb(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
		b = a + 1;
	}
}
