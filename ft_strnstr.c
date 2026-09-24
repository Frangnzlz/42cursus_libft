/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/22 20:42:36 by username         #+#    #+#              */
/*   Updated: 2026/09/24 20:43:11 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i] && little[j] && i + j < len)
	{
		while (big[i + j] == little[j] && little[j] && i + j < len)
			j++;
		if (!little[j] && big[i])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
