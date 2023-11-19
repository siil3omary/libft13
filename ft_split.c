/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:51:30 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/16 14:07:54 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != c) && ((str[i + 1] == c) || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**split;
	size_t	wordlen;

	i = 0;
	j = 0;
	split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (split == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
		}
		else
		{
			wordlen = 0;
			while (s[i + wordlen] && s[i + wordlen] != c)
				wordlen++;
			split[j] = malloc(wordlen + 1);
			ft_strlcpy(split[j], s + i, wordlen + 1);
			i += wordlen;
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

// int	main(void)
// {
// 	char *s = "*slm**************************************************************************************************************************************************************************************************************************************wa*****************************************cv***waismane*";
// 	char **str = ft_split(s, '*');
// 	int k = 0;
// 	int j = 0;

// 	while (str[k] != NULL)
// 	{
// 		j = 0;
// 		while (str[k][j])
// 		{
// 			printf("%c", str[k][j]);
// 			j++;
// 		}
// 		printf("\n");
// 		k++;
// 	}
// }