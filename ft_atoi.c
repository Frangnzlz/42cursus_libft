/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:57:21 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/22 22:10:56 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int ft_is_space(char c)
{
    if (c == ' ' || c == '\f' || c == '\n'
        || c == '\n' || c == '\t' || c == '\v')
        return (1);
    return (0);
}

int ft_atoi(char *str)
{
    int i;
    long result;
	int is_signed;

    i = 0;
    result = 0;
	is_signed = 1;
    while (ft_is_space(str[i]))
        i++;
	if ( str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_signed = -1;
		i++;
	}
    while (str[i] <= '9' && str[i] >= '0')
    {   
        result = result * 10 + (str[i] - '0');
        i++;
    }   
    return (is_signed * result);
}

