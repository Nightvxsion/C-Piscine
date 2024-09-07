/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:04:06 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/28 01:21:44 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	int	num;

	num = 16;
	printf("Square root of %d is -> %d\n", num, ft_sqrt(num));

	num = 4;
	printf("Square root of %d is -> %d\n", num, ft_sqrt(num));

	num = 1764;
	printf("Square root of %d is -> %d\n", num, ft_sqrt(num));
}*/
