/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:36:18 by lroman-p          #+#    #+#             */
/*   Updated: 2023/10/21 10:58:31 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

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
		while (len--)
			d[len] = s[len];
	return (dst);
}
int	main (void)
{
	char	s[] = "42madrid";
	char	d[9];

	printf("%s\n", ((char*) ft_memmove(d, s, 8)));
	printf("%s\n", s);
	printf("%s\n", d);
	printf("%p\n", s);
	printf("%p\n", d);
	printf("%ld\n", d - s);
	printf("%ld\n", s - d);
	return (0);	
}
