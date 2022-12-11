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

#include "ft_memory.h"
#include "ft_types_array_i64fast.h"
#include "ft_types_slist_i64fast.h"
#include "ft_types.h"

t_err	ft_types_slist_i64fast_to_array(
	t_ft_types_slist_i64fast *list,
	t_ft_types_array_i64fast *out
)
{
	t_ft_types_array_i64fast		result;
	t_ft_types_slist_i64fast_node	*node;
	size_t							i;

	result.element = ft_memory_allocate(
			list->length,
			sizeof(t_i64fast));
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
