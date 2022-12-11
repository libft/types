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

#ifndef FT_TYPES_SLIST_PIPTR_H
# define FT_TYPES_SLIST_PIPTR_H

# include "ft_types_array_piptr.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_piptr_node
{
	struct s_ft_types_slist_piptr_node	*next;
	t_piptr								value;
}	t_ft_types_slist_piptr_node;

typedef struct s_ft_types_slist_piptr
{
	t_ft_types_slist_piptr_node	*head;
	t_ft_types_slist_piptr_node	*tail;
	size_t						length;
}	t_ft_types_slist_piptr;

void	ft_types_slist_piptr_init(
			t_ft_types_slist_piptr *list);
void	ft_types_slist_piptr_clear(
			t_ft_types_slist_piptr *list);
t_err	ft_types_slist_piptr_to_array(
			t_ft_types_slist_piptr *list,
			t_ft_types_array_piptr *out);
t_err	ft_types_slist_piptr_from_array(
			t_ft_types_array_piptr *array,
			t_ft_types_slist_piptr *out);
t_err	ft_types_slist_piptr_push(
			t_ft_types_slist_piptr *list,
			t_piptr value);
t_err	ft_types_slist_piptr_unshift(
			t_ft_types_slist_piptr *list,
			t_piptr value);
bool	ft_types_slist_piptr_shift(
			t_ft_types_slist_piptr *list,
			t_piptr *out);

#endif
