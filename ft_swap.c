/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-nasc <ado-nasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:10:20 by ado-nasc          #+#    #+#             */
/*   Updated: 2024/08/29 20:24:50 by ado-nasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	var;

	var = *a;
	*a = *b;
	*b = var;
}
/*	
int main ()
{
     int x;
     x = 5;

     int y;
     y = 10;

     printf("Antes: x=%d, y = %d \n", x, y);
     ft_swap(&x, &y);
     printf("Antes: x=%d, y = %d \n", x, y);
     return (0);
}*/
