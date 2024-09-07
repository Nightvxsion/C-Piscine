/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:01:19 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/27 16:17:28 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>

int	main(void)
{
	int	i = 9;
	int	resultado = ft_recursive_factorial(i);

	printf("Resultado del factorial de %d es -> %d\n", i, resultado);
	return (0);
}*/
