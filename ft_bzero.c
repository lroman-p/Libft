/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:17:26 by lroman-p          #+#    #+#             */
/*   Updated: 2023/11/19 13:41:59 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = '\0';
}
//

#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

void	ft_bzero(void	*s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = '\0';
}

int	main()
{
	char	str[] = "42madrid";

	ft_bzero(str, ;
	write(1, str, sizeof(str) - 1);
	return (0);
}
//
