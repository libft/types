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

#ifndef FT_TYPES_SLIST_UPTR_H
# define FT_TYPES_SLIST_UPTR_H

# include <stddef.h>
# include <stdint.h>
# include "ft_types_array_uptr.h"
# include "ft_types.h"

typedef struct s_ft_types_slist_uptr_node
{
	struct s_ft_types_slist_uptr_node	*next;
	uintptr_t							value;
}	t_ft_types_slist_uptr_node;

typedef struct s_ft_types_slist_uptr
{
	t_ft_types_slist_uptr_node	*head;
	t_ft_types_slist_uptr_node	*tail;
	size_t						length;
}	t_ft_types_slist_uptr;

void	ft_types_slist_uptr_init(
			t_ft_types_slist_uptr *list);
void	ft_types_slist_uptr_clear(
			t_ft_types_slist_uptr *list);
t_err	ft_types_slist_uptr_to_array(
			t_ft_types_slist_uptr *list,
			t_ft_types_array_uptr *out);
t_err	ft_types_slist_uptr_from_array(
			t_ft_types_array_uptr *array,
			t_ft_types_slist_uptr *out);
t_err	ft_types_slist_uptr_push(
			t_ft_types_slist_uptr *list,
			uintptr_t value);
t_err	ft_types_slist_uptr_unshift(
			t_ft_types_slist_uptr *list,
			uintptr_t value);

#endif
