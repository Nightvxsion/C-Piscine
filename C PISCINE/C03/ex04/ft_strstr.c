/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:18:16 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/23 11:36:17 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	s;

	a = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[a] != '\0')
	{
		s = 0;
		while (str[a + s] != '\0' && str[a + s] == to_find[s])
		{
			s++;
			if (to_find[s] == '\0')
			{
				return (&str[a]);
			}
		}
		a++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str;
	char	*to_find;

	str = "Que cojones";
	to_find = "Que";
	printf("Resultado real -> %s\n", ft_strstr(str, to_find));
	printf("Found -> %s\n", strstr(str, to_find));
}*/
