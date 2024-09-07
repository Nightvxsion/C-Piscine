/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 08:45:11 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/21 09:02:58 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[30] = "holaaaaa";
	char	dest[30];

	ft_strcpy(dest, src);
	printf("Source = %s\n", src);
	printf("Destination = %s\n", dest);
	return (0);
}*/
