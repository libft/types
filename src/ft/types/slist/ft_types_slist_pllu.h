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

#ifndef FT_TYPES_SLIST_PLLU_H
# define FT_TYPES_SLIST_PLLU_H

# include "ft_types_array_pllu.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pllu_node
{
	struct s_ft_types_slist_pllu_node	*next;
	t_pllu								value;
}	t_ft_types_slist_pllu_node;

typedef struct s_ft_types_slist_pllu
{
	t_ft_types_slist_pllu_node	*head;
	t_ft_types_slist_pllu_node	*tail;
	size_t						length;
}	t_ft_types_slist_pllu;

void	ft_types_slist_pllu_init(
			t_ft_types_slist_pllu *list);
void	ft_types_slist_pllu_clear(
			t_ft_types_slist_pllu *list);
t_err	ft_types_slist_pllu_to_array(
			t_ft_types_slist_pllu *list,
			t_ft_types_array_pllu *out);
t_err	ft_types_slist_pllu_from_array(
			t_ft_types_array_pllu *array,
			t_ft_types_slist_pllu *out);
t_err	ft_types_slist_pllu_push(
			t_ft_types_slist_pllu *list,
			t_pllu value);
t_err	ft_types_slist_pllu_unshift(
			t_ft_types_slist_pllu *list,
			t_pllu value);
bool	ft_types_slist_pllu_shift(
			t_ft_types_slist_pllu *list,
			t_pllu *out);

#endif
