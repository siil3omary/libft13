/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siil3omary <siil3omary@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:28:58 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/05 21:58:59 by siil3omary       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str;
	unsigned char 	*ptr;

	str = (unsigned char *)s1;
	ptr = (unsigned char *)s2; 
	
	while (n--)
	{
		if (*str != *ptr)
			return (*str - *ptr);
		if (*str == '\0' || *ptr == '\0')
			return (0);
		str++;
		ptr++;
	}
	return (0);
}
