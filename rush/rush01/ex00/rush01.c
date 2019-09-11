/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:24:43 by bfontain          #+#    #+#             */
/*   Updated: 2019/09/04 01:16:05 by bfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fl_lines(int x, int line)
{
	int i;

	i = 1;
	while (i <= x - 1)
	{
		i++;
		if (i == x && x != 1)
		{
			if (line == 1)
			{
				write(1, "A", 1);
			}
			else
			{
				write(1, "C", 1);
			}
		}
		else
		{
			write(1, "*", 1);
		}
	}
	write(1, "\n", 1);
}

void	mid_lines(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j <= y - 2)
	{
		i = 1;
		write(1, "*", 1);
		while (i <= x - 2)
		{
			write(1, " ", 1);
			i++;
		}
		if (x > 1)
		{
			write(1, "*", 1);
		}
		j++;
		write(1, "\n", 1);
	}
}
