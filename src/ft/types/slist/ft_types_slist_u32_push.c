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
#include <stdlib.h>
#include "ft_types_slist_u32.h"
#include "ft_types.h"

t_err	ft_types_slist_u32_push(
	t_ft_types_slist_u32 *list,
	uint32_t value
)
{
	t_ft_types_slist_u32_node	*node;

	node = malloc(sizeof(t_ft_types_slist_u32));
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
