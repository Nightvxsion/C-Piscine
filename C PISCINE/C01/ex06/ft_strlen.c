/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:28:00 by marcgar2          #+#    #+#             */
/*   Updated: 2024/08/20 09:30:48 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[70];
	int	i;

	strcpy(str, "me cago en los muertos de internet");
	i = ft_strlen(str);
	//Almacena los datos de str en i para que cuente los caracteres
	printf("Caracteres del string = %d\n", i);
	printf("Frase con texto = %s\n", str);
	return (0);
}*/
