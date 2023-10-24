/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:48:23 by lroman-p          #+#    #+#             */
/*   Updated: 2023/10/24 14:53:57 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

size_t	strlcpy(char *dst, const char *src, size_t dstsize)

{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (src_len);
}
int main(void)
{
	char destination[10];
	char source[] = "candidaturas";
	size_t sol = ft_strlcpy(destination, source, sizeof(destination));

	printf("%zu\n", sol);
	printf("%s\n", destination);
	return (0);
 }
