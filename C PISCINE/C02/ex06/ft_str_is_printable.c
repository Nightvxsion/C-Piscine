/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:08:07 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/22 09:05:48 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
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
	printf("1er caso -> %d\n", ft_str_is_printable("a a"));
	printf("2do caso -> %d\n", ft_str_is_printable("\0"));
	printf("3er caso -> %d\n", ft_str_is_printable("()//!"));
	printf("4to caso -> %d\n", ft_str_is_printable("\t\n"));
	return (0);
}*/
