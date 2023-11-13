/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:26:08 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/13 20:14:43 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int len_int(int n){
	 int i;
	  i = 0;
	if(n < 0){
		i++;
		n  = -n;
	}
	while (n > 0)
	{
		 n /= 10;
		 i++;
	}
	
	return (i);
}
static char	zero(char *zr)
{
	char *zr;
		zr = (char *)malloc(2 *sizeof(char));
		if(zr == NULL){
			return NULL;
		}
		zr[0] = '0';
		zr[1] = '\0';
		return (zr);
}
char *ft_itoa(size_t n)
{
	
char *rslt;
size_t num; 
size_t len;
	if(n == 0)
		zero(rslt);

num = n;

len = len_int(n); 
rslt = malloc((len_int + 1)* sizeof(char));
if(rslt == NULL)
return (NULL);


rslt[len--] = '\0';

if(num < 0){
	rslt[0] = '-';
	num = -num;
}
while (num > 0)
{
	rslt[len] = num % 10 + '0';
	num /= 10;
	len--; 
}
return (rslt);
}