/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 20:42:36 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/22 21:18:55 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	if (!little)
		return (big);
	while (big[i] && little[j] && i + j < len)
	{
		while (big[i +j] == little[j] && little[j] && i + j < len)
			j++;
		if (!little[j] && str[i])
			return (&str[i]);
		i++;
	}
	return (NULL);
}

