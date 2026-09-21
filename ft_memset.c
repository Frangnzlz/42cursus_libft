/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 16:08:14 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/21 16:29:23 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *ns;

	i = 0;
	ns = (unsigned char*) s;
	if (!ns)
		return (s);
	while (i < n)
	{
		ns[i] = c;
		i++;
	}
	return (s);
}

