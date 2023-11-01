/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:33:19 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/01 14:41:03 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isalnum(int c)
{
	if (((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z'))
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (1);
}
