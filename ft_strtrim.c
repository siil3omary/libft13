/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 04:25:44 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/11 04:36:35 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set){
	size_t start;
	size_t end;
	char *str;
	
	start = 0;
	end = ft_strlen(s1);

	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;

	str = malloc(end - start+ 1 );
if (!str)
{
	return (NULL);
}
ft_strlcpy(str ,&s1[start],end - start);
		return (str);
	
}