/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recurcive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 03:15:19 by bfontain          #+#    #+#             */
/*   Updated: 2019/09/09 03:24:40 by bfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recurcive_power(int	nb, int power)
{
	int result;

	result = nb ;
	if (power > 1)
	{
		result = result * ft_recurcive_power(nb , powwer -1);
	}
	return (result);
}
