/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:44:07 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/24 20:44:43 by frgonzal         ###   ########.fr       */
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
		if (s[i] == c)
			last_index = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (!last_index)
		return (NULL);
	return ((char *)&s[last_index]);
}
