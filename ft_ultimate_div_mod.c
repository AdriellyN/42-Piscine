/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-nasc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:05:54 by ado-nasc          #+#    #+#             */
/*   Updated: 2024/08/29 20:34:08 by ado-nasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	var;

	var = *a;
	*a = var / *b;
	*b = var % *b;
}
/*      
int main ()
{
     int w;
     w = 5;

     int z;
     z = 2;

     ft_ultimate_div_mod(&w, &z);
     printf("Div=%d,Mod = %d \n", w, z);
     return (0);
} */
