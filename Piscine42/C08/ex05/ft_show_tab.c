/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarroub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:46:54 by jarroub           #+#    #+#             */
/*   Updated: 2023/08/24 15:46:55 by jarroub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb)
{
	long int	nbr;
	char		c;

	nbr = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nb >= 0 && nb <= 9)
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
/*int main()
{
	struct s_stock_str *par;
	char *str[] = {"Salut la compagnie", "Hola guapos", "Hello guys"};
	par = ft_strs_to_tab(3, str);
	ft_show_tab(par);
	return 0;
}*/
