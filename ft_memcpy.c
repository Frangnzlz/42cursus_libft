/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:21:37 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/24 20:42:08 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ndest;
	unsigned const char	*nsrc;

	i = 0;
	ndest = (unsigned char *)dest;
	nsrc = (unsigned const char *)src;
	if (!(ndest && nsrc))
		return (dest);
	while (i < n)
	{
		ndest[i] = nsrc[i];
		i++;
	}
	return (ndest);
}
