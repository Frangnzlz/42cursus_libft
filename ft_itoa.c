/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgonzal <frgonzal@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 21:36:05 by frgonzal          #+#    #+#             */
/*   Updated: 2026/09/27 23:46:49 by frgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_number_digits(long n)
{
	size_t	numb;

	numb = !n;
	if (n < 0)
	{
		numb++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		numb++;
	}
	return (numb);
}

char	*ft_itoa(int n)
{
	char	*n_ascii;
	long	n_long;
	size_t	size;

	size = ft_number_digits(n);
	n_ascii = ft_calloc(size + 1, sizeof(char));
	if (!n_ascii)
		return (NULL);
	n_long = n;
	if (n_long < 0)
	{
		n_long *= -1;
		n_ascii[0] = '-';
	}
	while (size-- && !n_ascii[size])
	{
		n_ascii[size] = (n_long % 10) + '0';
		n_long /= 10;
	}
	return (n_ascii);
}

/*
int	main(void)
{
	printf("0 : %s\n", ft_itoa(0));
	printf("42 : %s\n", ft_itoa(42));
	printf("2147483647 : %s\n", ft_itoa(2147483647));
	printf("-2147483648 : %s\n", ft_itoa(-2147483648));

}*/
