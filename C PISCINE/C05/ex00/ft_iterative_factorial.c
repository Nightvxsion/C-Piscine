/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:11:05 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/27 16:01:08 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	int	a;

	a = 0;
	printf("Resultado del factorial -> %d\n", ft_iterative_factorial(5));
}*/
