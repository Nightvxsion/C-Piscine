/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:24:23 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/22 08:40:36 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[1024]= "";
	char	*src;
	unsigned int	size;

	size = 12;
	src = "mecagoencristo";
	ft_strncpy(dest, src, size);
	printf("FT_strncpy -> %s\n", dest);
	memset(dest, 0, sizeof(dest));
	strncpy(dest, src, size);
	printf("Strncpy -> %s\n", dest);
	return (0);
}*/
