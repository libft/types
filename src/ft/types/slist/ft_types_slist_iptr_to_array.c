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
#include "ft_memory.h"
#include "ft_types_array_iptr.h"
#include "ft_types_slist_iptr.h"
#include "ft_types.h"

t_err	ft_types_slist_iptr_to_array(
			t_ft_types_slist_iptr *list,
			t_ft_types_array_iptr *out);

t_err	ft_types_slist_iptr_to_array(
	t_ft_types_slist_iptr *list,
	t_ft_types_array_iptr *out
)
{
	t_ft_types_array_iptr		result;
	t_ft_types_slist_iptr_node	*node;
	size_t						i;

	result.element = ft_memory_allocate(
			list->length,
			sizeof(intptr_t));
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
