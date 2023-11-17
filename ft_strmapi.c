/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:21:05 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/14 15:45:29 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = 0;
	str = ft_strdup(s);
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

//  char my_func(unsigned int i, char str)
//  {
// 	printf(" index = %d de %c\n", i, str);
//  	return (ft_toupper(str));
//  }

//  int main()
//  {
//  	char str[10] = "hello.";
// 	printf("avant%s\n", str);
//  	char *result = ft_strmapi(str, my_func);
// 	printf("apres %s\n", result);

// 	return (0);
// 		}
