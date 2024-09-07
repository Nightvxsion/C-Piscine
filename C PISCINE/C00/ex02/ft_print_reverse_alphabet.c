/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:12:50 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/15 09:58:06 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		write(1, &z, 1);
		z--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
// ES:
// 1. Es lo mismo que el ejercicio anterior solo que en el bucle tipo while, decimos que z (con la letra z) sea MAYOR o igual que el caracter a
// 2. En vez de que imprima el caracter de delante, decimos que imprima hacia atrás (z--).
// EN:
// 1. It's the same exercise as the previous but here in the loop, we say that the variable z (with the letter z) it's oging to be GREATER or equal than the letter a
// 2. Inside the loop, instead of print the next letter, we're going to print backwards (z--).
