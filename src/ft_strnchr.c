/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 16:33:24 by abarbaro          #+#    #+#             */
/*   Updated: 2016/03/14 16:34:46 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnchr(const char *s, int n, int c)
{
	int		i;

	i = 0;
	while (i < n)
	{
		if (s[i] == (char)c)
			return (i);
		i++;
	}
	if (s[i] == (char)c) {
		return (i);
	}
	return (-1);
}
