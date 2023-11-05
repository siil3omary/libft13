/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siil3omary <siil3omary@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:37:06 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/05 20:22:33 by siil3omary       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{

	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			return (( char *)s);
		}
		s++;
	}
	
	if (c == '\0') {
        return (char *)s;
    }
	return (NULL);
}
