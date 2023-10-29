/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:27:27 by lroman-p          #+#    #+#             */
/*   Updated: 2023/10/29 15:49:06 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	digits(int n)
{
	int	digitlen;
	int	aux;

	digitlen = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		digitlen++;
	}
	aux = n;
	while (aux > 0)
	{
		aux /= 10;
		digitlen++;
	}
	return (digitlen);
}

static char	*min(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 12);
	if (!str)
		return (NULL);
	ft_strlcpy(str, "-2147483648", 12);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		len;

	len = digits(n);
	if (n == -2147483648)
		return (min());
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	string[len] = '\0';
	if (n == 0)
		string[0] = '0';
	if (n < 0)
	{
		string[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		len--;
		string[len] = n % 10 + 48;
		n /= 10;
	}
	return (string);
}
