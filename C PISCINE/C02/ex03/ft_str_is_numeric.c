/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:08:11 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/22 08:51:56 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_str_is_numeric("51"));
	printf("%d\n", ft_str_is_numeric("s1"));
	printf("%d\n", ft_str_is_numeric("¿?¿?¿"));
	return (0);
}*/
