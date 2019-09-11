/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 23:29:51 by bfontain          #+#    #+#             */
/*   Updated: 2019/09/08 23:37:58 by bfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	while ( i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
int main()
{
	printf("%d" , ft_iterative_power(0 , 0));

}
