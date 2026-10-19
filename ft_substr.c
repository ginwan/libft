/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelgasim <gelgasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:33:20 by gelgasim          #+#    #+#             */
/*   Updated: 2026/10/18 17:24:58 by gelgasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*substring;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen((char *)s))
		len = 0;
	else if (len > ft_strlen((char *)s) - start)
		len = ft_strlen((char *)s) - start;
	substring = malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	while (s[i] != '\0' && i < start)
	{
		i++;
	}
	while (s[i] != '\0' && j < len)
		substring[j++] = s[i++];
	substring[j] = '\0';
	return (substring);
}
