/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:17:00 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/24 12:04:07 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ifnull(char const *s1, char const *s2)
{
	if (!s1 || !s2)
	{
		if (s1)
			return (ft_strdup(s1));
		else if (s2)
			return (ft_strdup(s2));

	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	ri;
	size_t	all_len;
	char	*result;

	if (!s1 && !s2)
		return (NULL);
	result = ifnull(s1, s2);
	if (result)
		return (result);
	all_len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc((all_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ri = 0;
	i = 0;
	while (s1[i])
		result[ri++] = s1[i++];
	i = 0;
	while (s2[i])
		result[ri++] = s2[i++];
	result[ri] = '\0';
	return (result);
}
