/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 04:25:44 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/11 15:46:05 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "stdio.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start = 0;
    size_t end = ft_strlen(s1);

    while (ft_strchr(set, s1[start]) && start <= end)
        start++;

    while (ft_strchr(set, s1[end - 1]) && end > start)
        end--;
    if (start >= end) {
        char *nostr = malloc(1);
        if (!nostr) {
            return (NULL);
        }
        nostr[0] = '\0';
        return nostr;
    }

    char *str = malloc(end - start + 1);

    if (!str)
    {
        return (NULL);
    }
    ft_strlcpy(str, s1 + start, end - start + 1);

    return (str);
}
// int main(){
// 	char s[] = "-*-*-*-*-*f*u*c*k*f*-*-*-*-*-*-";
// 	char *trimmed = ft_strtrim(s , "-");
// 	printf("|%s|" ,trimmed );

// }