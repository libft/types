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
#include "ft_types_slist_i64fast.h"
#include "ft_types.h"

t_err	ft_types_slist_i64fast_unshift(
	t_ft_types_slist_i64fast *list,
	int_fast64_t value
)
{
	t_ft_types_slist_i64fast_node	*node;

	node = malloc(sizeof(t_ft_types_slist_i64fast));
	if (!node)
		return (true);
	node->next = list->head;
	node->value = value;
	if (!list->head)
		list->tail = node;
	list->head = node;
	list->length++;
	return (false);
}
