/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/22 20:42:36 by username         #+#    #+#              */
/*   Updated: 2026/09/23 22:42:51 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!little)
		return (big);
	while (big[i] && little[j] && i + j < len)
	{
		while (big[i + j] == little[j] && little[j] && i + j < len)
			j++;
		if (!little[j] && big[i])
			return (&big[i]);
		i++;
	}
	return (NULL);
}
