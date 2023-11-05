/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:02:25 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/05 01:11:46 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
size_t 
}
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>  // Include the BSD string.h header

int main() {
    char dest[20] = "Hello, ";
    const char *source = "world!";
    
    // Test strlcat function
    size_t original_len = strlen(dest);
    size_t result = strlcat(dest, source,20 );
    
    printf("Resulting string: %s\n", dest);
    printf("Original length: %zu\n", original_len);
    printf("Final length: %zu\n", strlen(dest));
    printf("strlcat return value: %zu\n", result);
    
    return 0;
}
