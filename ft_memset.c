/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:49:14 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/09 02:02:50 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*pc;
	char	uc;
	int		i;

	pc = (char *)s;
	uc = (char)c;
	i = 0;
	while (n > 0)
	{
		pc[i] = uc;
		i++;
		n--;
	}
	return (s);
}

imt main()
{
	int a = 651651;
	ft_memset(&a , 0, 4);
	ft_memset(&a, 10, 1);


	printf("%d", a);
}