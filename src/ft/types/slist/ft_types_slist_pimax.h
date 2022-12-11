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

#ifndef FT_TYPES_SLIST_PIMAX_H
# define FT_TYPES_SLIST_PIMAX_H

# include "ft_types_array_pimax.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_pimax_node
{
	struct s_ft_types_slist_pimax_node	*next;
	t_pimax								value;
}	t_ft_types_slist_pimax_node;

typedef struct s_ft_types_slist_pimax
{
	t_ft_types_slist_pimax_node	*head;
	t_ft_types_slist_pimax_node	*tail;
	size_t						length;
}	t_ft_types_slist_pimax;

void	ft_types_slist_pimax_init(
			t_ft_types_slist_pimax *list);
void	ft_types_slist_pimax_clear(
			t_ft_types_slist_pimax *list);
t_err	ft_types_slist_pimax_to_array(
			t_ft_types_slist_pimax *list,
			t_ft_types_array_pimax *out);
t_err	ft_types_slist_pimax_from_array(
			t_ft_types_array_pimax *array,
			t_ft_types_slist_pimax *out);
t_err	ft_types_slist_pimax_push(
			t_ft_types_slist_pimax *list,
			t_pimax value);
t_err	ft_types_slist_pimax_unshift(
			t_ft_types_slist_pimax *list,
			t_pimax value);
bool	ft_types_slist_pimax_shift(
			t_ft_types_slist_pimax *list,
			t_pimax *out);

#endif
