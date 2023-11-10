/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:23:46 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/09 01:54:01 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    if (!s)
        return NULL;

    size_t str_len = strlen(s);

    if (start >= str_len || len == 0)
        return ft_strdup("");

    if (len > str_len - start)
        len = str_len - start;

    char *ptr = (char *)malloc(len + 1);
    if (!ptr)
        return NULL;

    int i = 0;
    while (i < len && s[start + i])
    {
        ptr[i] = s[start + i];
        i++;
    }
    ptr[i] = '\0';

    return ptr;
}
#include <stdio.h>
int main()
{
	char *s ;
	s = "RMWWW9";
	printf("%c", ft_substr(s , 3, 3));
}
