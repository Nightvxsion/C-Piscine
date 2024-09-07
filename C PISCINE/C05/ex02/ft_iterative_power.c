/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:27:55 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/27 21:02:16 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	j;
	int	result;

	j = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (j < power)
	{
		result *= nb;
		j++;
	}
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	int	b;
	int	power;
	
	power = 3;
	b = 2;
	printf("Potencia de %d^%d es -> %d\n", ft_iterative_power(b, power));
	return (0);
}*/
