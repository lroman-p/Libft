/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:31:07 by lroman-p          #+#    #+#             */
/*   Updated: 2023/11/04 14:28:49 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(dst);
	i = j;
	if (dst < src || j > dstsize)
		return (0);
	while (src[j - i] && j + 1 < dstsize)
	{
		dst [j] = src [j - i];
		j++;
	}
	if (j < dstsize)
		dst[j] = '\0';
	return (i + ft_strlen(src));
}
