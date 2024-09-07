/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:34:40 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/20 08:59:18 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("Division a: %d\n", a);
	printf("Resto (modulo) b: %d\n", b);
	return (0);
}*/
