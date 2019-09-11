/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruch02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 13:40:54 by bfontain          #+#    #+#             */
/*   Updated: 2019/09/01 19:40:13 by bfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void	ft_firstline(int x)
{
	int i;

	i = 1;
	
	ft_putchar ('A');
	while (i <= x - 2)
	{
		ft_putchar ('B');
		i++;
		if (i == x - 1 )
		{ 
			ft_putchar ('A');
		}
	}
	ft_putchar('\n');
}
void	fl_middle_lines(int y ,int x)
{
	int j;
	int i;

	i = 1;
	j = 1;
		
	while ( i <= x - 2) 
	{	
		i++;
		ft_putchar('B');

		while (j <= y - 2)
		{
			ft_putchar(' ');
			j ++;	
		}
		if (j == y - 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		j = 1;
	}
}
void	ft_lastline(int x)
{
	int i;
	i = 1;
		
	ft_putchar('C');
	while (i <= x - 2)
	{
		ft_putchar('B');
		i++;
		if (i == x - 1 )
		{
			ft_putchar('C');
		}
	}
	ft_putchar('\n');
}
void rush (int x, int y)
{
	if (y > 1)
	{
	ft_firstline(x);
	}
	if ( y > 2 )
	{
	ft_lastline(x);
	}
	fl_middle_lines(x ,y);
}
