/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelgasim <gelgasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:22:44 by gelgasim          #+#    #+#             */
/*   Updated: 2026/10/19 10:32:08 by gelgasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*first_s;
	const unsigned char	*second_s;
	size_t				i;

	i = 0;
	first_s = (const unsigned char *)s1;
	second_s = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (first_s[i] != second_s[i])
			return (first_s[i] - second_s[i]);
		i++;
	}
	return (0);
}
