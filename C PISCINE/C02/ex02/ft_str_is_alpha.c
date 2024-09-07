/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:11:34 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/23 08:28:15 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
	printf("1er caso -> %d\n", ft_str_is_alpha("si"));
	printf("2do caso -> %d\n", ft_str_is_alpha("s1"));
	printf("3er caso -> %d\n", ft_str_is_alpha("¿?¿?¿"));
	return (0);
}*/
