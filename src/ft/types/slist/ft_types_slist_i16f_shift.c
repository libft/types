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

#include "ft_types_slist_i16f.h"
#include "wrap.h"

bool	ft_types_slist_i16f_shift(
	t_ft_types_slist_i16f *list,
	t_i16f *out
)
{
	t_ft_types_slist_i16f_node	*node;

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
