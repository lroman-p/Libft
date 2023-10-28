/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:44:55 by lroman-p          #+#    #+#             */
/*   Updated: 2023/10/28 14:38:25 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*strrchr(const char *s, int c)
{
	char	*string;

	string = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			string = (char *)s;
		s++;
	}
	if (*s == (char)s)
		return ((char *)s);
	return (string);
}
