/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:24:15 by julee             #+#    #+#             */
/*   Updated: 2019/03/13 11:01:07 by julee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *link;

	if (!(link = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	link->next = NULL;
	if (!content)
	{
		link->content = NULL;
		link->content_size = 0;
		return (link);
	}
	if (!(link->content = malloc(sizeof(content_size))))
	{
		free(link);
		return (NULL);
	}
	ft_memcpy(link->content, content, content_size);
	link->content_size = content_size;
	return (link);
}
