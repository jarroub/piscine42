/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarroub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:36:59 by jarroub           #+#    #+#             */
/*   Updated: 2023/08/12 12:37:01 by jarroub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	nbr_lmnt_tab;
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	nbr_lmnt_tab = max - min;
	tab = (int *) malloc(nbr_lmnt_tab * sizeof(int));
	while (i < nbr_lmnt_tab)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*int main()
{
	int min = -5;
	int max = -7;
	ft_range(min, max);
}*/
