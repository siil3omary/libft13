/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 04:25:44 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/24 10:03:57 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

// char	*iffu(size_t start, size_t end)
// {
// 	char	*nostr;

// 	if (start >= end)
// 	{
// 		nostr = malloc(1 * sizeof(char));
// 		if (nostr == NULL)
// 		{
// 			return (NULL);
// 		}
// 		nostr[0] = '\0';
// 		return (nostr);
// 	}
// 	return (NULL);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*nostr;
	char	*str;

	start = 0;
	end = ft_strlen(s1);
	// nostr = iffu(start, end);
	// if (nostr != NULL)
	// {
	// 	return (nostr);
	// }
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	while (ft_strchr(set, s1[end - 1]) && end > start)
		end--;
	str = malloc(end - start + 1);
	if (!str)
	{
		return (NULL);
	}
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}
