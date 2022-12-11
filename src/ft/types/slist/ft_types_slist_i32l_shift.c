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

#include "ft_types_slist_i32l.h"
#include "wrap.h"

bool	ft_types_slist_i32l_shift(
	t_ft_types_slist_i32l *list,
	t_i32l *out
)
{
	t_ft_types_slist_i32l_node	*node;

	if (!list->head)
		return (false);
	node = list->head;
	list->head = node->next;
	if (!list->head)
		list->tail = NULL;
	list->length--;
	*out = node->value;
	wrap_free(node);
	return (true);
}