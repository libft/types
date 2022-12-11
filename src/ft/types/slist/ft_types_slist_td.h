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

#ifndef FT_TYPES_SLIST_TD_H
# define FT_TYPES_SLIST_TD_H

# include "ft_types_array_td.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_td_node
{
	struct s_ft_types_slist_td_node	*next;
	t_td							value;
}	t_ft_types_slist_td_node;

typedef struct s_ft_types_slist_td
{
	t_ft_types_slist_td_node	*head;
	t_ft_types_slist_td_node	*tail;
	size_t						length;
}	t_ft_types_slist_td;

void	ft_types_slist_td_init(
			t_ft_types_slist_td *list);
void	ft_types_slist_td_clear(
			t_ft_types_slist_td *list);
t_err	ft_types_slist_td_to_array(
			t_ft_types_slist_td *list,
			t_ft_types_array_td *out);
t_err	ft_types_slist_td_from_array(
			t_ft_types_array_td *array,
			t_ft_types_slist_td *out);
t_err	ft_types_slist_td_push(
			t_ft_types_slist_td *list,
			t_td value);
t_err	ft_types_slist_td_unshift(
			t_ft_types_slist_td *list,
			t_td value);
bool	ft_types_slist_td_shift(
			t_ft_types_slist_td *list,
			t_td *out);

#endif
