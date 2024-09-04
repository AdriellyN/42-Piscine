/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-nasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:49:32 by ado-nasc          #+#    #+#             */
/*   Updated: 2024/08/29 20:38:15 by ado-nasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				aux = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = aux;
			}
			j++;
		}
		i++;
	}
}
/*
int	main()
{
	int array[] = {7, 5, 5, 8, 4, 6, 3, 1, 9};
	int size;

	size = 9;

	ft_sort_int_tab(array, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}*/
