/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:23:24 by bfontain          #+#    #+#             */
/*   Updated: 2019/09/11 13:58:44 by bfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_sqrt(int nb)
{
	int result;
	int i;

	result = 0;
	if (nb == 0)
		return (0);
	while (i < nb)
	{
		result = nb * nb;
		i++;
	}
	return (result);
}
int		ft_is_prime(int nb)
{



}
