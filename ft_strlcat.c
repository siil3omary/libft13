/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:02:25 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/06 18:00:21 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>  // Include the BSD string.h header

// int main() {
//     char dest[200] = "Hello, jj";
//     const char *source = "world!";

//     // Test strlcat function
//     size_t original_len = strlen(dest);
//     size_t result = ft_strlcat(dest, source,11);

//     printf("Resulting string: %s\n", dest);
//     printf("Original length: %zu\n", original_len);
//     printf("Final length: %zu\n", strlen(dest));
//     printf("strlcat return (value: %zu\n", result));

//     return (0);
// }
