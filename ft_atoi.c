/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:37:54 by lroman-p          #+#    #+#             */
/*   Updated: 2023/11/19 13:40:55 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		sol;

	sign = 1;
	sol = 0;
	while ((*str == 32)
		|| (*str >= 9 && *str <= 13))
		str ++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sol = sol * 10 + (*str - 48);
		str++;
	}
	return (sign * sol);
}
