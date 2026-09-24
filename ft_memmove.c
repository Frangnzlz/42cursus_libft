/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:21:37 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/24 20:44:53 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ndest;
	unsigned const char	*nsrc;

	i = 0;
	ndest = (unsigned char *)dest;
	nsrc = (unsigned const char *)src;
	if (!(ndest && nsrc))
		return (dest);
	if (ndest < nsrc)
	{
		while (i < n)
		{
			ndest[i] = nsrc[i];
			i++;
		}
	}
	else
	{
		while (n--)
			ndest[n] = nsrc[n];
	}
	return (ndest);
}
