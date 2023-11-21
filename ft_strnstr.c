/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:52:51 by lroman-p          #+#    #+#             */
/*   Updated: 2023/11/19 13:58:52 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while ((needle[j] != '\0'
					&& haystack [i + j] == needle[j] && (i + j) < len))
			{
				if (needle[j + 1] == '\0')
					return ((char *) haystack + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

*//
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	j;

	h = 0;
	if (!haystack && len == 0)
		return ((char *)haystack);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[h] != '\0' && h < len)
	{
		if (haystack[h] == needle[0])
		{
			j = 0;
			while ((needle[j] != '\0'
					&& haystack[h + j] == needle[j] && (h + j) < len))
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + h);
				j++;
			}
		}
		h++;
	}
	return (NULL);
}
//*
