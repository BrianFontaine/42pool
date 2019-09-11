/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:18:33 by bfontain          #+#    #+#             */
/*   Updated: 2019/09/08 21:27:42 by bfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	result = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb >= 12)
		return (0);
	while (nb - i >= 2)
	{
		result = result * (nb - i);
		i++;
	}
	return (result);
}
