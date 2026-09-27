/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 19:20:39 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/27 19:27:00 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *new_s;	

	i = ft_strlen(s);
	new_s = ft_calloc(strlen + 1, sizeof(char))
	while (i--)
		new_s[i] = f(i, s[i]);
	return (new_s);
}
