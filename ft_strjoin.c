/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 20:19:12 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/23 20:33:22 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void ft_filljoin(char *dest, const char *src)
{
	size_t	i;
	size_t	j:
	i = 0;
	j = 0;
	while (dest[j])
		j++
	while (src[i])
	{
		dest[start] = src[i];
		j++;
		i++;
	}
}

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	length;
	char	*join;

	length = ft_strlen(s1) + ft_strlen(s2);
	join = ft_calloc(sizeof(char) * length);
	if (!join)
		return (NULL);
	ft_filljoin(join, s1);	
	ft_filljoin(join, s2);	
	return (join);
}
	
