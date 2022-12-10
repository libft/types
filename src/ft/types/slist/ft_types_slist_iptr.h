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

#ifndef FT_TYPES_SLIST_IPTR_H
# define FT_TYPES_SLIST_IPTR_H

# include <stddef.h>
# include <stdint.h>
# include "ft_types_array_iptr.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_iptr_node
{
	struct s_ft_types_slist_iptr_node	*next;
	intptr_t							value;
}	t_ft_types_slist_iptr_node;

typedef struct s_ft_types_slist_iptr
{
	t_ft_types_slist_iptr_node	*head;
	t_ft_types_slist_iptr_node	*tail;
	size_t						length;
}	t_ft_types_slist_iptr;

void	ft_types_slist_iptr_init(
			t_ft_types_slist_iptr *list);
void	ft_types_slist_iptr_clear(
			t_ft_types_slist_iptr *list);
t_err	ft_types_slist_iptr_to_array(
			t_ft_types_slist_iptr *list,
			t_ft_types_array_iptr *out);
t_err	ft_types_slist_iptr_from_array(
			t_ft_types_array_iptr *array,
			t_ft_types_slist_iptr *out);
t_err	ft_types_slist_iptr_push(
			t_ft_types_slist_iptr *list,
			intptr_t value);

#endif
