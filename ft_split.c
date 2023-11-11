/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:51:30 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/11 16:01:23 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_countsp(const char *str, char c) {
    size_t count = 0;
    while (*str) {
        if (*str == c)
            count++;
        str++;
    }
    return count;
}
char **ft_split(char const *s, char c){
    size_t i = 0;
    size_t j = 0;
    char **split;


split = malloc((ft_countsp(s, c) + 1) * sizeof(char *));
if (split == NULL) {
  
    return NULL;
}
    while (s[i])
    {
      if(s[i] == c){
        i++;

      }else{
        size_t wordlen = 0;
        while (s[i + wordlen] && s[i + wordlen] != c )
        wordlen++;
        split[j] = ft_substr(s , i , wordlen);
	   
        i += wordlen;
        j++;
      }
    }
    return split;
}