/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-nasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:28:10 by ado-nasc          #+#    #+#             */
/*   Updated: 2024/08/29 20:27:06 by ado-nasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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
int     main()
{      
        int	length;
	char	str[16] =  "Hello World!";

	length = ft_strlen(str);

	printf("Quantidade de caracteres: %d\n", length);
	return (0);
}*/
