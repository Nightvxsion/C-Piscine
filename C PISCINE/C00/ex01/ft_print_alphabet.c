/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:16:46 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/14 09:39:19 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, 1);
		a++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
// ES: 
// 1. Tenemos una funcion llamada "ft_print_alphabet" y creamos una variable "char" con el nombre que tu quieras (a), cuya variable inicializada desde 'a'
// 2. Creamos un bucle "while" que haga la condición que 'a' sea menor o igual que 'z' (que se va a cumplir siempre)
// 3. Y con el comando "write" mandamos que imprima la variable a y que imprima también el caracter que tiene al lado (es decir, a, b ,c ...)
// EN:
// 1. We've a function called "ft_print_alphabet" and we create a variable type "char" called however you want (in this case "a"), which variable inicialized on letter 'a'
// 2. We create a loop type "while" that does the condition that says 'a' is less or equal than 'z' (is gonna be done always)
// 3. With the "write" command we're going to print the character that 'a' contains (a), and the character next to that (for example: a, b, c ...)
