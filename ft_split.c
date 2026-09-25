/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 18:41:00 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/25 22:04:09 by frgonzal         ###   ########.fr       */
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
		if (s[i] == c)
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
	s += i;
	return (i);
}
static void ft_free_split(char **split)
{
	size_t i;

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

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (*s)
	{
		if (*s == c)
		{
			*split = ft_substr(s, 1, ft_count_letters(s + 1, c));
			if (!*split)
			{
				ft_free_split(split);
				return (NULL);
			}
			split++;	
		}
		s++;
	}
	*split = NULL;
	return (split);
}

int main(int argc, char **argv)
{
	char **split = ft_split(argv[1], ' ');
	int i = 0;
	while (i < 3)
	{
		printf("%i : %s\n",i,  split[i]);
		i++;
	}
	return 0;
}






