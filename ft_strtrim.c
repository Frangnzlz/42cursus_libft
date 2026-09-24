/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 19:01:39 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/24 20:52:27 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_count_valid_char(char const *s1, char const *set)
{
	size_t	size;
	int		i;

	i = 0;
	size = 0;
	while (s1[i])
	{
		if (!ft_is_set(s1[i], set))
			size++;
		i++;
	}
	return (size);
}

static int	ft_is_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set && set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	size;

	size = ft_count_valid_char(s1, set);
	trimmed = ft_calloc(size + 1, sizeof(char));
	if (!trimmed)
		return (NULL);
	while (s1[i])
	{
		if (!ft_is_set(s1[i], set))
			trimmed = s1[i];
		i++;
	}
	return (trimmed);
}
