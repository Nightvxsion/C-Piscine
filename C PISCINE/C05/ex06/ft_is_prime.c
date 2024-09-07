/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 01:22:44 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/28 01:47:19 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 3 == 0 || nb % 2 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	int	prime;

	prime = 1;
	printf("%d es primo? -> %d\n", prime, ft_is_prime(prime));
	prime = 11;
	printf("%d es primo? -> %d\n", prime, ft_is_prime(prime));
	prime = 77;
	printf("%d es primo? -> %d\n", prime, ft_is_prime(prime));
}*/
