/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarroub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:17:39 by jarroub           #+#    #+#             */
/*   Updated: 2023/08/06 20:17:42 by jarroub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	j;
	int	sign;
	int	nb;

	nb = 0;
	sign = 0;
	j = 0;
	while (str[j] == ' ' || (str[j] >= '\t' && str[j] <= '\r'))
		j++;
	while (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			sign++;
		j++;
	}
	while (str[j] && str[j] >= '0' && str[j] <= '9')
	{	
		nb = nb * 10 + str[j] - '0';
		j++;
	}
	if (sign % 2 == 0)
		return (nb);
	else
		return (-nb);
}
/*#include <stdio.h>
int main ()
{
	char *str = "       -+++-1524sdf456";
	printf("%d", ft_atoi(str));
}*/
