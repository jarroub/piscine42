/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarroub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:08:39 by jarroub           #+#    #+#             */
/*   Updated: 2023/08/10 13:08:41 by jarroub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hexa(int nb)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb > 16)
	{
		print_hexa(nb / 16);
		print_hexa(nb % 16);
	}
	else
		write(1, &hex[nb], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			print_hexa(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*int main()
{
	char a[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(a);
}*/
