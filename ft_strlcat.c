/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:23:38 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/24 18:27:39 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	leng_dst;
	size_t	leng_src;
	size_t	i;

	leng_dst = ft_strlen(dst);
	leng_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (leng_src);
	if (leng_dst >= size)
		return (size + leng_src);
	while (leng_dst + i < size - 1)
	{
		dst[leng_dst + i] = src[i];
		i++;
	}
	dst[leng_dst + i] = '\0';
	return (leng_dst + leng_src);
}
