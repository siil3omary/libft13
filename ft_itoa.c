/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:26:08 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/13 18:25:16 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static char	zero(char *zr)
{
=
		zr = (char *)malloc(2 *sizeof(char));
		if(zr == NULL){
			return NULL;
		}
		zr[0] = '0';
		zr[1] = '\0';
		return (zr);
}
char *ft_itoa(int n)
{
	char *rslt;
	if(n == 0)
		zero(rslt);


	
}