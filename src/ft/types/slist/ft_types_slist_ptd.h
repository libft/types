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

#ifndef FT_TYPES_SLIST_PTD_H
# define FT_TYPES_SLIST_PTD_H

# include "ft_types_array_ptd.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_ptd_node
{
	struct s_ft_types_slist_ptd_node	*next;
	t_ptd								value;
}	t_ft_types_slist_ptd_node;

typedef struct s_ft_types_slist_ptd
{
	t_ft_types_slist_ptd_node	*head;
	t_ft_types_slist_ptd_node	*tail;
	size_t						length;
}	t_ft_types_slist_ptd;

void	ft_types_slist_ptd_init(
			t_ft_types_slist_ptd *list);
void	ft_types_slist_ptd_clear(
			t_ft_types_slist_ptd *list);
t_err	ft_types_slist_ptd_to_array(
			t_ft_types_slist_ptd *list,
			t_ft_types_array_ptd *out);
t_err	ft_types_slist_ptd_from_array(
			t_ft_types_array_ptd *array,
			t_ft_types_slist_ptd *out);
t_err	ft_types_slist_ptd_push(
			t_ft_types_slist_ptd *list,
			t_ptd value);
t_err	ft_types_slist_ptd_unshift(
			t_ft_types_slist_ptd *list,
			t_ptd value);
bool	ft_types_slist_ptd_shift(
			t_ft_types_slist_ptd *list,
			t_ptd *out);

#endif
