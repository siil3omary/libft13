/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 02:45:42 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/04 20:44:30 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*se;
	size_t			i;

	se = (unsigned char *)s;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	if (c == '\0')
	{
		return (se);
	}
	while (i < n)
	{
		if (se[i] == (unsigned char)c)
		{
			return (&se[i]);
		}
		i++;
	}
	return (NULL);
}
