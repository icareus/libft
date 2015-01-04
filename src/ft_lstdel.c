/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbaro <abarbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/04 01:33:40 by abarbaro          #+#    #+#             */
/*   Updated: 2015/01/04 02:06:57 by abarbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstdel(t_list **lst, void (*del)(void *, size_t))
{
	t_list		*cast;

	cast = *lst;
	del(cast->content, cast->content_size);
	if (cast->next)
		ft_lstdel(&(cast->next), del);
	else
		free(cast);
}