/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:41:17 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/01 18:52:17 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	*d = '\n';
	return (d);
}
