/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:38:44 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/17 17:53:37 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;

		    t_list *current = *lst;
    t_list *next;

    while (current) {
        next = current->next;
        ft_lstdelone(current, del);
        current = next;
    }

	*lst = NULL;
}

