/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 17:09:48 by bfontain          #+#    #+#             */
/*   Updated: 2019/09/02 11:02:52 by bfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_789(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	c;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_789(c, d, u);
				if (c != '7' || d != '8' || u != '9')
				{
					write(1, ", ", 2);
				}
				u++;
			}
			d++;
		}
		c++;
	}
}
