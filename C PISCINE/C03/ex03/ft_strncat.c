/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:39:18 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/23 08:32:34 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
	{
		i1++;
	}
	while (src[i2] != '\0' && i2 < nb)
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}

/*int		main(void)
{
	char			dest[1024];
	char			*src;
	unsigned int a;

	a = 5;
	src = "ni yo tampoco broder";
	strcpy(dest, "no se que pollas es esto");
	ft_strncat(dest, src, a);
	printf("FT_strncat -> %s\n", dest);
	memset(dest, 0, sizeof(dest));
	strcpy(dest, "no se que pollas es esto");
	strncat(dest, src, a);
	printf("Strncat -> %s\n", dest);
	return (0);
}*/