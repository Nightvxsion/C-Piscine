/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:56:37 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/27 21:00:12 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>

int	main(void)
{
	int	index;

	index = 2;
	printf("II sucesion de Fibonacci -> %d\n", ft_fibonacci(index));

	index = 4;
	printf("IV sucesion de Fibonacci -> %d\n", ft_fibonacci(index));

	index = 5;
	printf("V sucesion de Fibonacci -> %d\n", ft_fibonacci(index));
}*/
