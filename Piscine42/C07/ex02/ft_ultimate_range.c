/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarroub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:29:52 by jarroub           #+#    #+#             */
/*   Updated: 2023/08/14 10:29:53 by jarroub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;
	int	nbr_lmnt;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	nbr_lmnt = max - min;
	tab = (int *)malloc(sizeof(int) * nbr_lmnt);
	if (tab == NULL)
		return (-1);
	while (i < nbr_lmnt)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
/*int	main()
{
	int min = -1;
	int max = 3;
	int *range;
	ft_ultimate_range(&range, min, max);
}*/
