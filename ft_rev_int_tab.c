/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-nasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:22:22 by ado-nasc          #+#    #+#             */
/*   Updated: 2024/08/29 18:47:15 by ado-nasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = aux;
		i++;
	}
}
/*
int	main()
{
	int array[] = {1, 2, 3, 4, 5, 6};
	int size;
	size = 6;

	ft_rev_int_tab(array, size);

	for (int i = 0; i < size; i++) 
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}*/
