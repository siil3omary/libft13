/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:49:14 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/11 04:23:57 by aelomari         ###   ########.fr       */
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

// int main() {
//     char array[20]; // Creating an array of size 20

//     // Using ft_memset to fill array with 'A' character
//     ft_memset(array, 'zab', sizeof(array));

//     // Printing the content of the array
//     printf("Array after memset: %s\n", array);

//     return (0);
// }