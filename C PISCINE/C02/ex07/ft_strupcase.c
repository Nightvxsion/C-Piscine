/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:00:37 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/21 09:01:00 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
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

	strcpy(r, "que cojones");
	ft_strupcase(r);
	printf("1er caso -> %s\n", r);
	return (0);
}*/
