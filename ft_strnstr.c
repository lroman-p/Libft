/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:52:51 by lroman-p          #+#    #+#             */
/*   Updated: 2023/10/28 16:12:57 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] == needle[0])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while ((needle[j] != '\0'
				&& haystack [i+j] == needle[j] && (i +j) < len))
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
