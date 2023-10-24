/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:10:15 by lroman-p          #+#    #+#             */
/*   Updated: 2023/10/12 12:36:42 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') 
		|| (c < '0' && c > '9'))
		return (1);
	return (0);
}

	int	main (void)
{
	char ch = '(';
	int resultado = ft_isalnum(ch);

	printf("El resultado para '%c' es %d\n", ch, resultado);
	return (1);
}
