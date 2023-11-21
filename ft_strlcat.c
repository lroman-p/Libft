/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:31:07 by lroman-p          #+#    #+#             */
/*   Updated: 2023/11/04 16:50:13 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;

	dlen = ft_strlen(dst);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	while (src[i] && j + 1 < dstsize)
		dst[j++] = src [i++];
	dst[j] = '\0';
	return (dlen + ft_strlen(src));
}
*//size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	aux;

	if (!dst && dstsize == 0)
		return (0);
	aux = ft_strlen(dst);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	while (src[i] && j + 1 < dstsize)
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (aux + ft_strlen(src));
} //*
