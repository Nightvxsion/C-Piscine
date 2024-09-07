/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:44:30 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/15 10:10:56 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a)
{
	char	c;

	c = a + 48;
	write(1, &c, 1);
}

void	ft_putnbr(int a)
{
	if (a == -2147483648)
	{
		write(1, "2147483648", 11);
	}
	else
	{
		if (a < 0)
		{
			ft_putchar('-');
			a = -a;
		}
		if (a >= 10)
		{
			ft_putchar(a / 10);
			ft_putchar(a % 10);
		}
		else
		{
			ft_putchar(a + 48);
		}
	}
}

/*int	main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	return (0);
}*/
