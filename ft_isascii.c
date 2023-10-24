/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:52:09 by lroman-p          #+#    #+#             */
/*   Updated: 2023/10/12 12:44:21 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int main()
{
    int ch1 = 'A'; 
    int ch2 = 128; 

    int resultado1 = ft_isascii(ch1);
    int resultado2 = ft_isascii(ch2); 

    printf("%c = %d\n", ch1, resultado1);
    printf("%c = %d\n", ch2, resultado2);

    return 0;
}
