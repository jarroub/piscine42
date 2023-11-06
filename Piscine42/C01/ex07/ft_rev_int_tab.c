/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarroub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:59:39 by jarroub           #+#    #+#             */
/*   Updated: 2023/08/03 12:59:41 by jarroub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tempo;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		tempo = tab[i];
		tab[i] = tab[size];
		tab[size] = tempo;
		i++;
		size--;
	}
}
