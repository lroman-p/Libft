/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:13:44 by lroman-p          #+#    #+#             */
/*   Updated: 2023/11/19 13:56:08 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}
*//
void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
		write (fd, s, ft_strlen(s));
}
*//
