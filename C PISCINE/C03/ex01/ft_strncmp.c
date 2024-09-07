/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:44:47 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/23 08:30:45 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return ((unsigned char)s1[a] - (unsigned char)s2[a]);
		}
		a++;
	}
	if (a < n)
	{
		return ((unsigned char)s1[a] - (unsigned char)s2[a]);
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[50];
	char	str2[50];
	int		i;

	i = 4;
	strcpy(str1, "abcefg");
	strcpy(str2, "absaed");
	printf("FT_strncmp -> %d\n", ft_strncmp(str1, str2, i));
	printf("Strncmp -> %d\n", strncmp(str1, str2, i));
	return (0);
}*/
