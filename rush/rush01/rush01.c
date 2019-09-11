/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 02:24:03 by bfontain          #+#    #+#             */
/*   Updated: 2019/09/01 04:03:03 by bfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_horizontal(int x, char left, char middle, char right)
{
	if (x-- >= 1)
	{
		ft_putchar(left);
		while (x-- >= 2)
			ft_putchar(middle);
		if (x == 0)
			ft_putchar(right);
		ft_putchar('\n');
	}
}

void	print_vertical(int x, int y, char wall)
{
	int i;

	while (y-- > 2)
	{
		ft_putchar(wall);
		i = 2;
		while (x > i++)
			ft_putchar(' ');
		ft_putchar(wall);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
		print_horizontal(x, 'o', '-', 'o');
	print_vertical(x, y, '|');
	if (y >= 2)
		print_horizontal(x, 'o', '-', 'o');
}

int		main(void)
{
		rush(5, 3);
			return (0);
}
