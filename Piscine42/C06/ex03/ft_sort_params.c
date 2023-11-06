/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarroub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 21:14:09 by jarroub           #+#    #+#             */
/*   Updated: 2023/08/09 21:14:11 by jarroub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int argc, char *argv[])
{
	int		i;
	int		a;
	int		j;
	char	*tempo;

	i = 1;
	a = 1;
	while (a < argc - 1)
	{	
		while (i < argc - 1)
		{
			j = i + 1;
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tempo = argv[j];
				argv[j] = argv[i];
				argv[i] = tempo;
			}
			i++;
		}
		i = 1;
		j = 0;
		a++;
	}
}

void	affiche_arg(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	ft_sort(argc, argv);
	affiche_arg(argc, argv);
	return (0);
}
