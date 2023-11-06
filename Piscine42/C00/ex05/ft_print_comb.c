/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarroub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:55:34 by jarroub           #+#    #+#             */
/*   Updated: 2023/08/02 16:55:39 by jarroub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int a, int b, int c)
{
	char	x;
	char	y;
	char	z;

	x = a + '0';
	y = b + '0';
	z = c + '0';
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				ft_print(a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
					c++;
			}
			c = ++b + 1;
		}
		b = ++a;
	}
}
