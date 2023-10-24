/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:52:47 by lroman-p          #+#    #+#             */
/*   Updated: 2023/10/12 12:51:47 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int main ()
{
	int ch1 = 'A';
	int  ch2 = 128;

	int resultado1 = ft_isprint(ch1);
	int resultado2 = ft_isprint(ch2);

	printf("%c = %d\n", ch1, resultado1);
	 printf("%c = %d\n", ch2, resultado2);
    return 0;
}
