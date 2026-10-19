/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelgasim <gelgasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:29:17 by gelgasim          #+#    #+#             */
/*   Updated: 2026/10/18 14:12:15 by gelgasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// count the word number on the string
static int	count_word(char const *s, char sep)
{
	size_t	i;
	size_t	count;
	size_t	is_word;

	i = 0;
	count = 0;
	is_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == sep)
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			count++;
			is_word = 1;
		}
		i++;
	}
	return (count);
}

// copy the words and allocate memory for each single word
static char	*copy_word(char const *s, size_t len)
{
	size_t	i;
	char	*word;

	i = 0;
	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	*free_split(size_t	word_idx, char	**splitted_s)
{
	while (word_idx > 0)
		free(splitted_s[--word_idx]);
	free(splitted_s);
	return (NULL);
}

static char	**add_word(char const *s, char c, size_t	word_idx,
	char	**splitted_s)
{
	size_t	i;
	size_t	start;

	i = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			splitted_s[word_idx] = copy_word(s + start, i - start);
			if (splitted_s[word_idx] == NULL)
				free_split(word_idx, splitted_s);
			word_idx++;
		}
	}
	splitted_s[word_idx] = NULL;
	return (splitted_s);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_idx;
	size_t	words_count;
	char	**splitted_s;

	if (s == NULL)
		return (NULL);
	word_idx = 0;
	words_count = count_word(s, c);
	splitted_s = malloc((words_count + 1) * sizeof(char *));
	if (splitted_s == NULL)
		return (NULL);
	splitted_s = add_word(s, c, word_idx, splitted_s);
	return (splitted_s);
}
