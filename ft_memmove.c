/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:03:33 by lroman-p          #+#    #+#             */
/*   Updated: 2023/10/29 12:47:24 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memmove(void *dst, const void *scr, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)scr;
	d = (unsigned char *)dst;
	if (dst == scr || len)
		return (dst);
	if (d < s)
		while (len --)
			*d++ = *s++;
	else
		while (len --)
			d[len] = s[len];
	return (dst);
}
