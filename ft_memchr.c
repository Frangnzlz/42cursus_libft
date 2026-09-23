/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 19:59:46 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/22 20:09:38 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ns;

	ns = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ns[i] == c)
			return (&ns[i]);
		i++;
	}
	return (NULL);
}
