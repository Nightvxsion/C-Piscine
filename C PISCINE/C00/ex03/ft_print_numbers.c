/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:34:22 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/14 09:40:07 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		write(1, &x, 1);
		x++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
// ES:
// 1. Como en el anterior, creamos una variable char llamado como quieras, al inicializar la variable ponemos entre COMILLAS SIMPLES el número por que estamos indicando
// que pasamos el caracter a numero (ASCII).
// 2. Establecemos que el bucle, x sea MENOR o igual que el número 9 (se cumple siempre)
// 3. Dentro del bucle, imprimimos con write el número y el siguiente.
// EN:
// 1. As the previous, we're going to create a variable type char (called however you want), when you inicialize the variable we're gonna put between SIMPLE QUOTES
// the number, because we're passing that character to a number (in ASCII)
// 2. We stablish the loop as below, x is going to be LESS or equal than number 9 (is always true)
// 3. Inside the loop, we print the number and the next one with write
