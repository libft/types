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

#include "ft_types_slist_func_pp_pp_p.h"
#include "wrap.h"

t_err	ft_types_slist_func_pp_pp_p_push(
	t_ft_types_slist_func_pp_pp_p *list,
	t_func_pp_pp_p value
)
{
	t_ft_types_slist_func_pp_pp_p_node	*node;

	node = wrap_malloc(sizeof(t_ft_types_slist_func_pp_pp_p));
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
