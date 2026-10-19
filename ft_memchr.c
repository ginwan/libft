/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelgasim <gelgasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:31:26 by gelgasim          #+#    #+#             */
/*   Updated: 2026/10/19 10:31:52 by gelgasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		chr;
	size_t				i;

	ptr = (const unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		if (ptr[i] == chr)
		{
			return ((void *)&ptr[i]);
		}
		i++;
		n--;
	}
	return (NULL);
}
