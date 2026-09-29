/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 23:47:08 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/29 15:55:09 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str_n;

	str_n = ft_itoa(n);
	if (!str_n)
		return ;
	ft_putstr_fd(str_n, fd);
	free(str_n);
}
