/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelgasim <gelgasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:24:24 by gelgasim          #+#    #+#             */
/*   Updated: 2026/10/18 17:20:29 by gelgasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
if (nmemb > (size_t)-1 / size)
	return (NULL);
to prevent intiger overflow. 
(size_t)-1 gives the maximum value that size_t can hold
(size_t)-1 / size calcolate the safe number of element you can allocate 
put zero in all allocated size
*/
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptnr;
	size_t	total_size;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	total_size = nmemb * size;
	ptnr = malloc(total_size);
	if (ptnr != NULL)
		ft_memset(ptnr, 0, total_size);
	return (ptnr);
}
