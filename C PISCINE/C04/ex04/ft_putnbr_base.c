/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 08:52:06 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/27 12:40:48 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[i] || !base[i + 1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	length;

	if (!ft_check_base(base))
		return ;
	length = 0;
	while (base[length])
		length++;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(-(nbr / length), base);
		ft_putchar(base[-(nbr % length)]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= length)
		ft_putnbr_base(nbr / length, base);
	ft_putchar(base[nbr % length]);
}

/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(6969, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(69, "01");
	ft_putchar('\n');
	ft_putnbr_base(42, "01234567");
	ft_putchar('\n');
	return (0);
}*/
