/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 16:42:16 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/24 20:41:10 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ns;

	i = 0;
	ns = (unsigned char *)s;
	if (!ns)
		return ;
	while (i < n)
	{
		ns[i] = '\0';
		i++;
	}
}
