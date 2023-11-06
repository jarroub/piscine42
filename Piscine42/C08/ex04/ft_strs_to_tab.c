/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarroub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:46:26 by jarroub           #+#    #+#             */
/*   Updated: 2023/08/24 15:46:28 by jarroub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;

	size = ft_strlen(src);
	dup = (char *) malloc((size + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stock;
	int					i;

	i = 0;
	stock = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!stock)
		return (NULL);
	while (i < ac)
	{
		stock[i].str = av[i];
		stock[i].size = ft_strlen(stock[i].str);
		stock[i].copy = ft_strdup(stock[i].str);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
