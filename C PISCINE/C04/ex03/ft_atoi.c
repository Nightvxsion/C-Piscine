/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:17:30 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/26 16:56:19 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	sign;
	int	resultado;

	a = 0;
	sign = 1;
	resultado = 0;
	while (str[a] == ' ' || (str[a] >= '\t' && str[a] <= '\r'))
	{
		a++;
	}
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
		{
			sign *= -1;
		}
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		resultado = resultado * 10 + (str[a] - '0');
		a++;
	}
	return (resultado * sign);
}

/*#include <stdio.h>
int	main(void)
{
	char	cosa1[] = "\t\n\v\f\r putas";
	char	cosa2[] = "--+-2a212";

	printf("Resultado 1 -> %d\n", ft_atoi(cosa1));
	printf("Resultado 2 -> %d\n", ft_atoi(cosa2));
}*/
