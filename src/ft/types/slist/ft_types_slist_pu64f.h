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

#ifndef FT_TYPES_SLIST_PU64F_H
# define FT_TYPES_SLIST_PU64F_H

# include "ft_types_array_pu64f.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pu64f_node
{
	struct s_ft_types_slist_pu64f_node	*next;
	t_pu64f								value;
}	t_ft_types_slist_pu64f_node;

typedef struct s_ft_types_slist_pu64f
{
	t_ft_types_slist_pu64f_node	*head;
	t_ft_types_slist_pu64f_node	*tail;
	size_t						length;
}	t_ft_types_slist_pu64f;

void	ft_types_slist_pu64f_init(
			t_ft_types_slist_pu64f *list);
void	ft_types_slist_pu64f_clear(
			t_ft_types_slist_pu64f *list);
t_err	ft_types_slist_pu64f_to_array(
			t_ft_types_slist_pu64f *list,
			t_ft_types_array_pu64f *out);
t_err	ft_types_slist_pu64f_from_array(
			t_ft_types_array_pu64f *array,
			t_ft_types_slist_pu64f *out);
t_err	ft_types_slist_pu64f_push(
			t_ft_types_slist_pu64f *list,
			t_pu64f value);
t_err	ft_types_slist_pu64f_unshift(
			t_ft_types_slist_pu64f *list,
			t_pu64f value);
bool	ft_types_slist_pu64f_shift(
			t_ft_types_slist_pu64f *list,
			t_pu64f *out);

#endif
