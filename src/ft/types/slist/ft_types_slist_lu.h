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

#ifndef FT_TYPES_SLIST_LU_H
# define FT_TYPES_SLIST_LU_H

# include "ft_types_array_lu.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_lu_node
{
	struct s_ft_types_slist_lu_node	*next;
	t_lu							value;
}	t_ft_types_slist_lu_node;

typedef struct s_ft_types_slist_lu
{
	t_ft_types_slist_lu_node	*head;
	t_ft_types_slist_lu_node	*tail;
	size_t						length;
}	t_ft_types_slist_lu;

void	ft_types_slist_lu_init(
			t_ft_types_slist_lu *list);
void	ft_types_slist_lu_clear(
			t_ft_types_slist_lu *list);
t_err	ft_types_slist_lu_to_array(
			t_ft_types_slist_lu *list,
			t_ft_types_array_lu *out);
t_err	ft_types_slist_lu_from_array(
			t_ft_types_array_lu *array,
			t_ft_types_slist_lu *out);
t_err	ft_types_slist_lu_push(
			t_ft_types_slist_lu *list,
			t_lu value);
t_err	ft_types_slist_lu_unshift(
			t_ft_types_slist_lu *list,
			t_lu value);
bool	ft_types_slist_lu_shift(
			t_ft_types_slist_lu *list,
			t_lu *out);

#endif
