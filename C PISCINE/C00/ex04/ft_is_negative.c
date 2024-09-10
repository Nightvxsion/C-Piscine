/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:08:20 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/14 09:40:21 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}

/*int	main(void)
{
	ft_is_negative(-1);
	return (0);
}*/
// ES:
// 1. Como siempre, hacemos la función ft_putchar para detectar los caracteres
// 2. Creamos una función llamada ft_is_negative que reciba un "int" en el que establezcamos una condición que si n es MAYOR o igual que 0
// entonces con ft_putchar imprimir "P" (Positivo) si es otro número que NO sea positivo, que imprima "N" (Negativo)
// EN:
// 1. As always, we make the function ft_putchar to detect characters
// 2. We create a function called ft_is_negative that recieves an integer to stablish a condition that if n is GREATER or equal to 0
// then print the letter "P" (Positive) with the function ft_putchar, if it's a NON-positive number, print the letter "N" (Negative) 
