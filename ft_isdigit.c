/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:29:07 by lroman-p          #+#    #+#             */
/*   Updated: 2023/10/12 12:33:22 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (1);
	return (0);
}

int main (void)

{
    char ch = 'k'; 

    int resultado = ft_isdigit(ch); 

    printf("El resultado para '%c' es: %d\n", ch, resultado);

    return 0;
}
