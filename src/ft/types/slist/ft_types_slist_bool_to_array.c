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

#include <stdbool.h>
#include "ft_memory.h"
#include "ft_types_array_bool.h"
#include "ft_types_slist_bool.h"
#include "ft_types.h"

t_err	ft_types_slist_bool_to_array(
	t_ft_types_slist_bool *list,
	t_ft_types_array_bool *out
)
{
	t_ft_types_array_bool		result;
	t_ft_types_slist_bool_node	*node;
	size_t						i;

	result.element = ft_memory_allocate(
			list->length,
			sizeof(bool));
	if (!result.element)
		return (true);
	result.count = list->length;
	i = 0;
	node = list->head;
	while (node)
	{
		result.element[i] = node->value;
		i++;
		node = node->next;
	}
	*out = result;
	return (false);
}
