/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42.madrid.com   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:44:49 by lroman-p          #+#    #+#             */
/*   Updated: 2023/11/04 12:27:25 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*aux;
	t_list	*lst2;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	lst2 = 0;
	aux = 0;
	while (lst)
	{
		content = f(lst->content);
		aux = ft_lstnew(content);
		if (!aux)
		{
			(del)(content);
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, aux);
		lst = lst->next;
	}
	return (lst2);
}
