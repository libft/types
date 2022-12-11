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

#include "ft_types_slist_func_pi8f_pi8f_p.h"
#include "wrap.h"

void	ft_types_slist_func_pi8f_pi8f_p_clear(
	t_ft_types_slist_func_pi8f_pi8f_p *list
)
{
	t_ft_types_slist_func_pi8f_pi8f_p_node	*node_to_free;

	while (list->head)
	{
		node_to_free = list->head;
		list->head = node_to_free->next;
		wrap_free(node_to_free);
	}
	list->tail = NULL;
}
