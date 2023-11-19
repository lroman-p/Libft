/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:19:00 by lroman-p          #+#    #+#             */
/*   Updated: 2023/11/19 13:57:16 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*duplicate;
	char	*aux;

	duplicate = (char *)malloc(ft_strlen(s1) + 1);
	if (!duplicate)
		return (NULL);
	aux = duplicate;
	while (*s1)
	{
		*duplicate = *s1;
		duplicate++;
		s1++;
	}
	*duplicate = '\0';
	return (aux);
}
