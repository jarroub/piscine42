/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarroub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:12:25 by jarroub           #+#    #+#             */
/*   Updated: 2023/08/03 13:12:29 by jarroub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	tempo;
	int	j;

	i = 0;
	a = 0;
	while (a < size)
	{	
		while (i < size)
		{
			j = i + 1;
			if (tab[i] > tab[j])
			{
				tempo = tab[j];
				tab[j] = tab[i];
				tab[i] = tempo;
			}
			i++;
		}
		i = 0;
		j = 0;
		a++;
	}
}
