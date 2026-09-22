/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 18:44:07 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/22 19:24:27 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int last_index;

	i = 0;
	last_index = 0;
	while (s[i])
	{
		if (s[i] == c)
			last_index = i;
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	if (!last_index)
		return (NULL);
	return (&s[last_index]);
}
