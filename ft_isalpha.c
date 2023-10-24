/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:06:28 by lroman-p          #+#    #+#             */
/*   Updated: 2023/10/24 14:46:50 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
#include <stdio.h>

int main()
{
    char ch = '&'; 

    int resultado = ft_isalpha(ch); 
    printf("El resultado para '%c' es: %d\n", ch, resultado);

    return 0;
}
