/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:53:08 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/01 20:22:57 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	
	if(d < s){
		while (n--)
		{
			*d++ = *s++;
		}
		
		
	} else if (d > s)
		{
			d += n;
			s += n;
			while (n--)
			{
				*(--d) = *(--s);
			}
			
		}
		return (d);
}
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char dest[20];

    // Test 1: Copy non-overlapping memory regions
    ft_memmove(dest, source, 13);  // Expected: dest should be "Hello, World!"
    dest[13] = '\0';  // Null-terminate the string

    printf("Test 1: Non-overlapping regions\n");
    printf("Source: %s\n", source);
    printf("Dest: %s\n\n", dest);

    // Test 2: Copy overlapping memory regions
    ft_memmove(dest + 7, dest, 13);  // Expected: dest should be "Hello,Hello, World!"
    dest[20] = '\0';  // Null-terminate the string

    printf("Test 2: Overlapping regions\n");
    printf("Source: %s\n", source);
    printf("Dest: %s\n\n", dest);

    return 0;
}
