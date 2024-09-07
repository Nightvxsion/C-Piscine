/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 09:55:43 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/20 08:58:54 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 20;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("Division: %d\n", div);
	printf("Resto (modulo): %d\n", mod);
	return (0);
}*/
