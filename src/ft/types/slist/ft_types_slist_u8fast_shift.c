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

#include <stdint.h>
#include "ft_types_slist_u8fast.h"
#include "ft_types.h"
#include "wrap.h"

bool	ft_types_slist_u8fast_shift(
	t_ft_types_slist_u8fast *list,
	uint_fast8_t *out
)
{
	t_ft_types_slist_u8fast_node	*node;

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
