/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 21:14:16 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/03 21:43:23 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		c;

	i = 0;
	c = 0;
	if (!*s2)
		return ((char*)s1);
	while (s1[i] && i < n && c + i <= n)
	{
		if (!s2[c])
			return ((char*)s1 + i);
		else if (s2[c] == s1[i + c])
			c++;
		else
		{
			c = 0;
			i++;
		}
	}
	return (NULL);
}
