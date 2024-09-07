/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:16:58 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/22 16:17:14 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
	{
		i1++;
	}
	while (src[i2] != '\0')
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[50];
	char	*src;

	strcpy(dest, "no puedo mas con mi vida sinceramente");
	src = " sinceramente(x2)";
	printf("FT_strcat -> %s\n", ft_strcat(dest, src));
	printf("Strcat -> %s\n", strcat(dest, src));
	return (0);
}*/
