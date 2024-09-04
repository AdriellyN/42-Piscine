/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-nasc <ado-nasc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:33:44 by ado-nasc          #+#    #+#             */
/*   Updated: 2024/08/29 20:23:22 by ado-nasc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = (a / b);
		*mod = (a % b);
	}
}
/*
int main()
{
     int x;
     int y;
     int div;
     int mod;    
     x = 5;
     y = 2;

     ft_div_mod(x, y, &div, &mod);
     printf("Div: %d\n", div);
     printf("Mod: %d\n", mod);
}*/
