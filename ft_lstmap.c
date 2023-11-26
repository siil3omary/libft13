/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:14:53 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/23 14:35:15 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*head;
	void	*content;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		l = ft_lstnew(content);
		if (!l)
		{
			ft_lstclear(&head, del);
			free(content);
			return (NULL);
		}
		ft_lstadd_back(&head, l);
		lst = lst->next;
	}
	return (head);
}

// void *upper(void *str)
// {
// 	char *s = (char *)str;
// 	int i = 0;
// 	while (s[i])
// 	{
// 		s[i] = (int)ft_toupper((int) s[i]);
// 		i++;
// 	}
// 	return (str);

// }

// void del(void *cont)
// {
// free(cont);
// }
// int main(int argc, char const *argv[])
// {
// 	t_list *head = NULL;
// 	t_list *node1 = NULL;
// 	t_list *node2 = NULL;
// 	t_list *node3 = NULL;

// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	node3 = (t_list *)malloc(sizeof(t_list));

// 	head = node1;

// 	node1->content = ft_strdup("allo");
// 	node2->content = ft_strdup("la police");
// 	node3->content = ft_strdup("allo");

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// t_list * mapped;

// mapped = 	ft_lstmap(head ,upper , del);

//  while (mapped != NULL) {
//         printf("%s \n", (char *)mapped->content);
//         mapped = mapped->next;
//     }

// 	return (0);
// }
