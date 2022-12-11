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

#ifndef FT_TYPES_SLIST_PLU_H
# define FT_TYPES_SLIST_PLU_H

# include "ft_types_array_plu.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_plu_node
{
	struct s_ft_types_slist_plu_node	*next;
	t_plu								value;
}	t_ft_types_slist_plu_node;

typedef struct s_ft_types_slist_plu
{
	t_ft_types_slist_plu_node	*head;
	t_ft_types_slist_plu_node	*tail;
	size_t						length;
}	t_ft_types_slist_plu;

void	ft_types_slist_plu_init(
			t_ft_types_slist_plu *list);
void	ft_types_slist_plu_clear(
			t_ft_types_slist_plu *list);
t_err	ft_types_slist_plu_to_array(
			t_ft_types_slist_plu *list,
			t_ft_types_array_plu *out);
t_err	ft_types_slist_plu_from_array(
			t_ft_types_array_plu *array,
			t_ft_types_slist_plu *out);
t_err	ft_types_slist_plu_push(
			t_ft_types_slist_plu *list,
			t_plu value);
t_err	ft_types_slist_plu_unshift(
			t_ft_types_slist_plu *list,
			t_plu value);
bool	ft_types_slist_plu_shift(
			t_ft_types_slist_plu *list,
			t_plu *out);

#endif
