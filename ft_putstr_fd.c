/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:01:32 by codespace         #+#    #+#             */
/*   Updated: 2023/11/26 13:15:15 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
