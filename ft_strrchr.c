/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:44:07 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/28 18:49:38 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_index;

	i = 0;
	last_index = 0;
	while (s[i])
	{
		if (s[i] == (const unsigned char)c)
			last_index = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (!last_index && s[last_index] != (const unsigned char)c)
		return (NULL);
	return ((char *)&s[last_index]);
}
