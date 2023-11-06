/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarroub <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 22:30:36 by jarroub           #+#    #+#             */
/*   Updated: 2023/08/14 22:30:39 by jarroub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	find_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	else
		return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (find_sep(str[i], charset) == 0
			&& find_sep(str[i + 1], charset) == 1)
			count++;
		i++;
	}
	return (count);
}

void	print_word(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (src[i] && find_sep(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	print_split(char **split, char *str, char *charset)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (find_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (find_sep(str[i + j], charset) == 0)
				j++;
			split[count] = (char *)malloc(sizeof(char) * (j + 1));
			print_word(split[count], &str[i], charset);
			i = i + j;
			count++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		count;

	count = word_count(str, charset);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	split[count] = 0;
	print_split(split, str, charset);
	return (split);
}
/*int main()
{
	char str[] = "164984a1668b465cc46484d468    ";
	char charset[] = "abcd ";
	int i;
	int j = 0;
	char **split = ft_split(str, charset);
	i = word_count(str, charset);
	while (j < i)
	{
		printf("%s\n", split[j]);
		j++;
	}
}*/
