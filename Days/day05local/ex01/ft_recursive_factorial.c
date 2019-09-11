/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 21:22:39 by bfontain          #+#    #+#             */
/*   Updated: 2019/09/09 01:12:47 by bfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recurcive_factorial(int nb)
{
	int result;

	result = nb;
	if (nb == 0 || nb == 1)
		return (1);
	result = result * ft_recurcive_factorial(nb - 1);
	return (result);
}
