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

#ifndef FT_TYPES_SLIST_LLU_H
# define FT_TYPES_SLIST_LLU_H

# include "ft_types_array_llu.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_llu_node
{
	struct s_ft_types_slist_llu_node	*next;
	t_llu								value;
}	t_ft_types_slist_llu_node;

typedef struct s_ft_types_slist_llu
{
	t_ft_types_slist_llu_node	*head;
	t_ft_types_slist_llu_node	*tail;
	size_t						length;
}	t_ft_types_slist_llu;

void	ft_types_slist_llu_init(
			t_ft_types_slist_llu *list);
void	ft_types_slist_llu_clear(
			t_ft_types_slist_llu *list);
t_err	ft_types_slist_llu_to_array(
			t_ft_types_slist_llu *list,
			t_ft_types_array_llu *out);
t_err	ft_types_slist_llu_from_array(
			t_ft_types_array_llu *array,
			t_ft_types_slist_llu *out);
t_err	ft_types_slist_llu_push(
			t_ft_types_slist_llu *list,
			t_llu value);
t_err	ft_types_slist_llu_unshift(
			t_ft_types_slist_llu *list,
			t_llu value);
bool	ft_types_slist_llu_shift(
			t_ft_types_slist_llu *list,
			t_llu *out);

#endif
