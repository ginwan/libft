/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelgasim <gelgasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:38:08 by gelgasim          #+#    #+#             */
/*   Updated: 2026/10/18 17:24:36 by gelgasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	first;
	size_t	last;
	char	*trimed_str;

	if (!s1)
		return (0);
	if (!set)
		return (0);
	i = 0;
	first = 0;
	last = ft_strlen((char *)s1);
	while (s1[first] && first < last && ft_strchr(set, s1[first]))
		first++;
	while (last > first && ft_strchr(set, s1[last - 1]))
		last--;
	trimed_str = (char *)malloc((last - first + 1) * sizeof(char));
	if (trimed_str == NULL)
		return (NULL);
	while (s1[first] && first < last)
		trimed_str[i++] = s1[first++];
	trimed_str[i] = '\0';
	return (trimed_str);
}
