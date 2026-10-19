/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelgasim <gelgasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 09:22:18 by gelgasim          #+#    #+#             */
/*   Updated: 2026/10/19 10:32:40 by gelgasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	forword(unsigned char *new, const unsigned char *current, size_t n)
{
	while (n > 0)
	{
		*new++ = *current++;
		n--;
	}
}

static void	backword(unsigned char *new, const unsigned char *current,
	size_t n)
{
	new = new + n - 1;
	current = current + n - 1;
	while (n > 0)
	{
		*new-- = *current--;
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*new_val;
	const unsigned char	*current_val;

	new_val = (unsigned char *)dest;
	current_val = (const unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	if (dest < src)
	{
		forword(new_val, current_val, n);
	}
	else
	{
		backword(new_val, current_val, n);
	}
	return (dest);
}
