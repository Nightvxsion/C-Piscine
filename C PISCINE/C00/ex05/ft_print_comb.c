/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:21:52 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/14 11:46:07 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	i1;
	int	i2;
	int	i3;

	i1 = '0';
	while (i1 <= '7')
	{
		i2 = i1 + 1;
		while (i2 <= '9')
		{
			i3 = i2 + 1;
			while (i3 <= '9')
			{
				write(1, &i1, 1);
				write(1, &i2, 1);
				write(1, &i3, 1);
				if (i1 != '7' || i2 != '8' || i3 != '9')
					write(1, ", ", 2);
				i3++;
			}
			i2++;
		}
		i1++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
// ES:
// 1. Este ya es un poco mas complejo ya que hay que jugar 
