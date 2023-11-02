/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:25:00 by lroman-p          #+#    #+#             */
/*   Updated: 2023/11/02 17:31:31 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))

{
	t_list		*after;

	if (*lst == NULL)
		return ;
	while (*lst)
	{
		after = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = after;
	}
	*lst = 0;
}
