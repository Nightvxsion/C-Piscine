/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:59:48 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/15 09:57:48 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int     main(void)
{
	ft_putchar('c');
	return (0);
}*/

// ES: Este proyecto lo que hace es DETECTAR los caracteres pasados en el "main"
// con "write" lo que haces es que IMPRIMA en la terminal (1, entrada estandar), luego que imprima el caracter (&c) con un byte de tamaño (1).
// EN: This proyect what'll do is DETECT the characters expressed on the "main" parte
// with the function "write" it'll PRINT on the terminal (1, standard output), then print the character mentioned (&c) with a single byte of size (1).
