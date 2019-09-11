/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 16:31:25 by bfontain          #+#    #+#             */
/*   Updated: 2019/09/01 17:34:38 by bfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c);

void rush(int x, int y)
{
	int i;
	int j;
	i = 1;
	while ( i <= x)
	{
		j = 1;
		while (j <= y)
		{
			if ( i == 1 || i == y || i == 1 || i == x)
			{
				if ( j == 1 && (j == 1 || j == y))
				{
					ft_putchar('A');
				
				}
				else if ( i == 1 && ( j == 1 || j  == y))
				{
					ft_putchar('C');
				}
				else 
				{
					ft_putchar('B');
				}
			}
			else 
			{
				ft_putchar(' ');
			}
			j++;	
		}
		ft_putchar('\n');
		i++;
	}
}
