/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelgasim <gelgasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:12:42 by gelgasim          #+#    #+#             */
/*   Updated: 2026/10/18 17:21:26 by gelgasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	int	count;
	int	sign;

	sign = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		sign = 1;
	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count + sign);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	num;

	if (n == 0)
		return (ft_strdup("0"));
	num = n;
	len = count_digit(n);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
		num = -num;
	while (len > 0)
	{
		str[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
