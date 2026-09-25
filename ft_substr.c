/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 19:48:14 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/25 18:07:00 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;

	sub_s = ft_calloc(len + 1, sizeof(char));
	if (!sub_s)
		return (NULL);
	i = 0;
	while (s && s[start] && i < len)
	{
		sub_s[i] = s[start + (unsigned int)i];
		i++;
	}
	return (sub_s);
}
