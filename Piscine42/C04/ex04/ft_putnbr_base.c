/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarroub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:22:08 by jarroub           #+#    #+#             */
/*   Updated: 2023/08/06 20:22:11 by jarroub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	cas_erreur(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		taille_base;
	int		i;
	int		j[10000];
	long	nb;

	nb = nbr;
	taille_base = 0;
	i = 0;
	if (cas_erreur(base))
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		while (base[taille_base])
			taille_base++;
		while (nb)
		{
			j[i++] = nb % taille_base;
			nb = nb / taille_base;
		}
		while (--i >= 0)
			ft_putchar(base[j[i]]);
	}
}
/*int main()
{
	char b[] = "0123456789abcdef";
	long int nbr = -2147483648;
	ft_putnbr_base(nbr, b);
	return 0;
}*/
