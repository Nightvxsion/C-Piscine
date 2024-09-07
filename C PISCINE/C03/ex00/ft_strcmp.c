/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:36:32 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/22 16:20:34 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "sihefievbejkbbs";
	str2 = "Ahagvsdfgvadfg";
	printf("String #1 -> %d\n", ft_strcmp(str1, str2));
	printf("String #2 -> %d\n", strcmp(str1, str2));
	return (0);
}*/
