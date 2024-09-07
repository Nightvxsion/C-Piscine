/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:08:22 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/20 08:58:32 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	retu;

	retu = *a;
	*a = *b;
	*b = retu;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 1;
	b = 2;
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	printf("a = %d : b = %d\n", a, b);
	ft_swap(ptra, ptrb);
	printf("a = %d : b = %d\n", a, b);
}*/
