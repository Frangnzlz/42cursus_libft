/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 18:41:00 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/25 23:45:52 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_count_letters(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s && s[i] && s[i] != c)
		i++;
	return (i);
}

static void	ft_free_split(char **split)
{
	size_t	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	ft_fill_words(char **split, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j - 1] == c || !j)
		{
			split[i] = ft_substr(&s[j], 0, ft_count_letters(&s[j], c));
			if (!split[i])
			{
				ft_free_split(split);
				return (0);
			}
			i++;
		}
		j++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**split;

	split = ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	if (!ft_fill_words(split, s, c))
		return (NULL);
	return (split);
}

int	main(int argc, char **argv)
{
	char	**split;
	int		i;

	split = ft_split(argv[1], ' ');
	i = 0;
	while (split[i])
	{
		printf("%i : %s\n", i, split[i]);
		i++;
	}
	printf("%s", argv[1]);
	return (0);
}
