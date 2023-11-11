/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:44:55 by lroman-p          #+#    #+#             */
/*   Updated: 2023/11/11 12:03:23 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*string;

	string = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			string = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (string);
}
