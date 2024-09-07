/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 08:52:04 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/21 09:00:21 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	r[15];

	strcpy(r, "QUE COJONES");
	ft_strlowcase(r);
	printf("1er caso -> %s\n", r);
	return (0);
}*/
