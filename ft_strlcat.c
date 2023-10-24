/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:34:24 by lroman-p          #+#    #+#             */
/*   Updated: 2023/10/24 16:08:43 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t strlcat(char *dst, const char *src, size_t dstsize);
size_t strlen(const char *str)
{
	size_t  i;
	size_t  j; 
	j = strlen(dst);
	i = j;
	if (dst < src || j < dstsize)
	   return (0);
	while (src[j - i] && j + 1 < dstsize)
	{
		dst[j] = src [j -i];
		j++;
	}
	if (j < dstsize)
		dst[j] = '\0';
	return ( strlen(src));
}
int main (void)
{
	char	s1[20] = "hola, ";
	char	s2[] = "mundo";
	printf("%d\n", (int)strlcat(s1, s2, 12));
	printf("%s\n", s1);
	return (0);	
}
