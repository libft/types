/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fake_file_name (file name is useless too)          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42header-remover <whatever@example.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by file history     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_types_slist_u64f.h"
#include "wrap.h"

t_err	ft_types_slist_u64f_push(
	t_ft_types_slist_u64f *list,
	t_u64f value
)
{
	t_ft_types_slist_u64f_node	*node;

	node = wrap_malloc(sizeof(t_ft_types_slist_u64f));
	if (!node)
		return (true);
	node->next = NULL;
	node->value = value;
	if (list->tail)
		list->tail->next = node;
	else
		list->head = node;
	list->tail = node;
	list->length++;
	return (false);
}
