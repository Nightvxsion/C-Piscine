/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:32:33 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/26 16:45:35 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar (*(str + i));
		i++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "Chuquillo majonero";

	printf("String -> %s\n", str);
	return (0);
}*/
