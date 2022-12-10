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
#include "ft_types_slist_i16least.h"
#include "ft_types.h"

t_err	ft_types_slist_i16least_unshift(
	t_ft_types_slist_i16least *list,
	int_least16_t value
)
{
	t_ft_types_slist_i16least_node	*node;

	node = malloc(sizeof(t_ft_types_slist_i16least));
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
