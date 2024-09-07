/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:51:34 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/22 09:07:14 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
	printf("1er caso -> %d\n", ft_str_is_lowercase("Aa"));
	printf("2do caso -> %d\n", ft_str_is_lowercase("AA"));
	printf("3er caso -> %d\n", ft_str_is_lowercase("aa"));
	return (0);
}*/
