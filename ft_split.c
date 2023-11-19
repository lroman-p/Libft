/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:13:46 by lroman-p          #+#    #+#             */
/*   Updated: 2023/11/19 13:56:34 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	wordcount(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && j == 0)
		{
			j = 1;
			i++;
		}
		else if (*s == c)
			j = 0;
		s++;
	}
	return (i);
}

static	size_t	wordlen(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (*s && *s != c)
	{
		size++;
		s++;
	}
	return (size);
}

static	void	ft_free(size_t i, char **str)
{
	while (i > 0)
	{
		i--;
		free(*(str + i));
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	wordsize;
	size_t	start;
	size_t	j;

	if (!s)
		return (NULL);
	matrix = (char **)malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	start = 0;
	j = -1;
	while (++j < wordcount (s, c))
	{
		while (s[start] == c)
			start++;
		wordsize = wordlen(s + start, c);
		matrix[j] = ft_substr(s, start, wordsize);
		if (!matrix[j])
			return (ft_free(j, matrix), NULL);
		start += wordsize;
	}
	matrix[j] = 0;
	return (matrix);
}
