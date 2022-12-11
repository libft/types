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

#ifndef FT_TYPES_SLIST_PERR_H
# define FT_TYPES_SLIST_PERR_H

# include "ft_types_array_perr.h"
# include "ft_types_derived.h"

typedef struct s_ft_types_slist_perr_node
{
	struct s_ft_types_slist_perr_node	*next;
	t_perr								value;
}	t_ft_types_slist_perr_node;

typedef struct s_ft_types_slist_perr
{
	t_ft_types_slist_perr_node	*head;
	t_ft_types_slist_perr_node	*tail;
	size_t						length;
}	t_ft_types_slist_perr;

void	ft_types_slist_perr_init(
			t_ft_types_slist_perr *list);
void	ft_types_slist_perr_clear(
			t_ft_types_slist_perr *list);
t_err	ft_types_slist_perr_to_array(
			t_ft_types_slist_perr *list,
			t_ft_types_array_perr *out);
t_err	ft_types_slist_perr_from_array(
			t_ft_types_array_perr *array,
			t_ft_types_slist_perr *out);
t_err	ft_types_slist_perr_push(
			t_ft_types_slist_perr *list,
			t_perr value);
t_err	ft_types_slist_perr_unshift(
			t_ft_types_slist_perr *list,
			t_perr value);
bool	ft_types_slist_perr_shift(
			t_ft_types_slist_perr *list,
			t_perr *out);

#endif
