/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:00:04 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/22 09:00:13 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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
	printf("1er caso -> %d\n", ft_str_is_uppercase("aa"));
	printf("2do caso -> %d\n", ft_str_is_uppercase("AA"));
	printf("3er caso -> %d\n", ft_str_is_uppercase("Aa"));
	return (0);
}*/
