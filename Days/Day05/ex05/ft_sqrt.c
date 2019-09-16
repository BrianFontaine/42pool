/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:04:54 by bfontain          #+#    #+#             */
/*   Updated: 2019/09/15 15:58:14 by bfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int result;

	i = 0;
	result = 0;
	if (nb == 0)
		return (0);
	while (result < nb && i < 46340)
	{
		i++;
		result = i * i;
	}
	if (result != nb)
	{
		return (0);
	}
	return (i);
}